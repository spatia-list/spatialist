using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using System;
using System.Collections.Generic;
using System.Linq;
// using System.Numerics;
using System.Threading.Tasks;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;
using UnityEngine.XR.ARFoundation;


// STRUCTURES //
public enum ManagerState
{
    IDLE,
    MAPPING,
    CREATE
}

public class LocalAnchor
{
    public string anchorId;
    public string owner;
    public GameObject Instance;

    public LocalAnchor(string anchorId, string owner)
    {
        this.anchorId = anchorId;
        this.owner = owner;
    }

    public void AttachInstance(GameObject instance)
    { this.Instance = instance; }
}

public enum PostItType
{
    TEXT, MEDIA
}

public class PostIt
{
    public string Id;
    public string AnchorId;
    public string Owner;
    public string Title;
    public PostItType Type;
    public string Content;
    public Color Color;
    public Pose? Pose;

    public GameObject Instance;

    public PostIt(string id, string anchorId, string owner, string title, PostItType type, string content, Color color, Pose? pose)
    {
        Id = id;
        AnchorId = anchorId;
        Owner = owner;
        Title = title;
        Type = type;
        Content = content;
        Color = color;
        Pose = pose;
    }

    public static PostIt ParseJSON(PostItJSON data)
    {
        PostItType type;
        Color color;
        Pose pose;

        if (data.content_type == "media")
        {
            type = PostItType.MEDIA;
        }
        else
        {
            type = PostItType.TEXT;
        }

        if (data.rgb != null && data.rgb.Count >= 3)
        {
            color = new Color(data.rgb[0], data.rgb[1], data.rgb[2]);
        }
        else
        {
            Debug.Log("APP_DEBUG: Received invalid RGB data");
            color = Color.white;
        }

        if (data.pose != null && data.pose.position != null && data.pose.orientation != null)
        {
            List<float> tempPose = data.pose.position;
            List<float> tempRot = data.pose.orientation;
            pose = new Pose(new Vector3(tempPose[0], tempPose[1], tempPose[2]), new Quaternion(tempRot[0], tempRot[1], tempRot[2], tempRot[3]));
        }
        else
        {
            pose = new Pose(new Vector3(0, 0, 0), new Quaternion(1, 0, 0, 0));
        }


        return new PostIt(
                data.id,
                data.anchor_id,
                data.owner,
                data.title,
                type,
                data.content,
                color,
                pose
            );
    }

    public static PostIt Test()
    {
        return new PostIt("1", "1", "TestUser", "Test Title", PostItType.TEXT, "This is some content", Color.blue, null);
    }
}
// STRUCTURES //



[RequireComponent(typeof(SpatialAnchorManager))]
public class AzureSpatialAnchorsScript : MonoBehaviour
{
    /// <summary>
    /// Used to distinguish short taps and long taps
    /// </summary>
    private float[] _tappingTimer = { 0, 0 };

    private float _refreshTimer;

    /// <summary>
    /// Main interface to anything Spatial Anchors related
    /// </summary>
    private SpatialAnchorManager _spatialAnchorManager;

    /// <summary>
    /// Main interface to make API calls and connect to DB
    /// </summary>
    private NetworkManager _networkManager;

    /// <summary>
    /// Used to keep track of all found local anchors, coming from Azure Spatial Anchors
    /// </summary>
    private List<LocalAnchor> _foundLocalAnchors = new();

    /// <summary>
    /// Used to keep track of all existing local anchors, saved on the cosmos DB server
    /// </summary>
    private List<LocalAnchor> _existingLocalAnchors = new();

    /// <summary>
    /// Used to keep track of all found postits
    /// </summary>
    private List<PostIt> _foundPostIts = new();
    private List<PostItManager> _foundPostItManagers = new();

    /// <summary>
    /// Used to keep track of all available postits
    /// </summary>
    private List<PostIt> _availablePostIts = new();

    /// <summary>
    /// The prefab we will use as a new Post-it instance
    /// </summary>
    public GameObject PostItPrefab;

    /// <summary>
    /// The prefab we will use as a new anchor instance
    /// </summary>
    public GameObject AnchorPrefab;
    public GameObject FoundAnchorPrefab;

    /// <summary>
    /// Initial state of the manager
    /// </summary>
    private ManagerState _state;

    private String _currentGroup = "TestRoom";

