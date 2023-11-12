using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TextUpdateScript : MonoBehaviour
{
    
    // Attach to the TextMesh component linked to this object
    private TextMeshProUGUI textMeshPro;
    private float updateInterval = 0.5f; // Update every 0.5 seconds
    private float lastUpdateTime;

    void Start()
    {
        textMeshPro = GetComponent<TextMeshProUGUI>();
        textMeshPro.SetText("Script has attached to the Text component.");
        textMeshPro.color = Color.white;
    }

    // Update is called once per frame
    void Update()
    {
        if (Time.time - lastUpdateTime > updateInterval)
        {
            DateTime currenttime = DateTime.Now;
            string formattedTime = currenttime.ToString("hh:mm:ss");
            textMeshPro.SetText("The post-it text changed at time: " + formattedTime);
            Debug.Log("Changed text at time: " + formattedTime);
            lastUpdateTime = Time.time;
        }
    }

    //public void SetText(string text, Color color)
    //{ 
    //    Debug.Log($"TUS :: {text}");
    //    textMeshPro.SetText(text);
    //    textMeshPro.color = color;
    //}
}
