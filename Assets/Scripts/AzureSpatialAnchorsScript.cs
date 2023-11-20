using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.IO;
using System.Linq;
using System.Net;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;


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
    public Pose Pose;

    public GameObject Instance;

    public PostIt(string id, string anchorId, string owner, string title, PostItType type, string content, Color color, Pose pose)
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
        string content = "";

        switch (data.type)
        {
            case "text":
                {
                    type = PostItType.TEXT;
                    if(data.text_content != null)
                    { content = data.text_content; }
                    break;
                }
            case "media":
                {
                    type = PostItType.MEDIA;
                    if (data.media_content != null)
                    { content = data.media_content; }
                    break;
                }
            default:
                {
                    type = PostItType.TEXT;
                    if (data.text_content != null)
                    { content = data.text_content; }
                    break;
                }
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

        if (data.pose.position != null && data.pose.orientation != null)
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
                content,
                color,
                pose
            );
    }
}

[RequireComponent(typeof(SpatialAnchorManager))]
public class AzureSpatialAnchorsScript : MonoBehaviour
{
    /// <summary>
    /// Used to distinguish short taps and long taps
    /// </summary>
    private float[] _tappingTimer = { 0, 0 };

    /// <summary>
    /// Main interface to anything Spatial Anchors related
    /// </summary>
    private SpatialAnchorManager _spatialAnchorManager;

    /// <summary>
    /// Main interface to make API calls and connect to DB
    /// </summary>
    private NetworkManager _networkManager;

    /// <summary>
    /// Used to keep track of all GameObjects that represent a found or created anchor
    /// </summary>
    private List<GameObject> _foundOrCreatedAnchorGameObjects = new();

    /// <summary>
    /// Used to keep track of all targeted anchor IDs
    /// </summary>
    private List<string> _foundOrCreatedAnchorIds = new();

    /// <summary>
    /// The prefab we will use as a new Post-it instance
    /// </summary>
    public GameObject postItPrefab;

    /// <summary>
    /// UnityEvent for showing messages
    /// </summary>
    [System.Serializable]
    public class UnityMessageEvent : UnityEvent<string, Color> { }

    public UnityMessageEvent debugController;

    /// <summary>
    /// Initial state of the manager
    /// </summary>
    public ManagerState state;

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("connecting to the Display");
        Debug.Log("Connected to manager");
        Debug.Log("starting the session");

        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();
        _networkManager = GetComponent<NetworkManager>();

        StartSession();

        Debug.Log("Setting up further debug watchers");
        _spatialAnchorManager.LogDebug += (sender, args) =>
        {
            Debug.Log($"ASA - Debug: {args.Message}");
            Debug.Log($"ASA - Debug: {args.Message}");
        };
        _spatialAnchorManager.Error += (sender, args) =>
        {
            Debug.Log($"ASA - Error: {args.ErrorMessage}");
            Debug.Log($"ASA - Error: {args.ErrorMessage}");
        };

