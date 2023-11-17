using System.Collections.Generic;
using System.Threading.Tasks;
using System;
using TMPro;
using UnityEngine.XR;
using UnityEngine;
using Debug = UnityEngine.Debug;

// using Microsoft.Azure.SpatialAnchors;
// using Microsoft.Azure.SpatialAnchors.Unity;


public class PostItCreatorWorldFrame : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject postItPrefab; /// The prefab we will use as a new Post-it instance
    public int maxPostIts = 100; // max 100 post-its can be present in one scene
    public float lastUpdateTime;
    public Dictionary<int, GameObject> postIts = new Dictionary<int, GameObject>(); // post-it keys and game objects are storred in a dictionary
    public List<int> postItIDs = new List<int>() {1, 2, 3, 4, 5}; // post-it IDs are stored in a list

    private string[] postItColors = new string[] { "#FF0000", "#00FF00", "#0000FF", "#FFFF00", "#00FFFF" };
    private float updateInterval = 0.5f; // Update every 0.5 seconds
    private float[] _tappingTimer = { 0, 0 }; /// Used to distinguish short taps and long taps

    void Start()
    {
        Debug.Log("Post-it creator started");

        // show the introduction UI frame

        // wait for the user to tap on the "Start" button

        // load post-its from the database (to be session persistent)

    }

    // Update is called once per frame
    void Update()
    {
        // provide dynamical text update (dependant on the update Interval (0.5s))
        if (Time.time - lastUpdateTime > updateInterval)
        {
            DateTime currenttime = DateTime.Now;
            string formattedTime = currenttime.ToString("hh:mm:ss");
            
            this.postItIDs.ForEach(id => {
                if (this.postIts.ContainsKey(id))
                {
                    this.postIts[id].GetComponentInChildren<PostItUpdater>().UpdateText(": default post-it text at time: " + formattedTime);
                }
            });
            
            //this.postIt.GetComponentInChildren<PostItUpdater>().UpdateText("The post-it text at time: " + formattedTime);
            lastUpdateTime = Time.time;
        }

        //Checks for any air taps from either hand
        for (int i = 0; i < 2; i++) //iterarting twice, once for each hand
        {
            InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
            if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
            {
                if (!isTapping)
                {
                    //Done with Tapping (stopped) or wasn't tapping
                    if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f)
                    {
                        //User has been tapping for less than 1 sec. Get hand position and call ShortTap
                        if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
                        {
                            ShortTap(handPosition); // should I put await here? 
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

    // <ShortTap>
    /// Called when a user is air tapping for a short time 
    /// <param name="handPosition">Location where short tap was registered</param>
    private async Task ShortTap(Vector3 handPosition)
    {

        Debug.Log("Detected a short tap!");

        // Get the location of the user's head
        //tryGetFeatureValue -> returns True when the headPosition feature is available and stores the value in the out parameter (headPosition)
        if (!InputDevices.GetDeviceAtXRNode(XRNode.Head).TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 headPosition)) 
        {
            headPosition = Vector3.zero; // head position was not availbe, set to a zero 3D vector
        }

        Quaternion orientationTowardsHead = Quaternion.LookRotation(handPosition - headPosition, Vector3.up);

        await InstantiatePostit(handPosition, orientationTowardsHead);


        // //Check if there is an anchor nearby! 
        // if (!IsAnchorNearby(handPosition, out GameObject anchorGameObject))
        // {
        //     //No Anchor Nearby, start session and create an anchor
        //     await CreateAnchor(handPosition);
        // }
        // else
        // {
        //     //Delete nearby Anchor
        //     DeleteAnchor(anchorGameObject);
        // }
    } 
    
    public async Task InstantiatePostit(Vector3 handPosition, Quaternion orientationTowardsHead)
    {
        // ask the backend for the ID of the post-it (asynchronous call!)
        await Task.Delay(100); // wait for 100ms, simulate a backend, asynchronous call
        
        // create a new post-it object (created from the post-it prefab)
        GameObject postIt = Instantiate(postItPrefab, handPosition, orientationTowardsHead);
        postIt.GetComponentInChildren<PostItUpdater>().UpdateText("Spatialist post-it is here! Muhahahaha!");
        postIt.GetComponentInChildren<PostItUpdater>().UpdateColor(postItColors[0]);
        postIt.transform.localScale = Vector3.one * 0.3f;

        this.postIts.Add(postItIDs[0], postIt);
    
    }
  
}
 

   
