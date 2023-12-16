using Microsoft.Azure.SpatialAnchors;
using Microsoft.Azure.SpatialAnchors.Unity;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Audio;
using Microsoft.MixedReality.Toolkit.Experimental.UI;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;

// using System.Numerics;
using System.Threading.Tasks;
using TMPro;
using Unity.VisualScripting;
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
    public bool anchorFound = false;

    public LocalAnchor(string anchorId, string owner)
    {

        if(anchorId == null || owner == null)
        {
            Debug.Log("ASA - Null anchorId or owner");
            throw new Exception("ASA - Null anchorId or owner");
        }

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

public class PostIt : IEquatable<PostIt>
{
    public string Id;
    public string AnchorId;
    public string Owner;
    public string Title;
    public PostItType Type;
    public string Content;
    public string Color;
    public Pose? Pose;
    public Vector3 Scale;

    public GameObject Instance;

    public PostIt(string id, string anchorId, string owner, string title, PostItType type, string content, string color, Pose? pose, Vector3 scale)
    {
        Id = id;
        AnchorId = anchorId;
        Owner = owner;
        Title = title;
        Type = type;
        Content = content;
        Color = color;
        Pose = pose;
        Scale = scale;
    }

    public bool Same(PostIt other)
    {
        return this.Id.Equals(other.Id); // String equality is correct, == is also valid in C#
    }

    public bool Modified(PostIt other)
    {

        return this.AnchorId != other.AnchorId
            || this.Owner != other.Owner
            || this.Title != other.Title
            || this.Type != other.Type
            || this.Content != other.Content
            || this.Pose != other.Pose
            || this.Scale != other.Scale
            || this.Color != other.Color;

    }

    public static PostIt ParseJSON(PostItJSON data)
    {
        PostItType type;
        string color;
        Pose pose;
        Vector3 scale;

        if (data.content_type == "media")
        {
            type = PostItType.MEDIA;
        }
        else
        {
            type = PostItType.TEXT;
        }

        if (data.color != null)
        {
            color = new string(data.color); //Color(data.rgb[0], data.rgb[1], data.rgb[2]);
        }
        else
        {
            Debug.Log("APP_DEBUG: Received invalid RGB data");
            color = "white";
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

        if (data.scale != null && data.scale.Count >= 3)
        {
            scale = new Vector3(data.scale[0], data.scale[1], data.scale[2]);
        }
        else
        {
            Debug.Log(" ASA - Improper scale when converting to postit");
            scale = new Vector3();
        }


        return new PostIt(
                data.id,
                data.anchor_id,
                data.owner,
                data.title,
                type,
                data.content,
                color,
                pose,
                scale
            );
    }

    public static PostIt Initial(string username)
    {
        return new PostIt(Guid.NewGuid().ToString(), "1", username , "", PostItType.TEXT, "", "blue", null, Vector3.one * 0.4f);
    }

    public bool Equals(PostIt other)
    {
        return this.Same(other);
    }
}
// STRUCTURES //



[RequireComponent(typeof(SpatialAnchorManager))]
[RequireComponent(typeof(NetworkManager))]


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
    /// Use to keep all groups
    /// </summary>
    private List<GroupJSON> _groups;

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

    /// <summary>
    /// The distance threshold to attach a post-it to an anchor (in meters)
    /// </summary>
    private float _anchorDistanceThreshold = 3;

    // Create a new UnityEvent that can be assigned in the Unity editor
    public UnityEvent onShortTap; 

    // Group prefab
    public GameObject GroupPrefab;

    // TextToSpeech
    private TextToSpeech _textToSpeech;

    private readonly object _refreshLock = new();
    private readonly object _placingLock = new();

    public Color MappingStatusColor;
    public Color CreateStatusColor;
    public Color IdleStatusColor;
    public TextMeshProUGUI StatusText;

    // <Start>
    // Start is called before the first frame update
    void Start()
    {
        // Set audio source of speech to text
        _textToSpeech = gameObject.GetComponent<TextToSpeech>();

        if (StatusText == null)
        {
            Debug.LogError("ASA - Status object not set!");
        }
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            StatusText.SetText("Loading Session");
            StatusText.color = IdleStatusColor;
        });

        //Set state to idle
        _state = ManagerState.IDLE;
        Debug.Log("APP_DEBUG: starting the session");

        // Fetch all managers
        _spatialAnchorManager = GetComponent<SpatialAnchorManager>();
        _networkManager = GetComponent<NetworkManager>();

        // Set debuggers
        _spatialAnchorManager.LogDebug += (sender, args) => Debug.Log($"APP_DEBUG: ASA - Debug: {args.Message}");
        _spatialAnchorManager.Error += (sender, args) => Debug.LogError($"APP_DEBUG: ASA - Error: {args.ErrorMessage}");

        // Set the callback for when anchors are found
        _spatialAnchorManager.AnchorLocated += SpatialAnchorManager_AnchorLocated;

        // Fetch all groups
        LoadGroups();

        // Start the ASA session and load all anchors and add to watcher
        StartAndLoadASASession();

        // Start the refresh timer
        _refreshTimer = 0.0f;

        UnityDispatcher.InvokeOnAppThread(() =>
        {
            StatusText.SetText("Ready");
            StatusText.color = IdleStatusColor;
        });

    }
    // </Start>

    private async void LoadGroups()
    {
        _groups = await _networkManager.GetGroups();

        // sort groups
        _groups.Sort((a, b) => a.group_name.CompareTo(b.group_name));

        // print group name and id
        foreach (GroupJSON group in _groups)
        {
            Debug.Log("APP_DEBUG: Group - " + group.group_name + " " + group.id);
        }

        // get reference to UIPrefab_Instance gameobject
        GameObject UIPrefab_Instance = GameObject.Find("UIPrefab instance");
        if (UIPrefab_Instance == null)
        {
            Debug.Log("APP_DEBUG: UIPrefab_Instance not found");
        }
        else
        {
            Debug.Log("APP_DEBUG: UIPrefab_Instance found");

            // get reference to GroupDropdown gameobject
            GameObject selectMap = UIPrefab_Instance.transform.Find("UI3-SelectMapEnterMap instance").gameObject;
            GameObject GroupDropdown = UIPrefab_Instance.transform.Find("UI3-SelectMapEnterMap instance/Select Map for Entering Map [Frame]/ScrollingOC_PressableBtn_32x96/ScrollingObjectCollection/Container/GridObjectCollection").gameObject;
            if (GroupDropdown == null)
            {
                Debug.Log("APP_DEBUG: dropdown not found");
            } 
            else
            {
                Debug.Log("APP_DEBUG: dropdown found");
                // Delete all children of the dropdown
                foreach (Transform child in GroupDropdown.transform)
                {
                    GameObject.Destroy(child.gameObject);
                }

                // Create a new option for each group
                foreach (GroupJSON group in _groups)
                {
                    GameObject newOption = Instantiate(GroupPrefab);
                    newOption.transform.SetParent(GroupDropdown.transform, false);
                    newOption.GetComponent<Interactable>().OnClick.AddListener(() => 
                    { 
                        Debug.Log("APP_DEBUG: User selected group " + group.group_name);
                        SetCurrentGroup(group.group_name); 
                        selectMap.SetActive(false); 
                        // say group name using TextToSpeech
                        this._textToSpeech.StartSpeaking("Moving to " + group.group_name);
                    });
                    newOption.GetComponentInChildren<TextMeshPro>().text = group.group_name;
                    //break;
                }

                GridObjectCollection grid = GroupDropdown.GetComponent<GridObjectCollection>();

                // delay
                await Task.Delay(1000);

                grid.UpdateCollection();
                Debug.Log("APP_DEBUG: dropdown updated");
            }

        }
    }

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
                    CreatePostIt(handPosition, PostIt.Initial(this._networkManager.Username));
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

    /// <summary>
    /// Change the current group to the one with the given name
    /// </summary>
    /// <param name="name"></param>
    public void SetCurrentGroup(String name)
    {
        // check if the username is in the group and if not add the username to the group
        // find the group object from name
        GroupJSON group = _groups.Find((g) => g.group_name == name);
        Debug.Log("APP_DEBUG: User is requesting to set group: " + name);
        if (group != null)
        {
            Debug.Log("APP_DEBUG: Group exists");
            // get group usernames
            List<string> usernames = group.users;
            if (usernames.Contains(_networkManager.Username))
            {
                Debug.Log("APP_DEBUG: Username is in group");
            }
            else
            {
                Debug.Log("APP_DEBUG: Username is not in group");
                // add username to group
                usernames.Add(_networkManager.Username);
                group.users = usernames;
                _networkManager.JoinGroup(name);
                Debug.Log("APP_DEBUG: Username added to group");
            }   
        }
        else
        {
            // if the group doesn't exist, create it in the db and load all groups again
            Debug.Log("APP_DEBUG: Group doesn't exist, creating it");
            _networkManager.JoinGroup(name);

            Task.Run(async () =>
            {
                // delay
                await Task.Delay(2000);

                LoadGroups();
            });
        }

        // if group name is the same, return
        if (_networkManager.GroupName == name) return;

        lock (_networkManager)
        {
            Debug.Log("APP_DEBUG: Setting group to " + name);
            _networkManager.GroupName = name;
            _networkManager.ResetHashes();
            ResetSession();
        }
        
    }

    private void ResetSession()
    {
        lock (_networkManager) lock (_foundLocalAnchors) lock (_foundPostIts)
                {
                    Debug.Log("APP_DEBUG: Resetting session");
                    _spatialAnchorManager.DestroySession();

                    Debug.Log("APP_DEBUG: Destroying all found anchors");
                    foreach (LocalAnchor anchor in _foundLocalAnchors)
                    {
                        if (anchor.Instance != null)
                        {
                            Destroy(anchor.Instance);
                        }
                    }
                    _foundLocalAnchors.Clear();
                    Debug.Log("APP_DEBUG: Destroying all found postits");

                    foreach (PostIt postIt in _foundPostIts)
                    {
                        if (postIt.Instance != null)
                        {
                            Destroy(postIt.Instance);
                        }
                    }
                    _foundPostIts.Clear();

                    Debug.Log("APP_DEBUG: Starting a new session with the new group");

                    StartAndLoadASASession();

                }
    }

    /// <summary>
    /// Set username to a given name
    /// </summary>
    /// <param name="name"></param>
    public void SetUsername(String name)
    {
        _networkManager.Username = name;
        RefreshData();
    }

    public void RefreshData()
    {
        if (_networkManager == null || _networkManager.GroupName == null || _networkManager.GroupName == string.Empty){
            Debug.Log("APP_DEBUG: No group selected, skipping refresh");
            return;
        }
        Task.Run(() =>
        {
            lock (_refreshLock)
            {
                Task.Run(async () =>
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

                    if (await _networkManager.ShouldRefreshPostIts())
                    {
                        _ = GetAndPlacePostIts(); // dont wait for completion TODO: Check how async is non-blocking
                    }
                    else
                    {
                        Debug.Log("ASA - Skipping postit refresh!");
                    }

                    // Check if we have a swipe from the API for the current user
                    PostIt swiped = await _networkManager.GetSwipe();
                    if (swiped != null)
                    {
                        Debug.Log("APP_DEBUG: Creating swipe!");
                        await Task.Run(() => { CreateSwipe(swiped); });

                    }
                });
            } // Release lock
        });
        
        
    }

    private bool _runningPlacePostIts = false;
    private readonly object _runLock = new();

    public async Task GetAndPlacePostIts()
    {
        lock(_runLock)
        {
            if (_runningPlacePostIts)
            {
                Debug.Log("APP_DEBUG: ASA - Already running GetAndPlacePostIts"); return;
            }
            _runningPlacePostIts = true;
        }
        

        
        
        // TODO: Check if the count of the different lists is coherent
        List<PostIt> fetch = await _networkManager.GetPostIts();

        List<PostIt> neverSeen = new();
        List<PostIt> toModify = new();
        List<PostIt> toDelete = new();

        // run async task
        await Task.Run(() =>
        {
            lock (_placingLock)
            {
                    // Update available postits
                    _availablePostIts = fetch;

                    foreach (PostIt item in _availablePostIts)
                    {
                        if (!_foundPostIts.Contains(item))
                        {
                            Debug.Log("ASA - Found a new post it");
                            neverSeen.Add(item);
                        }
                    }

                    Debug.Log($"ASA - Must check for {neverSeen.Count} never found postits");

                    foreach (PostIt item in _foundPostIts)
                    {
                        PostIt res = _availablePostIts.Find((p) => p.Same(item)); // Use the 'same' operator checking id equality

                        if (res == null)
                        {
                            Debug.Log("ASA - Found a postit deletion event");
                            toDelete.Add(item);
                        }
                        else if (res.Modified(item))
                        {
                            Debug.Log("ASA - Found a postit modification event");
                            toModify.Add(item);
                        }
                    }

                    Debug.Log($"ASA - Must trigger delete of {toDelete.Count} postits");
                    Debug.Log($"ASA - Must trigger modification {toModify.Count} postits");

                    // filter the available postits 
                    foreach (PostIt postIt in neverSeen)
                    {
                        foreach (LocalAnchor anchor in _foundLocalAnchors)
                        {
                            if (anchor.anchorId == postIt.AnchorId)
                            {
                                // Check if an anchor on Cosmos DB is found locally (in the same room)
                                Debug.Log("ASA - Found a local postit");

                                UnityDispatcher.InvokeOnAppThread(() =>
                                {
                                    // The creation of new post-it GameObjects locally
                                    GameObject go = Instantiate(PostItPrefab);
                                    PostItManager manager = go.GetComponent<PostItManager>();
                                    manager.AttachToInstance(this); //this: linking the instance of the ASA script to the postit manager (to use the private variables)
                                    manager.SetObject(postIt, anchor);
                                    manager.LockUI(); // lock the incoming, fetched post-its

                                    _foundPostItManagers.Add(manager);
                                    _foundPostIts.Add(postIt);

                                });

                                Debug.Log("ASA - Postit successfully placed!");
                                break; // TODO: test without break opt
                            }
                        }
                    }

                    // Perform deletion
                    foreach (PostIt p in toDelete)
                    {

                        Debug.Log("ASA - Deleting a postit");
                        if (p.Instance != null)
                        {
                            UnityDispatcher.InvokeOnAppThread(() =>
                            {
                                p.Instance.SetActive(false);
                            });

                        }
                    }


                    // Perform modifications
                    foreach (PostIt postIt in toModify)
                    {
                        foreach (LocalAnchor anchor in _foundLocalAnchors)
                        {
                            if (anchor.anchorId == postIt.AnchorId)
                            {
                                Debug.Log("ASA - Found a local postit to modify");


                                if (postIt.Instance != null)
                                {
                                    PostItManager manager = postIt.Instance.GetComponent<PostItManager>();
                                    manager.SetObject(postIt, anchor);
                                }

                                Debug.Log("ASA - Postit successfully modified!");
                                //break; // TODO: Same check as above
                            }
                        }
                    }

            } // Release lock

        });

        lock (_runLock)
        {
            _runningPlacePostIts = false;
        }
    }

    public void BeginMapping()
    {
        if (_state == ManagerState.MAPPING)
        {
            _state = ManagerState.IDLE;
            HideAnchors();
            UnityDispatcher.InvokeOnAppThread(() =>
            {
                StatusText.SetText("Ready");
                StatusText.color = IdleStatusColor;
            });
        } else
        {
            _state = ManagerState.MAPPING;
            ShowAnchors();
            UnityDispatcher.InvokeOnAppThread(() =>
            {
                StatusText.SetText("Mapping mode");
                StatusText.color = MappingStatusColor;
            });
        }
        
    }

    public void BeginCreate()
    {
        switch (_state)
        {
            case ManagerState.MAPPING:
                {
                    _state = ManagerState.CREATE;
                    HideAnchors();
                    UnityDispatcher.InvokeOnAppThread(() =>
                    {
                        StatusText.SetText("Tap to create");
                        StatusText.color = CreateStatusColor;
                    });
                    break;
                }
            default:
                {
                    _state = ManagerState.CREATE;
                    UnityDispatcher.InvokeOnAppThread(() =>
                    {
                        StatusText.SetText("Tap to create");
                        StatusText.color = CreateStatusColor;
                    });
                    break;
                }
        }

    }

    public void SetStateIdle() 
    { 
        _state = ManagerState.IDLE; 
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            StatusText.SetText("Ready");
            StatusText.color = IdleStatusColor;
        });
    }


    public void HideAnchors()
    {
        Debug.Log($"APP_DEBUG: ASA - Hiding {_foundLocalAnchors.Count} found local anchors");

        foreach (LocalAnchor anchor in _foundLocalAnchors)
        {
            if (anchor.Instance != null && anchor.Instance.TryGetComponent<AnchorManager>(out AnchorManager manager))
            {
                manager.Hide();
            }

        }
    }

    public void ShowAnchors()
    {
        Debug.Log($"APP_DEBUG: ASA - Showing {_foundLocalAnchors.Count} found local anchors");
        foreach (LocalAnchor anchor in _foundLocalAnchors)
        {
            if (anchor.Instance != null && anchor.Instance.TryGetComponent<AnchorManager>(out AnchorManager manager))
            {
                manager.Show();
            }

        }

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
                LocalAnchor createdAnchor = new(cloudSpatialAnchor.Identifier, _networkManager.GroupName);
                createdAnchor.AttachInstance(anchorGameObject);

                if (await _networkManager.PostAnchor(createdAnchor))
                {
                    Debug.Log("APP_DEBUG: ASA - Succesful API save!");
                    // Add the created anchor to the list of found anchors 

                    _foundLocalAnchors.Add(createdAnchor);

                    RefreshData();
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

        SetStateIdle();

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
            

            // Attach the post-it Game Object to the PostItManager script
            PostItManager manager = postItGameObject.GetComponent<PostItManager>();
            manager.AttachToInstance(this); //this: linking the instance of the ASA script to the postit manager (to use the private variables)
            manager.SetObject(data, null);

            _foundPostIts.Add(data);


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
    private Tuple<Pose?, Vector3, string> GetPoseToClosestAnchor(GameObject postit) // Pose? (optional type) -> nullable pose, we can check if a pose was not found
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

        postit.transform.SetParent(closestAnchor.Instance.transform);

        Pose poseTransform = postit.transform.GetLocalPose();
        Vector3 scale = postit.transform.localScale;

        Debug.Log("APP_DEBUG: ASA - Found pose transform " + poseTransform.ToString());
        return new Tuple<Pose?, Vector3, string>(poseTransform, scale, closest.Item1.anchorId);

    }

    // <SavePostIt>
    /// <summary>
    /// Saves the post-it relative transformation (to the anchor position) to the backend (cosmos DB)
    /// </summary>
    /// <param name="data">post-it data</param>
    public Exception SavePostIt(PostIt data, GameObject obj)
    {
        Debug.Log("APP_DEBUG: Saving postit");

        Tuple<Pose?, Vector3, string> res = GetPoseToClosestAnchor(obj);

        if (res == null)
        {
            Debug.LogError("ASA - Error while saving postit"); return null;
        }

        Pose? pose = res.Item1;
        if (pose == null)
        {
            Debug.Log("APP_DEBUG: ASA - Could not find a pose transform for the PostIt");
            return new Exception("ASA - No anchor found for postit");
        }
        data.Pose = pose.Value;
        data.AnchorId = res.Item3;
        data.Scale = res.Item2;

        Debug.Log("ASA - Saving with scale of " + data.Scale);

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
        // setting to a starting scale
        content.Scale = Vector3.one * 0.4f;

        UnityDispatcher.InvokeOnAppThread(() =>
        {
            //Create Anchor GameObject. We will use ASA to save the position and the rotation of this GameObject.
            if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headPosition))
            {
                headPosition = Vector3.zero;
            }

            // Get rotation of the headset
            if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.deviceRotation, out Quaternion headRotation))
            {
                headRotation = Quaternion.identity;
            }

            Vector3 final = headPosition + headRotation * Vector3.forward * 0.45f;

            Debug.Log("APP_DEBUG: PostIt - " + final);

            CreatePostIt(final, content);

        });

        this.Speak("New post-it created from Swipe, now you can edit further and save it");
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

                // Wait to acquire lock on found anchor (thread protection)
                //Creating and adjusting GameObjects have to run on the main thread. We are using the UnityDispatcher to make sure this happens.
                UnityDispatcher.InvokeOnAppThread(() =>
                {
                    Debug.Log("APP_DEBUG: ASA - Anchor located, now trying to create the gameobject!");
                    CloudSpatialAnchor foundAnchor = args.Anchor;
                    string id = foundAnchor.Identifier;

                    // find in available
                    Debug.Log("APP_DEBUG: ASA - Looking for anchor in available anchors");
                    LocalAnchor correspondingAnchor = _existingLocalAnchors.Find((anchor) => anchor.anchorId == id);
                    if (correspondingAnchor == null) { Debug.Log("APP_DEBUG: Unknown identifier encountered"); return; }

                    // If there is already an anchor in the _found, disable it
                    Debug.Log("APP_DEBUG: ASA - Looking for anchor in found anchors");
                    LocalAnchor existing = _foundLocalAnchors.Find(anchor => anchor.anchorId == id);
                    GameObject anchorGameObject = null;
                    CloudNativeAnchor anchorNativeAnchor;

                    Debug.Log("APP_DEBUG: ASA - Finished searching anchors in foundLocalAnchors");


                    try
                    {
                        if (existing == null)
                        {
                            Debug.Log($"APP_DEBUG: ASA - Anchor never located, instantiating with id {correspondingAnchor.anchorId}");

                            //Create GameObject
                            anchorGameObject = Instantiate(FoundAnchorPrefab, Vector3.zero, Quaternion.identity);
                            anchorGameObject.transform.localScale = Vector3.one * 0.07f;
                            anchorNativeAnchor = anchorGameObject.AddComponent<CloudNativeAnchor>();

                            correspondingAnchor.AttachInstance(anchorGameObject);
                            correspondingAnchor.anchorFound = true; // set anchor as found
                            _foundLocalAnchors.Add(correspondingAnchor); // add to found anchors

                            Debug.Log("APP_DEBUG: ASA - Attaching anchor position...");
                            // Link to Cloud Anchor
                            try
                            {
                                Pose pose = foundAnchor.GetPose();
                                Debug.Log("APP_DEBUG: ASA - Pose:" + pose.ToString());
                                if (anchorNativeAnchor != null)
                                {
                                    anchorNativeAnchor.CloudToNative(foundAnchor);
                                }
                            }
                            catch (Exception e)
                            {
                                Debug.Log("APP_DEBUG: ASA - Error attaching anchor position");
                                Debug.LogException(e);
                            }
                            Debug.Log("APP_DEBUG: ASA - Attached anchor position");
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.Log("APP_DEBUG: ASA - Error creating gameobject");
                        Debug.LogException(e);
                        return;
                    }
                    

                        
                    Debug.Log($"APP_DEBUG: ASA - There are now {_foundLocalAnchors.Count} found local anchors");
                    if (_state != ManagerState.MAPPING)
                    {
                        if (anchorGameObject != null && anchorGameObject.TryGetComponent<AnchorManager>(out AnchorManager manager))
                        {
                            manager.Hide();
                        }
                        else
                        {
                            Debug.Log("APP_DEBUG: ASA - Could not find AnchorManager component");
                        }
                        Debug.Log("APP_DEBUG: ASA - Set anchor to disabled as not in mapping mode");
                    }
                });

                // After locating a new anchor, one must call Get And Place
                _ = GetAndPlacePostIts();
                

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

    // <DeletePostIt>
    /// <summary>
    /// Delete a post it from the UI and from the backend
    /// </summary>
    public async void DeletePostIt(PostIt data, GameObject obj)
    {
        Debug.Log("APP_DEBUG: Deleting post it ASA");
        // print length of _foundPostIts
        Debug.Log("APP_DEBUG: Length of _availablePostIts: " + _availablePostIts.Count);
        // print the id of the post it to delete
        Debug.Log("APP_DEBUG: Post it to delete: " + data.Id);

        // check if the post it is in _foundPostIts
        PostIt postIt = _availablePostIts.Find((post) => post.Id == data.Id);
        if (postIt == null)
        {
            Debug.Log("APP_DEBUG: Post it not found in _availablePostIts");
            obj.SetActive(false);
            return;
        }
        else
        {
            Debug.Log("APP_DEBUG: Post it found in _availablePostIts");
            Boolean ex = await _networkManager.DeletePostIt(data);
            if (ex == true)
            {
                // refresh data
                Debug.Log("APP_DEBUG: Post it deleted in backend");
                // disable game object
                obj.SetActive(false);
            }
            return;
        } 
    }

    // speak a string using TextToSpeech
    public void Speak(string text)
    {
        this._textToSpeech.StartSpeaking(text);
    }

    // check whether the map name is existing call IsMapNameExisting()
    public bool IsMapNameExisting(string mapName)
    {
        // find the name in _groups
        GroupJSON group = _groups.Find((g) => g.group_name == mapName);
        if (group != null)
        {
            Debug.Log("APP_DEBUG: Map name is existing");
            return true;
        }
        else
        {
            Debug.Log("APP_DEBUG: Map name is not existing");
            return false;
        }
    }

}