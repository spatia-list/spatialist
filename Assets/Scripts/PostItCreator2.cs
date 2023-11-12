using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class PostItCreator2 : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject obj;
    private TextMeshProUGUI textObj;
    private float updateInterval = 0.5f; // Update every 0.5 seconds
    public float lastUpdateTime;

    void Start()
    {
        Instantiate(obj, new Vector3(0, 0, 1), Quaternion.identity);
        Transform transObjDescription = obj.transform.Find("Text");

        // Check if the sub-object is found
        if (transObjDescription != null)
        {
            GameObject objDescription = transObjDescription.gameObject;

            Debug.Log("Found child: " + objDescription.name);

            textObj = objDescription.GetComponent<TextMeshProUGUI>();

            if (textObj != null)
            {
                textObj.SetText("This is the default text of the post-it at the start");
                Debug.Log("Changed text at the start");
            }
            else
            {
                Debug.Log("No text object");
            }
        }
        else
        {
            Debug.LogError("Description not found!");
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time - lastUpdateTime > updateInterval)
        {
            if (textObj != null)
            {
                DateTime currenttime = DateTime.Now;
                string formattedTime = currenttime.ToString("hh:mm:ss");
                obj.SetActive(false);
                textObj.gameObject.SetActive(false);
                textObj.SetText("The post-it text changed at time: " + formattedTime);
                Debug.Log("Changed text at time: " + formattedTime);
                textObj.gameObject.SetActive(true);
                obj.SetActive(true);
                lastUpdateTime = Time.time;
            }
        }
    }
}