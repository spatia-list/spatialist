using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class PostItCreator : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject obj;
    private GameObject[] postIts = new GameObject[5];
    private string[] postItColors = new string[] { "#FF0000", "#00FF00", "#0000FF", "#FFFF00", "#00FFFF" };
    private Vector3[] postItPositions = new Vector3[] { new Vector3(0, 0, 1), new Vector3(0, 1, 1), new Vector3(0, -1, 1), new Vector3(1, 0, 1), new Vector3(-1, 0, 1) };
    private GameObject postIt;
    private float updateInterval = 0.5f; // Update every 0.5 seconds
    public float lastUpdateTime;

    void Start()
    {
        Debug.Log("Post-it creator started");
        for (int i = 0; i < 5; i++)
        {
            this.postIts[i] = Instantiate(obj, postItPositions[i], Quaternion.identity);
            this.postIts[i].GetComponentInChildren<PostItUpdater>().UpdateText("The default text of post-it " + i);
            this.postIts[i].GetComponentInChildren<PostItUpdater>().UpdateColor(postItColors[i]);
        }
        //this.postIt = Instantiate(obj, new Vector3(0, 0, 1), Quaternion.identity);
        //this.postIt.GetComponentInChildren<PostItUpdater>().UpdateText("The default text of post-it 4");
        //this.postIt.GetComponentInChildren<PostItUpdater>().UpdateColor("#FF0000");

    }

    // Update is called once per frame
    void Update()
    {
        // provide dynamical text update (dependant on the update Interval (0.5s))
        if (Time.time - lastUpdateTime > updateInterval)
        {
            DateTime currenttime = DateTime.Now;
            string formattedTime = currenttime.ToString("hh:mm:ss");
            for (int i = 0; i < 5; i++)
            {
                this.postIts[i].GetComponentInChildren<PostItUpdater>().UpdateText(i.ToString() + ": post-it text at time: " + formattedTime);
            }
            //this.postIt.GetComponentInChildren<PostItUpdater>().UpdateText("The post-it text at time: " + formattedTime);
            lastUpdateTime = Time.time;
        }
    }
} 



//     // Update is called once per frame
//     void Update()
//     {

//         //Checks for any air taps from either hand
//         for (int i = 0; i < 2; i++) //iterarting twice, once for each hand
//         {
//             InputDevice device = InputDevices.GetDeviceAtXRNode((i == 0) ? XRNode.RightHand : XRNode.LeftHand);
//             if (device.TryGetFeatureValue(CommonUsages.primaryButton, out bool isTapping))
//             {
//                 if (!isTapping)
//                 {
//                     //Stopped Tapping or wasn't tapping
//                     if (0f < _tappingTimer[i] && _tappingTimer[i] < 1f)
//                     {
//                         //User has been tapping for less than 1 sec. Get hand position and call ShortTap
//                         if (device.TryGetFeatureValue(CommonUsages.devicePosition, out Vector3 handPosition))
//                         {
//                             ShortTap(handPosition);
//                         }
//                     }
//                     _tappingTimer[i] = 0;
//                 }
//                 else
//                 {
//                     _tappingTimer[i] += Time.deltaTime;

//                 }
//             }

//         }
//     }
    
//     // </Update>


//     // <ShortTap>
//     /// <summary>
//     /// 
//     /// Called when a user is air tapping for a short time 
//     /// </summary>
//     /// <param name="handPosition">Location where tap was registered</param>
//     private async void ShortTap(Vector3 handPosition)
//     {

//         Debug.Log("Detected a tap!");
        
//         if (!IsAnchorNearby(handPosition, out GameObject anchorGameObject))
//         {
//             //No Anchor Nearby, start session and create an anchor
//             await CreateAnchor(handPosition);
//         }
//         else
//         {
//             //Delete nearby Anchor
//             DeleteAnchor(anchorGameObject);
//         }
//     }
//     // </ShortTap>


    
// }