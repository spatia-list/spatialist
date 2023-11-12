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
    private GameObject postIt;
    private float updateInterval = 0.5f; // Update every 0.5 seconds
    public float lastUpdateTime;

    void Start()
    {
        this.postIt = Instantiate(obj, new Vector3(0, 0, 1), Quaternion.identity);
        this.postIt.GetComponentInChildren<PostItUpdater>().UpdateText("The default text of post-it 4");
        this.postIt.GetComponentInChildren<PostItUpdater>().UpdateColor("#FF0000");

    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time - lastUpdateTime > updateInterval)
        {
            DateTime currenttime = DateTime.Now;
            string formattedTime = currenttime.ToString("hh:mm:ss");
            this.postIt.GetComponentInChildren<PostItUpdater>().UpdateText("The post-it text at time: " + formattedTime);
            lastUpdateTime = Time.time;
        }
    }
}