    /// <summary>
    /// The distance threshold to attach a post-it to an anchor (in meters)
    /// </summary>
    private float _anchorDistanceThreshold = 3;

    // Create a new UnityEvent that can be assigned in the Unity editor
    public UnityEvent onShortTap; 

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        //Set state to idle
        _state = ManagerState.IDLE;
        Debug.Log("APP_DEBUG: starting the session");

        // Fetch all managers
        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();
        _networkManager = GetComponent<NetworkManager>();

        // Set debuggers
        _spatialAnchorManager.LogDebug += (sender, args) => Debug.Log($"APP_DEBUG: ASA - Debug: {args.Message}");
        _spatialAnchorManager.Error += (sender, args) => Debug.LogError($"ASA - Error: {args.ErrorMessage}");

        // Set the callback for when anchors are found
        _spatialAnchorManager.AnchorLocated += SpatialAnchorManager_AnchorLocated;

        // Start the ASA session and load all anchors and add to watcher
        StartAndLoadASASession();

        // Start the refresh timer
        _refreshTimer = 0.0f;

    }
    // </Start>

    private async void StartAndLoadASASession()
    {
        if (_spatialAnchorManager.IsSessionStarted)
        {
            // Stop Session and remove all GameObjects. This does not delete the Anchors in the cloud
            _spatialAnchorManager.DestroySession();
            Debug.LogError("ASA - Stopped Session and removed all Anchor Objects");
        }
        else
        {
            //Start session and search for all Anchors previously created
            await _spatialAnchorManager.StartSessionAsync();
            FetchAnchorsFromDBAndAddToWatcher();
        }
    }

    // <FetchAnchorsFromDBAndAddToWatcher>
    /// <summary>
    /// Fetch all anchors beloging to the group from API and create a watcher to look for them
    /// This function is called when doing the extending a map or localisation
    /// </summary>
    private async void FetchAnchorsFromDBAndAddToWatcher()
    {

        _existingLocalAnchors = await _networkManager.GetAnchors();

        List<string> existingLocalAnchorIds = new List<String>();
        foreach (LocalAnchor anchor in _existingLocalAnchors)
        {
            Debug.Log("APP_DEBUG: ASA - api anchor " + anchor.anchorId);
            existingLocalAnchorIds.Add(anchor.anchorId);
        }

        if (_existingLocalAnchors.Count > 0)
        {
            // Create watcher to look for all stored anchor IDs
            // A watcher tries to locate the anchors in the environment and callback when it finds one
            Debug.Log($"APP_DEBUG: ASA - Creating watcher to look for {_existingLocalAnchors.Count} spatial anchors");
            AnchorLocateCriteria anchorLocateCriteria = new AnchorLocateCriteria();
            anchorLocateCriteria.Identifiers = existingLocalAnchorIds.ToArray();
            _spatialAnchorManager.Session.CreateWatcher(anchorLocateCriteria);
            Debug.Log($"APP_DEBUG: ASA - Watcher created!");
        }
    }
    // </FetchAnchorsFromDBAndAddToWatcher>


    // <Update>
    // Update is called once per frame
    void Update()
    {

        //Check for any air taps from either left hand or right hand
        for (int handTypeIndex = 0; handTypeIndex < 2; handTypeIndex++)
        {
            InputDevice device = InputDevices.GetDeviceAtXRNode((handTypeIndex == 0) ? XRNode.RightHand : XRNode.LeftHand);
            if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
            {
                if (!isTapping)
                {
                    //Stopped Tapping or wasn't tapping
                    if (0f < _tappingTimer[handTypeIndex] && _tappingTimer[handTypeIndex] < 1f)
                    {
                        //User has been tapping for less than 1 sec. Get hand position and call ShortTap
                        if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
                        {
                            ShortTap(handPosition);
                        }
                    }
                    _tappingTimer[handTypeIndex] = 0;
                }
                else
                {
                    _tappingTimer[handTypeIndex] += Time.deltaTime;

                }
            }
        }

        // Refresh the data every 5 seconds
        _refreshTimer += Time.deltaTime;
        if (_refreshTimer > 5.0f)
        {
            RefreshData();

            _refreshTimer = 0.0f;
        }
    }
    // </Update>


    // <ShortTap>
    /// <summary>
    /// Called when a user is air tapping for a short time 
    /// </summary>
    /// <param name="handPosition">Location where tap was registered</param>
    private async void ShortTap(Vector3 handPosition)
    {

        Debug.Log("APP_DEBUG: Detected a tap!");

        // Fire the onShortTap event
        onShortTap?.Invoke();

        switch (_state)
        {
            case ManagerState.MAPPING:
                {
                    Debug.Log("APP_DEBUG: MAPPING MODE");
                    await CreateLocalAnchor(handPosition);
                    break;
                }

            case ManagerState.CREATE:
                {
                    Debug.Log("APP_DEBUG: CREATE MODE");
                    CreatePostIt(handPosition, PostIt.Test());
                    break;
                }

            case ManagerState.IDLE:
                {
                    Debug.Log("APP_DEBUG: IDLE MODE");
                    break;
                }

            default:
                {
                    Debug.Log("APP_DEBUG: Manager is in unknow state!");
                    break;
                }
        }
    }
    // </ShortTap>


    public void SetCurrentGroup(String name)
    {
        _currentGroup = name;
        RefreshData();
    }

    public void SetUsername(String name)
    {
        _networkManager.Username = name;
        RefreshData();
    }

    public async void RefreshData()
    {
        Debug.Log("APP_DEBUG: Performing Refresh...");
        if (await _networkManager.ShouldRefreshAnchors())
        {

            FetchAnchorsFromDBAndAddToWatcher();

        }
        else
        {
            Debug.Log("APP_DEBUG: Skipping anchor refresh!");
        }

        if(await  _networkManager.ShouldRefreshPostIts())
        {
            await GetAndPlacePostIts();
        }

        // Check if we have a swipe from the API for the current user
        PostIt swiped = await _networkManager.GetSwipe();
        if (swiped != null)
        {
            Debug.Log("APP_DEBUG: Creating swipe!");
            CreateSwipe(swiped);
        }
    }

    public async Task GetAndPlacePostIts()
    {
        _availablePostIts = await _networkManager.GetPostIts();

        // construct list of found anchor IDs
        List<string> anchors = new List<string>();
        foreach(LocalAnchor anchor in _foundLocalAnchors)
        {
            anchors.Add(anchor.anchorId);
        }

        _foundPostItManagers.Clear();
        _foundPostIts.Clear();

        // filter the available postits 
        foreach(PostIt postIt in _availablePostIts)
        {
            foreach (string id in anchors)
            {
                if (id == postIt.AnchorId)
                {
                    Debug.Log("ASA - Found a local postit, placing...");
                    _foundPostIts.Add(postIt);
                    UnityDispatcher.InvokeOnAppThread(() =>
                    {
                        GameObject go = Instantiate(PostItPrefab);
                        // Attach the the
                        PostItManager manager = go.GetComponent<PostItManager>();
                        manager.AttachToInstance(this); //this: linking the instance of the ASA script to the postit manager (to use the private variables)
                        manager.SetObject(postIt);

                        _foundPostItManagers.Add(manager);
                        _foundPostIts.Add(postIt);
                    });

                    Debug.Log("ASA - Postit successfully placed!");
                    break;
                }
            }
        }
    }

    public async void BeginMapping()
    {
        _state = ManagerState.MAPPING;
        ShowAnchors();
    }

    public void BeginCreate()
    {
        switch (_state)
        {
            case ManagerState.MAPPING:
                {
                    _state = ManagerState.CREATE;
                    HideAnchors();
                    break;
                }
            default:
                {
                    Debug.Log("APP_DEBUG: TODO");
                    break;
                }
        }

    }

    public void SetStateIdle() { _state = ManagerState.IDLE; }


    public void HideAnchors()
    {
        Debug.Log($"APP_DEBUG: ASA - Hiding {_foundLocalAnchors.Count} found local anchors");
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            foreach (LocalAnchor anchor in _foundLocalAnchors)
            {
                if (anchor.Instance != null)
                {
                    anchor.Instance.SetActive(false);
                    Debug.Log("APP_DEBUG: Hid found anchor: " + anchor.anchorId);
                }

            }
        });

    }

    public void ShowAnchors()
    {
        Debug.Log($"APP_DEBUG: ASA - Showing {_foundLocalAnchors.Count} found local anchors");
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            foreach (LocalAnchor anchor in _foundLocalAnchors)
            {
                if (anchor.Instance != null)
                {
                    anchor.Instance.SetActive(true);
                    Debug.Log("APP_DEBUG: Show found anchor: " + anchor.anchorId);
                }

            }
        });

    }

    // <CreateLocalAnchor>
    /// <summary>
    /// Creates an Azure Spatial Anchor at the given position rotated towards the user
    /// </summary>
    /// <param name="position">Position where Azure Spatial Anchor will be created</param>
    /// <returns>Async Task</returns>
    private async Task CreateLocalAnchor(Vector3 position)
    {

        UnityDispatcher.InvokeOnAppThread(async () =>
        {
            //Create Anchor GameObject
            Debug.Log("APP_DEBUG: Beginning local anchor creation (generation of GameObject)");
            Quaternion orientation = new(0, 0, 0, 1);
            GameObject anchorGameObject = Instantiate(AnchorPrefab, position, orientation);
            anchorGameObject.transform.localScale = Vector3.one * 0.07f;

            Debug.Log("APP_DEBUG: Instantiated marker");
            if (_spatialAnchorManager == null)
            {
                Debug.Log("APP_DEBUG: Null manager error"); return;
            }
            Debug.Log("APP_DEBUG: SM is OK!");

            if (!_spatialAnchorManager.IsSessionStarted)
            {
                Debug.Log("APP_DEBUG: ASA - Session is not started"); return;
            }
            Debug.Log("APP_DEBUG: Session is started!");

            Debug.Log("APP_DEBUG: Instantiated marker");
            if (_spatialAnchorManager == null)
            {
                Debug.Log("APP_DEBUG: Null manager error"); return;
            }
            Debug.Log("APP_DEBUG: SM is OK!");

            if (!_spatialAnchorManager.IsSessionStarted)
            {
                Debug.Log("APP_DEBUG: ASA - Session is not started"); return;
            }
            Debug.Log("APP_DEBUG: Session is started!");

            // Use ASA to save the position and the rotation of this GameObject.
            // Add and configure ASA components
            CloudNativeAnchor cloudNativeAnchor = anchorGameObject.AddComponent<CloudNativeAnchor>();
            await cloudNativeAnchor.NativeToCloud();

            Debug.Log("APP_DEBUG: Got cloud anchor conversion.");
            CloudSpatialAnchor cloudSpatialAnchor = cloudNativeAnchor.CloudAnchor;
            cloudSpatialAnchor.Expiration = DateTimeOffset.Now.AddDays(30);

            Debug.Log("APP_DEBUG: Finished creating cloud native anchor");
            // Collect Environment Data
            while (!_spatialAnchorManager.IsReadyForCreate)
            {
                float createProgress = _spatialAnchorManager.SessionStatus.RecommendedForCreateProgress;
                Debug.Log($"APP_DEBUG: ASA - Move your device to capture more environment data: {createProgress:0%}");
            }

            Debug.Log($"APP_DEBUG: ASA - Ready to save the anchor in the cloud... ");

            try
            {
                // Save the anchor to the ASA cloud
                await _spatialAnchorManager.CreateAnchorAsync(cloudSpatialAnchor);

                bool saveSucceeded = cloudSpatialAnchor != null;
                if (!saveSucceeded)
                {
                    Debug.LogError("ASA - Failed to save, but no exception was thrown.");
                    anchorGameObject.SetActive(false);
                    return;
                }

                Debug.Log($"APP_DEBUG: ASA - Saved cloud anchor with ID: {cloudSpatialAnchor.Identifier}");

                // Create a LocalAnchor class instance and attach the GameObject to it
                LocalAnchor createdAnchor = new(cloudSpatialAnchor.Identifier, _currentGroup);
                createdAnchor.AttachInstance(anchorGameObject);

                if (await _networkManager.PostAnchor(createdAnchor))
                {
                    Debug.Log("APP_DEBUG: ASA - Succesful API save!");
                    // Add the created anchor to the list of found anchors 

                    _foundLocalAnchors.Add(createdAnchor);
                }
                else
                {
                    Debug.Log("APP_DEBUG: ASA - Error in API save!");
                    anchorGameObject.SetActive(false);
                }

            }
            catch (Exception exception)
            {
                Debug.Log("APP_DEBUG: ASA - Failed to save anchor: " + exception.ToString());
                Debug.LogException(exception);
                anchorGameObject.SetActive(false);
            }

        });


    }
    // </CreateLocalAnchor>

    // <CreatePostIt>
    /// <summary>
    /// Creates a PostIt instance
    /// </summary>
    /// <param name="position"> postit_position_W post-it creation (in world space) </param>
    /// <returns> Async Task </returns>
    private void CreatePostIt(Vector3 postitWorldPosition, PostIt data)
    {
        UnityDispatcher.InvokeOnAppThread(async () =>
        {
            Debug.Log("APP_DEBUG: Beginning post-it creation");
            // Find the nearest anchor (within the treshold) to the post-it position
            (LocalAnchor ClosestAnchor, float anchorDistance) = GetClosestAnchor(postitWorldPosition);

            Debug.Log($"APP_DEBUG: Found nearby anchor!");

            if (anchorDistance < _anchorDistanceThreshold)
            {
                Debug.Log($"APP_DEBUG: Found nearby anchor! (within {_anchorDistanceThreshold}m)");
            }
            else
            {
                Debug.Log($"APP_DEBUG: No nearby anchor found! (within {_anchorDistanceThreshold}m). Anchor is being created at the tapped position");

                // Create an anchor at the post-it position
                await CreateLocalAnchor(postitWorldPosition);

            }

            // Get head world position
            if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headWorldPosition))
            {
                headWorldPosition = Vector3.zero;
            }

            /// Create the post-it GameObject ///
            // Calculate rotation in the world coordinate frame towards the headset
            Quaternion worldRotationTowardsHead = Quaternion.LookRotation(postitWorldPosition - headWorldPosition, Vector3.up);
            // Initializing the post it GameObject
            GameObject postItGameObject = Instantiate(PostItPrefab, postitWorldPosition, worldRotationTowardsHead);
            // Scale the post-it to be 30cm in height
            postItGameObject.transform.localScale = Vector3.one * 0.3f;

            // Attach the post-it Game Object to the PostItManager script
            PostItManager manager = postItGameObject.GetComponent<PostItManager>();
            manager.AttachToInstance(this); //this: linking the instance of the ASA script to the postit manager (to use the private variables)
            manager.SetObject(data);


            // Ones the user presses on the save button, the post-it is saved

            // Features to develop:
            // Setting the anchor as the parent GameObject (so we can calculate relative tranformations later)

            // postItGameObject.transform.SetParent(nearestAnchorGameObject.transform, true);

        });

    }
    // </CreatePostIt>


    // <GetClosestAnchor>
    /// <summary>
    /// Returns the closest anchor to the received position of a postit
    /// </summary>
    /// <param name="position">position of the postit</param>
    /// <returns>closest anchor</returns>
    /// <returns>distance to closest anchor</returns>
    private Tuple<LocalAnchor, float> GetClosestAnchor(Vector3 position)
    {

        if (_foundLocalAnchors.Count <= 0)
        {
            Debug.Log("APP_DEBUG: ASA - No anchors found, so no closest anchor.");
            return new Tuple<LocalAnchor, float>(null, Mathf.Infinity);
        }

        //Iterate over existing anchor gameobjects to find the closest one
        return _foundLocalAnchors.Aggregate(
            new Tuple<LocalAnchor, float>(null, Mathf.Infinity), // Base case
            (currentBest, itemToCompare) =>
            {
                if (itemToCompare.Instance == null) return currentBest; // Cant compare empty local anchors
                GameObject gameobject = itemToCompare.Instance;
                Vector3 gameObjectPosition = gameobject.transform.position;
                float distance = (position - gameObjectPosition).magnitude;
                Debug.Log($"APP_DEBUG: ASA - Distances - Anchor {itemToCompare.anchorId} has distance {distance}");
                return distance < currentBest.Item2 ? new Tuple<LocalAnchor, float>(itemToCompare, distance) : currentBest;
            });
    }
    // </GetClosestAnchor>


    // <GetPoseToClosestAnchor>
    /// <summary>
    /// Directly get the pose to closest anchor, if it exists (nullable pose)
    /// </summary>
    private Pose? GetPoseToClosestAnchor(GameObject postit) // Pose? (optional type) -> nullable pose, we can check if a pose was not found
    {
        // null check postit
        if (postit == null)
        {
            Debug.Log("APP_DEBUG: ASA - Cannot get pose to null gameobject");
            return null;
        }

        // Get closest LocalAnchor and distance
        Vector3 postitWorldPosition = postit.transform.position;
        Tuple<LocalAnchor, float> closest = GetClosestAnchor(postitWorldPosition);
        LocalAnchor closestAnchor = closest.Item1;
        float anchorDistance = closest.Item2;

        // null check closest anchor
        if (closest == null || closestAnchor == null)
        {
            Debug.Log("APP_DEBUG: ASA - No closest anchor found");
            return null;
        }

        Debug.Log($"APP_DEBUG: ASA - Found closest Anchor {closestAnchor.anchorId} has distance {anchorDistance}");

        //relative position and rotation calculation
        // Calculate relative position (post-it position relative to anchor position)
        Vector3 postitRelativePosition = closestAnchor.Instance.transform.InverseTransformPoint(postitWorldPosition);

        // Calculate relative rotation (post-it rotation relative to anchor rotation)
        Quaternion postitWorldRotation = postit.transform.rotation;
        Quaternion postitRelativeRotation = Quaternion.Inverse(closestAnchor.Instance.transform.rotation) * postitWorldRotation;

        Pose poseTransform = new Pose(postitRelativePosition, postitRelativeRotation);

        Debug.Log("APP_DEBUG: ASA - Found pose transform " + poseTransform.ToString());
        return poseTransform;

    }

    // <ApplyPoseFromCosmos>
    /// <summary>
    /// Applies the saved pose (saved in cosmosDB) to the post-it
    /// </summary>
    /// <param name="anchorId">anchor id of the post-it</param>
    /// <param name="savedPose">saved pose of the post-it</param>
    public Pose? ApplyPoseFromCosmos(string anchorId, Pose savedPose)
    {
        if (!string.IsNullOrEmpty(anchorId))
        {
            Debug.Log("APP_DEBUG: ASA - Received empty anchor id in ApplyPoseFromCosmos"); return null;
        }

        if (_foundLocalAnchors.Count <= 0)
        {
            Debug.Log("APP_DEBUG: ASA - No anchors to apply on in ApplyPoseFromCosmos"); return null;
        }

        // Find the found anchor in list
        Debug.Log("ASA - Trying to find local anchor corresponding to postit");
        LocalAnchor localAnchor = null;
        foreach (LocalAnchor anchor in _foundLocalAnchors)
        {
            if (anchor.anchorId == anchorId)
            {
                localAnchor = anchor;
                break;
            }
        }

        if (localAnchor == null)
        {
            Debug.Log("APP_DEBUG: ASA - Did not find source anchor in ApplyPoseFromCosmos"); return null;
        }

        Debug.Log("ASA - Found corresponding local anchor, attaching");

        Vector3 postitPositionTransform = localAnchor.Instance.transform.position + savedPose.position;
        Quaternion postitRotationTransform = localAnchor.Instance.transform.rotation * savedPose.rotation;

        return new Pose(postitPositionTransform, postitRotationTransform);

    }

    // <SavePostIt>
    /// <summary>
    /// Saves the post-it relative transformation (to the anchor position) to the backend (cosmos DB)
    /// </summary>
    /// <param name="data">post-it data</param>
    public Exception SavePostIt(PostIt data, GameObject obj)
    {
        Pose? pose = GetPoseToClosestAnchor(obj);
        if (pose == null)
        {
            Debug.Log("APP_DEBUG: ASA - Could not find a pose transform for the PostIt");
            return new Exception("ASA - No anchor found for postit");
        }
        data.Pose = pose.Value;

        // Attempt save of the postit data
        try
        {
            _networkManager.PostPostIt(data);
        }
        catch (Exception e)
        {
            Debug.Log(e);
            return e;
        }

        return null;
    }

    public void CreateSwipe(PostIt content)
    {
        //Create Anchor GameObject. We will use ASA to save the position and the rotation of this GameObject.
        if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headPosition))
        {
            headPosition = Vector3.zero;
        }

        Vector3 final = headPosition + new Vector3(0, 0, 1);

        Debug.Log("APP_DEBUG: PostIt - " + final);

        CreatePostIt(final, content);
    }


    // <SpatialAnchorManagerAnchorLocated>
    /// <summary>
    /// Callback when an anchor is located
    /// </summary>
    /// <param name="sender">Callback sender</param>
    /// <param name="args">Callback AnchorLocatedEventArgs</param>
    private void SpatialAnchorManager_AnchorLocated(object sender, AnchorLocatedEventArgs args)
    {
        Debug.Log($"APP_DEBUG: ASA - Anchor recognized as a possible anchor {args.Identifier} {args.Status}");

        switch (args.Status)
        {
            case LocateAnchorStatus.Located:
            case LocateAnchorStatus.AlreadyTracked:

                // Go add your anchor to the scene...

                //Creating and adjusting GameObjects have to run on the main thread. We are using the UnityDispatcher to make sure this happens.
                UnityDispatcher.InvokeOnAppThread(() =>
                {
                    CloudSpatialAnchor foundAnchor = args.Anchor;
                    string id = foundAnchor.Identifier;
                    Debug.Log("APP_DEBUG: ASA - Instantiating found anchor");

                    // find in available
                    LocalAnchor correspondingAnchor = _existingLocalAnchors.Find((anchor) => anchor.anchorId == id);
                    if (correspondingAnchor == null) { Debug.Log("APP_DEBUG: Unknown identifier encountered"); return; }

                    //Create GameObject

                    GameObject anchorGameObject = Instantiate(FoundAnchorPrefab, Vector3.zero, Quaternion.identity);
                    anchorGameObject.transform.localScale = Vector3.one * 0.07f;



                    Debug.Log("APP_DEBUG: ASA - Attaching anchor position...");
                    // Link to Cloud Anchor
                    try
                    {
                        Pose pose = foundAnchor.GetPose();
                        Debug.Log("APP_DEBUG: ASA - Pose:" + pose.ToString());
                        anchorGameObject.AddComponent<CloudNativeAnchor>().CloudToNative(foundAnchor);

                    }
                    catch (Exception e)
                    {
                        Debug.Log("APP_DEBUG: ASA - Error attaching anchor position");
                        Debug.LogException(e);
                    }

                    correspondingAnchor.AttachInstance(anchorGameObject);
                    Debug.Log("APP_DEBUG: ASA - Attached anchor position");

                    _foundLocalAnchors.Add(correspondingAnchor);
                    Debug.Log($"APP_DEBUG: ASA - There are now {_foundLocalAnchors.Count} found local anchors");
                    if (_state != ManagerState.MAPPING)
                    {
                        anchorGameObject.SetActive(false);
                        Debug.Log("APP_DEBUG: ASA - Set anchor to disabled as not in mapping mode");
                    }
                });
                break;

            case LocateAnchorStatus.NotLocatedAnchorDoesNotExist:
                // The anchor was deleted or never existed in the first place
                // Drop it, or show UI to ask user to anchor the content anew
                break;
            case LocateAnchorStatus.NotLocated:
                // The anchor hasn't been found given the location data
                // The user might in the wrong location, or maybe more data will help
                // Show UI to tell user to keep looking around
                break;
        }

    }
    // </SpatialAnchorManagerAnchorLocated>

    // <DeleteAnchor>
    /// <summary>
    /// Deleting Cloud Anchor attached to the given GameObject and deleting the GameObject
    /// </summary>
    /// <param name="anchorGameObject">Anchor GameObject that is to be deleted</param>
    private async void DeleteAnchor(GameObject anchorGameObject)
    {
        CloudNativeAnchor cloudNativeAnchor = anchorGameObject.GetComponent<CloudNativeAnchor>();
        CloudSpatialAnchor cloudSpatialAnchor = cloudNativeAnchor.CloudAnchor;

        Debug.Log($"APP_DEBUG: ASA - Deleting cloud anchor: {cloudSpatialAnchor.Identifier}");

        //Request Deletion of Cloud Anchor (Not for now)
        //await _spatialAnchorManager.DeleteAnchorAsync(cloudSpatialAnchor);

        //Remove local references
        //_foundOrCreatedAnchorGameObjects.Remove(anchorGameObject);
        //_foundOrCreatedAnchorIds.Remove(cloudSpatialAnchor.Identifier);
        anchorGameObject.SetActive(false);

        Debug.Log($"APP_DEBUG: ASA - Cloud anchor deleted!");
    }
    // </DeleteAnchor>

}