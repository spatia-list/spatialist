using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using Unity.XR.CoreUtils;
using UnityEngine;
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
    TEXT,MEDIA
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
        
        if(data.type == "media")
        {
            type = PostItType.MEDIA;
        } else
        {
            type = PostItType.TEXT;
        }

        

        if (data.rgb != null && data.rgb.Count >= 3)
        {
            color = new Color(data.rgb[0], data.rgb[1], data.rgb[2]);
        }
        else
        {
            Debug.Log("Received invalid RGB data");
            color = Color.white;
        }

        if (data.pose != null && data.pose.position != null && data.pose.orientation != null)
        {
            pose = new Pose(data.pose.position, data.pose.orientation);
        }
        else
        {  
            pose = new Pose(new Vector3(0,0,0), new Quaternion(0,0,0,1));
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

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        //Set state to idle
        _state = ManagerState.IDLE;
        Debug.Log("starting the session");

        // Fetch all managers
        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();
        _networkManager = GetComponent<NetworkManager>();

        // Set debuggers
        _spatialAnchorManager.LogDebug += (sender, args) => Debug.Log($"ASA - Debug: {args.Message}");
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
            Debug.Log("ASA - api anchor " + anchor.anchorId);
            existingLocalAnchorIds.Add(anchor.anchorId);
        }

        if (_existingLocalAnchors.Count > 0)
        {
            // Create watcher to look for all stored anchor IDs
            // A watcher tries to locate the anchors in the environment and callback when it finds one
            Debug.Log($"ASA - Creating watcher to look for {_existingLocalAnchors.Count} spatial anchors");
            AnchorLocateCriteria anchorLocateCriteria = new AnchorLocateCriteria();
            anchorLocateCriteria.Identifiers = existingLocalAnchorIds.ToArray();
            _spatialAnchorManager.Session.CreateWatcher(anchorLocateCriteria);
            Debug.Log($"ASA - Watcher created!");
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

        Debug.Log("Detected a tap!");

        switch (_state)
        {
            case ManagerState.MAPPING:
                {
                    Debug.Log("MAPPING MODE");
                    await CreateLocalAnchor(handPosition);
                    break;
                }

            case ManagerState.CREATE:
                {
                    Debug.Log("CREATE MODE");
                    CreatePostIt(handPosition, PostIt.Test());
                    break;
                }

            case ManagerState.IDLE:
                {
                    Debug.Log("IDLE MODE");
                    break;
                }

            default:
                {
                    Debug.Log("Manager is in unknow state!");
                    break;
                }
        }
    }
    // </ShortTap>


    public void SetCurrentGroup(String name) {
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
            // Debug.Log("Performing Refresh...");
            // if (await _networkManager.ShouldRefreshAnchors())
            // {

            //     FetchAnchorsFromDBAndAddToWatcher();

            // }
            // else
            // {
            //     Debug.Log("Skipping anchor refresh!");
            // }


            // Check if we have a swipe from the API for the current user
            PostIt swiped = await _networkManager.GetSwipe();
            if (swiped != null)
            {
                Debug.Log("Creating swipe!");
                CreateSwipe(swiped);
            }
    }

    public async void BeginMapping() {
        _state = ManagerState.MAPPING;
        ShowAnchors();
    }

    public void BeginCreate() {
        switch (_state)
        {
            case ManagerState.MAPPING:
                {
                    _state = ManagerState.CREATE;
                    HideAnchors();
                    break;
                }
            default: {
                    Debug.Log("TODO");
                    break;
                }
        }

    }

    public void SetStateIdle() { _state = ManagerState.IDLE; }


    public void SetWatcher()
    { 
        if (_availableLocalAnchors.Count <= 0)
        {
            Debug.Log("No watchers to add.");
            return; // dont add watcher if no anchors defined
        }

        

        Debug.Log("Setting up watcher...");


        List<String> localAnchors = new List<String>();
        foreach (var localAnchor in _availableLocalAnchors)
        {
            localAnchors.Add(localAnchor.anchorId);
            Debug.Log($"Adding to watcher: {localAnchor.anchorId}");
        }

        // Set the session's locate criteria
        AnchorLocateCriteria anchorLocateCriteria = new AnchorLocateCriteria
        {
            Identifiers = localAnchors.ToArray(),
        };
        
        //anchorLocateCriteria.BypassCache = true;

        CloudSpatialAnchorWatcher watcher = _spatialAnchorManager.Session.CreateWatcher(anchorLocateCriteria);

        Debug.Log($"ASA - Watcher created!");

    }


    /// <ResetSession>
    /// <summary>
    /// Start the ASA session
    /// </summary>
    private async void StartSession()
    {
        Debug.Log("Starting Session");

        if (_spatialAnchorManager == null)
        {
            Debug.Log("Cannot start session, no spatial manager.");
            return;
        }

        
        if (_spatialAnchorManager.IsSessionStarted)
        {
            CloudSpatialAnchorSession session = _spatialAnchorManager.Session;
            if (session == null) {
                Debug.Log("Could not fetch session");
            } else
            {
                session.Dispose();
                _spatialAnchorManager.StopSession();
                _spatialAnchorManager.DestroySession();
            }
            
        }

        
    }
    ///</ResetSession>

    public void HideAnchors()
    {
        Debug.Log($"ASA - Hiding {_foundLocalAnchors.Count} found local anchors");
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            foreach (LocalAnchor anchor in _foundLocalAnchors)
            {
               if(anchor.Instance != null)
                {
                    anchor.Instance.SetActive(false);
                    Debug.Log("Hid found anchor: " + anchor.anchorId);
                }
                
            } 
        });
        
    }

    public void ShowAnchors()
    {
        Debug.Log($"ASA - Showing {_foundLocalAnchors.Count} found local anchors");
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            foreach (LocalAnchor anchor in _foundLocalAnchors)
            {
                if (anchor.Instance != null)
                {
                    anchor.Instance.SetActive(true);
                    Debug.Log("Show found anchor: " + anchor.anchorId);
                }

            }
        });

    }


    // <NearestAnchorInThreshold>
    /// <summary>
    /// Returns true if an Anchor GameObject is within 1m of the received reference position
    /// </summary>
    /// <param name="position">Reference position</param>
    /// <param name="anchorGameObject"> (output) Anchor GameObject within the distance threshold of received position. 
    /// If no AnchorObject is within the threshold distance, this value will be null </param>
    /// <returns> True if a Anchor GameObject is within the distance threshold </returns>
    private bool NearestAnchorInThreshold(Vector3 position, float distanceThreshold, out GameObject nearestAnchorGameObject)
    {
        // Initialize output
        nearestAnchorGameObject = null;

        if (_foundLocalAnchors.Count <= 0)
        {
            return false;
        }

        //Iterate over existing anchor gameobjects (with an aggregation process) to find the nearest
        //Idea: implement spatial partitioning datastructure such as an octree to speed up the search
        var (distance, closestObject) = _foundLocalAnchors.Aggregate(
            new Tuple<float, GameObject>(Mathf.Infinity, null),
            (minPair, anchor) =>
            {
                if (anchor.Instance == null) return new Tuple<float, GameObject>(Mathf.Infinity, null);
                GameObject gameobject = anchor.Instance;
                Vector3 gameObjectPosition = gameobject.transform.position;
                float distance = (position - gameObjectPosition).magnitude;
                return distance < minPair.Item1 ? new Tuple<float, GameObject>(distance, gameobject) : minPair;
            });
            
        if (distance <= distanceThreshold)
        {
            //Output the nearest anchor
            nearestAnchorGameObject = closestObject;
            return true;
        }
        else
        {
            // Output the null GameObject
            return false;
        }
    }
    // </NearestAnchorInThreshold>

    // <CreateAnchor>
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
            Debug.Log("Beginning local anchor creation (generation of GameObject)");
            Quaternion orientation = new(0,0,0,1);
            GameObject anchorGameObject = Instantiate(AnchorPrefab, position, orientation);
            anchorGameObject.transform.localScale = Vector3.one * 0.07f;

            Debug.Log("Instantiated marker");
            if (_spatialAnchorManager == null)
            {
                Debug.Log("Null manager error"); return;
            }
            Debug.Log("SM is OK!");

            if (!_spatialAnchorManager.IsSessionStarted)
            {
                Debug.Log("ASA - Session is not started"); return;
            }
            Debug.Log("Session is started!");

            Debug.Log("Instantiated marker");
            if (_spatialAnchorManager == null)
            {
                Debug.Log("Null manager error"); return;
            }
            Debug.Log("SM is OK!");

            if (!_spatialAnchorManager.IsSessionStarted)
            {
                Debug.Log("ASA - Session is not started"); return;
            }
            Debug.Log("Session is started!");

            // Use ASA to save the position and the rotation of this GameObject.
            // Add and configure ASA components
            CloudNativeAnchor cloudNativeAnchor = anchorGameObject.AddComponent<CloudNativeAnchor>();
            await cloudNativeAnchor.NativeToCloud();

            Debug.Log("Got cloud anchor conversion.");
            CloudSpatialAnchor cloudSpatialAnchor = cloudNativeAnchor.CloudAnchor;
            cloudSpatialAnchor.Expiration = DateTimeOffset.Now.AddDays(30);

            Debug.Log("Finished creating cloud native anchor");
            // Collect Environment Data
            while (!_spatialAnchorManager.IsReadyForCreate)
            {
                float createProgress = _spatialAnchorManager.SessionStatus.RecommendedForCreateProgress;
                Debug.Log($"ASA - Move your device to capture more environment data: {createProgress:0%}");
            }

            Debug.Log($"ASA - Ready to save the anchor in the cloud... ");

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

                Debug.Log($"ASA - Saved cloud anchor with ID: {cloudSpatialAnchor.Identifier}");

                // Create a LocalAnchor class instance and attach the GameObject to it
                LocalAnchor createdAnchor = new(cloudSpatialAnchor.Identifier, _currentGroup);
                createdAnchor.AttachInstance(anchorGameObject);

                if (await _networkManager.PostAnchor(createdAnchor))
                {
                    Debug.Log("ASA - Succesful API save!");
                    // Add the created anchor to the list of found anchors 

                    _foundLocalAnchors.Add(createdAnchor);
                } else
                {
                    Debug.Log("ASA - Error in API save!");
                    anchorGameObject.SetActive(false);
                }

            }
            catch (Exception exception)
            {
                Debug.Log("ASA - Failed to save anchor: " + exception.ToString());
                Debug.LogException(exception);
                anchorGameObject.SetActive(false);
            }

        });
        

    }
    // </CreateAnchor>

    // <CreatePostIt>
    /// <summary>
    /// Creates a PostIt instance
    /// </summary>
    /// <param name="position"> postit_position_W post-it creation (in world space) </param>
    /// <returns> Async Task </returns>
    private void CreatePostIt(Vector3 postitWorldPosition, PostIt obj)
    {
        float anchorDistanceThreshold = 1;

        UnityDispatcher.InvokeOnAppThread(async () =>
        {
            Debug.Log("Beginning post-it creation");
            // Find the nearest anchor (within the treshold) to the post-it position
            if (NearestAnchorInThreshold(postitWorldPosition, anchorDistanceThreshold, out GameObject nearestAnchorGameObject)) 
            {
                Debug.Log($"Found nearby anchor! (within {anchorDistanceThreshold}m)");
            }
            else
            {
                Debug.Log($"No nearby anchor found! (within {anchorDistanceThreshold}m). First, an anchor is created at this world position.");

                // Create an anchor at the post-it position
                await CreateLocalAnchor(postitWorldPosition);

                // Get the nearest anchor that was just created!


            }

            // Get head world position
            if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headWorldPosition))
            {
                headWorldPosition = Vector3.zero;
            }
            
            // Calculate rotation in the world coordinate frame towards the headset
            Quaternion worldRotationTowardsHead = Quaternion.LookRotation(postitWorldPosition - headWorldPosition, Vector3.up);
            

            // Initializing the post it GameObject
            GameObject postItGameObject = Instantiate(PostItPrefab, postitWorldPosition, worldRotationTowardsHead);
            // Scale the post-it to be 30cm in height
            postItGameObject.transform.localScale = Vector3.one * 0.3f;
            // Setting the anchor as the parent GameObject (so we can calculate relative tranformations later)
            postItGameObject.transform.SetParent(nearestAnchorGameObject.transform, true);
            

            // We need to get/define the postITID from somewhere!

            // Save the post-it to the backend (cosmos DB)
            // if (await _networkManager.PostPostIt(postItID))
            // {
            //     Debug.Log("Succesful API save!");
            // }
            // else
            // {
            //     Debug.Log("Error in API save!");
            //     postItGameObject.SetActive(false);
            // }






            // relative position and rotation calculation (might not be needed)
            // Calculate relative position (post-it position relative to anchor position)
            //Vector3 relativePosition = nearestAnchorGameObject.transform.InverseTransformPoint(postitWorldPosition);
            // Calculate relative rotation (post-it rotation relative to anchor rotation)
            //Quaternion relativeRotationTowardsHead = Quaternion.Inverse(nearestAnchorGameObject.transform.rotation) * worldRotationTowardsHead;
            
        });

    }
    // </CreatePostIt>

    private Tuple<LocalAnchor, float> GetClosestAnchor(Vector3 position)
    {

        if (_foundLocalAnchors.Count <= 0)
        {
            Debug.Log("ASA - No anchors found, so no closest anchor.");
            return new Tuple<LocalAnchor, float>(null, Mathf.Infinity);
        }

        //Iterate over existing anchor gameobjects to find the nearest
        return _foundLocalAnchors.Aggregate(
            new Tuple<LocalAnchor, float>(null, Mathf.Infinity), // Base case
            (currentBest, itemToCompare) =>
            {
                if (itemToCompare.Instance == null) return currentBest; // Cant compare empty local anchors
                GameObject gameobject = itemToCompare.Instance;
                Vector3 gameObjectPosition = gameobject.transform.position;
                float distance = (position - gameObjectPosition).magnitude;
                Debug.Log($"ASA - Distances - Anchor {itemToCompare.anchorId} has distance {distance}");
                return distance < currentBest.Item2 ? new Tuple<LocalAnchor, float>(itemToCompare, distance) : currentBest;
            });
    }

    // Directly get the pose to closest anchor, if it exists (nullable pose)
    private Pose? GetPoseToClosestAnchor(GameObject postit)
    {
        // null check
        if (postit == null)
        {
            Debug.Log("ASA - Cannot get pose to null gameobject");
            return null;
        }

        Vector3 postItPosition = postit.transform.position;
        Tuple<LocalAnchor, float> closest = GetClosestAnchor(postItPosition);
        if (closest == null || closest.Item1 == null)
        {
            Debug.Log("ASA - No closest anchor found");
            return null;
        }

        LocalAnchor closestAnchor = closest.Item1;
        float distance = closest.Item2;
        Debug.Log($"ASA - Found closest Anchor {closestAnchor.anchorId} has distance {distance}");

        // Inverse position transform
        Vector3 positionTransform = postItPosition - closestAnchor.Instance.transform.position;

        // Inverse rotation transform
        Vector3 postitRot = postit.transform.rotation.eulerAngles;
        Vector3 anchorRot = closestAnchor.Instance.transform.rotation.eulerAngles;
        Quaternion quaternionTransform = Quaternion.Euler(postitRot - anchorRot);

        Pose res = new Pose(positionTransform, quaternionTransform);

        Debug.Log("ASA - Found pose transform " +  res);
        return res;
    }

    public Pose? ApplySavedPose(string anchorId, Pose savedPose)
    {
        if (!string.IsNullOrEmpty(anchorId)) 
        {
            Debug.Log("ASA - Received empty anchor id in ApplySavedPose"); return null;
        }

        if (_foundLocalAnchors.Count <= 0)
        {
            Debug.Log("ASA - No anchors to apply on in ApplySavedPose"); return null;
        }

        // Find the found anchor in list
        LocalAnchor localAnchor = null;
        foreach(LocalAnchor anchor in _foundLocalAnchors) 
        { 
            if (anchor.anchorId == anchorId)
            {
                localAnchor = anchor;
                break;
            }
        }

        if (localAnchor == null)
        {
            Debug.Log("ASA - Did not find source anchor in ApplySavedPose"); return null;
        }

        Vector3 positionTransform = localAnchor.Instance.transform.position + savedPose.position;
        Quaternion rotationTransform = Quaternion.Euler(localAnchor.Instance.transform.rotation.eulerAngles + savedPose.rotation.eulerAngles);

        return new Pose(positionTransform, rotationTransform);

    }

    public Exception SavePostIt(PostIt data, GameObject obj)
    {
        Pose? pose = GetPoseToClosestAnchor(obj);
        if (pose == null)
        {
            Debug.Log("ASA - Could not find a pose transform for the PostIt");
            return new Exception("ASA - No anchor found for postit");
        }
        data.Pose = pose.Value;

        // Attempt save
        try
        {
            _networkManager.PostPostIt(data);
        } catch (Exception e)
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

        Debug.Log("PostIt - " +  final);

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
        Debug.Log($"ASA - Anchor recognized as a possible anchor {args.Identifier} {args.Status}");

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
                    Debug.Log("ASA - Instantiating found anchor");

                    // find in available
                    LocalAnchor correspondingAnchor = _existingLocalAnchors.Find((anchor) => anchor.anchorId == id);
                    if (correspondingAnchor == null) {Debug.Log("Unknown identifier encountered"); return; }

                    //Create GameObject
                    
                    GameObject anchorGameObject = Instantiate(FoundAnchorPrefab, Vector3.zero, Quaternion.identity);
                    anchorGameObject.transform.localScale = Vector3.one * 0.07f;

                                       

                    Debug.Log("ASA - Attaching anchor position...");
                    // Link to Cloud Anchor
                    try
                    {
                        Pose pose = foundAnchor.GetPose();
                        Debug.Log("ASA - Pose:" + pose.ToString());
                        anchorGameObject.AddComponent<CloudNativeAnchor>().CloudToNative(foundAnchor);
                        
                    } 
                    catch (Exception e)
                    {
                        Debug.Log("ASA - Error attaching anchor position");
                        Debug.LogException(e);
                    }
                        
                    correspondingAnchor.AttachInstance(anchorGameObject);
                    Debug.Log("ASA - Attached anchor position");

                    _foundLocalAnchors.Add(correspondingAnchor);
                    Debug.Log($"ASA - There are now {_foundLocalAnchors.Count} found local anchors");
                    if (_state != ManagerState.MAPPING)
                    {
                        anchorGameObject.SetActive(false);
                        Debug.Log("ASA - Set anchor to disabled as not in mapping mode");
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

        Debug.Log($"ASA - Deleting cloud anchor: {cloudSpatialAnchor.Identifier}");

        //Request Deletion of Cloud Anchor (Not for now)
        //await _spatialAnchorManager.DeleteAnchorAsync(cloudSpatialAnchor);

        //Remove local references
        //_foundOrCreatedAnchorGameObjects.Remove(anchorGameObject);
        //_foundOrCreatedAnchorIds.Remove(cloudSpatialAnchor.Identifier);
       anchorGameObject.SetActive(false);

        Debug.Log($"ASA - Cloud anchor deleted!");
    }
    // </DeleteAnchor>

}