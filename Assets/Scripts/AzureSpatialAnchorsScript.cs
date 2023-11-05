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
    /// API endpoint base url
    /// </summary>
    public string APIUrl;

    /// <summary>
    /// UnityEvent for showing messages
    /// </summary>
    [System.Serializable]
    public class UnityMessageEvent : UnityEvent<string, Color> { }

    public UnityMessageEvent debugController;

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("connecting to the Display");
        Debug.Log("Connected to manager");
        Debug.Log("starting the session");

        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();

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
    }
    // </ShortTap>


    /// <summary>
    /// Perform an async request to the API endpoint querying all of the anchors
    /// </summary>
    public async Task<List<string>> GetApiAnchors()
    {

        if (APIUrl == null) 
        {
            Debug.Log("No API set!!");
            return new List<string>();
        }

        string url = APIUrl + "/allAnchorIds";

        try
        {
            WebRequest wr = WebRequest.Create(url);
            wr.Method = "GET";
            wr.Headers["Content-Type"] = "application/json";

            WebResponse response = await wr.GetResponseAsync();

            Stream result = response.GetResponseStream();
            StreamReader reader = new(result);

            string json = reader.ReadToEnd();



        }
        catch (Exception ex)
        {
            Debug.Log($"Exception while querying API: {ex.Message}");
            return new List<string>();
        }

        return new List<string>();
    }


    /// <StartSession>
    /// <summary>
    /// Start the ASA session
    /// </summary>
    public void StartSession()
    {

        if (_spatialAnchorManager != null && _spatialAnchorManager.IsSessionStarted)
        {
            Debug.Log("Session is already started!");
            Debug.Log("Session is already started!");
        }
        Debug.Log("Starting session...");
        _spatialAnchorManager.StartSessionAsync().ContinueWith((x) => { 
            Debug.Log("Started session!");
        });

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