        Debug.Log("Adding locator callback");
        _spatialAnchorManager.AnchorLocated += SpatialAnchorManager_AnchorLocated;
       
    }
    // </Start>

    // <Update>
    // Update is called once per frame
    void Update()
    {

        //Check for any air taps from either hand
        for (int i = 0; i < 2; i++)
        {
            InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
            if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
            {
                if (!isTapping)
                {
                    //Stopped Tapping or wasn't tapping
                    if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f)
                    {
                        //User has been tapping for less than 1 sec. Get hand position and call ShortTap
                        if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
                        {
                            ShortTap(handPosition);
                        }
                    }
                    _tappingTimer[i] = 0;
                }
                else
                {
                    _tappingTimer[i] += Time.deltaTime;

                }
            }

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

        switch (state)
        {
            case ManagerState.MAPPING:
                {
                    Debug.Log("MAPPING MODE");
                    break;
                }

            case ManagerState.CREATE:
                {
                    Debug.Log("CREATE MODE");
                    if (!IsAnchorNearby(handPosition, out GameObject anchorGameObject))
                    {
                        //No Anchor Nearby, start session and create an anchor
                        await CreateAnchor(handPosition);
                    }
                    else
                    {
                        //Delete nearby Anchor
                        DeleteAnchor(anchorGameObject);
                    }
                    break;
                }

            case ManagerState.IDLE:
                {
                    Debug.Log("IDLE MODE");
                    break;
                }

            default:
                {
                    Debug.Log("Manage is in unknow state!");
                    break;
                }
        }
    }
    // </ShortTap>


    /// <StartSession>
    /// <summary>
    /// Start the ASA session
    /// </summary>
    public async void StartSession()
    {

        Debug.Log("Performin postit refresh...");

        List<PostIt> list = await _networkManager.GetPostIts();

        Debug.Log("Finished postits refresh.");

        if (_spatialAnchorManager != null && _spatialAnchorManager.IsSessionStarted)
        {
            Debug.Log("Session is already started!");
            Debug.Log("Session is already started!");
        }
        Debug.Log("Starting session...");
        await _spatialAnchorManager.StartSessionAsync();
        Debug.Log("Started session!");
       

        Debug.Log("session started, setting up watcher");

        // Set the session's locate criteria
        AnchorLocateCriteria anchorLocateCriteria = new AnchorLocateCriteria
        {
            Identifiers = _foundOrCreatedAnchorIds.ToArray(),
        };
        _spatialAnchorManager.Session.CreateWatcher(anchorLocateCriteria);


        Debug.Log($"ASA - Watcher created!");

    }
    ///</StartSession>

    ///<DestroySession>
    ///<summary>
    /// Destroy the session and game objects
    /// </summary>
    public void DestroySession()
    {
        if (_spatialAnchorManager.IsSessionStarted)
        {
            // Stop Session and remove all GameObjects. This does not delete the Anchors in the cloud
            _spatialAnchorManager.DestroySession();
            RemoveAllAnchorGameObjects();

            Debug.Log("ASA - Stopped Session and removed all Anchor Objects");
            Debug.Log("ASA - Stopped session and removed objects");
        }
    }
    /// </DestroySession>

    // <RemoveAllAnchorGameObjects>
    /// <summary>
    /// Destroys all Anchor GameObjects
    /// </summary>
    private void RemoveAllAnchorGameObjects()
    {
        foreach (var anchorGameObject in _foundOrCreatedAnchorGameObjects)
        {
            Destroy(anchorGameObject);
        }
        _foundOrCreatedAnchorGameObjects.Clear();
        _foundOrCreatedAnchorIds = null;
    }
    // </RemoveAllAnchorGameObjects>

    // <IsAnchorNearby>
    /// <summary>
    /// Returns true if an Anchor GameObject is within 15cm of the received reference position
    /// </summary>
    /// <param name="position">Reference position</param>
    /// <param name="anchorGameObject">Anchor GameObject within 15cm of received position. Not necessarily the nearest to this position. If no AnchorObject is within 15cm, this value will be null</param>
    /// <returns>True if a Anchor GameObject is within 15cm</returns>
    private bool IsAnchorNearby(Vector3 position, out GameObject anchorGameObject)
    {
        anchorGameObject = null;

        if (_foundOrCreatedAnchorGameObjects.Count <= 0)
        {
            return false;
        }

        //Iterate over existing anchor gameobjects to find the nearest
        var (distance, closestObject) = _foundOrCreatedAnchorGameObjects.Aggregate(
            new Tuple<float, GameObject>(Mathf.Infinity, null),
            (minPair, gameobject) =>
            {
                Vector3 gameObjectPosition = gameobject.transform.position;
                float distance = (position - gameObjectPosition).magnitude;
                return distance < minPair.Item1 ? new Tuple<float, GameObject>(distance, gameobject) : minPair;
            });

        if (distance <= 0.15f)
        {
            //Found an anchor within 15cm
            anchorGameObject = closestObject;
            return true;
        }
        else
        {
            return false;
        }
    }
    // </IsAnchorNearby>

    // <CreateAnchor>
    /// <summary>
    /// Creates an Azure Spatial Anchor at the given position rotated towards the user
    /// </summary>
    /// <param name="position">Position where Azure Spatial Anchor will be created</param>
    /// <returns>Async Task</returns>
    private async Task CreateAnchor(Vector3 position)
    {
        //Create Anchor GameObject. We will use ASA to save the position and the rotation of this GameObject.
        if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headPosition))
        {
            headPosition = Vector3.zero;
        }

        Quaternion orientationTowardsHead = Quaternion.LookRotation(position - headPosition, Vector3.up);

        GameObject anchorGameObject = Instantiate(postItPrefab, position, orientationTowardsHead);
        anchorGameObject.transform.localScale = Vector3.one * 0.3f;

        //Add and configure ASA components
        CloudNativeAnchor cloudNativeAnchor = anchorGameObject.AddComponent<CloudNativeAnchor>();
        await cloudNativeAnchor.NativeToCloud();
        CloudSpatialAnchor cloudSpatialAnchor = cloudNativeAnchor.CloudAnchor;
        cloudSpatialAnchor.Expiration = DateTimeOffset.Now.AddDays(3);

        //Collect Environment Data
        while (!_spatialAnchorManager.IsReadyForCreate)
        {
            float createProgress = _spatialAnchorManager.SessionStatus.RecommendedForCreateProgress;
            Debug.Log($"ASA - Move your device to capture more environment data: {createProgress:0%}");
        }

        Debug.Log($"ASA - Saving cloud anchor... ");

        try
        {
            // Now that the cloud spatial anchor has been prepared, we can try the actual save here.
            await _spatialAnchorManager.CreateAnchorAsync(cloudSpatialAnchor);

            bool saveSucceeded = cloudSpatialAnchor != null;
            if (!saveSucceeded)
            {
                Debug.LogError("ASA - Failed to save, but no exception was thrown.");
                anchorGameObject.SetActive(false);
                return;
            }

            Debug.Log($"ASA - Saved cloud anchor with ID: {cloudSpatialAnchor.Identifier}");
            _foundOrCreatedAnchorGameObjects.Add(anchorGameObject);
            _foundOrCreatedAnchorIds.Add(cloudSpatialAnchor.Identifier);
        }
        catch (Exception exception)
        {
            Debug.Log("ASA - Failed to save anchor: " + exception.ToString());
            Debug.LogException(exception);
            anchorGameObject.SetActive(false);
        }
    }
    // </CreateAnchor>



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
                CloudSpatialAnchor foundAnchor = args.Anchor;
                    // Go add your anchor to the scene...

                    //Creating and adjusting GameObjects have to run on the main thread. We are using the UnityDispatcher to make sure this happens.
                    UnityDispatcher.InvokeOnAppThread(() =>
                    {

                        //Create GameObject
                        GameObject anchorGameObject = Instantiate(postItPrefab, Vector3.zero, Quaternion.identity);
                        anchorGameObject.transform.localScale = Vector3.one * 0.3f;


                        // Link to Cloud Anchor
                        anchorGameObject.AddComponent<CloudNativeAnchor>().CloudToNative(foundAnchor);
                        _foundOrCreatedAnchorGameObjects.Add(anchorGameObject);
                    });
                    break;
            case LocateAnchorStatus.AlreadyTracked:
                // This anchor has already been reported and is being tracked
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