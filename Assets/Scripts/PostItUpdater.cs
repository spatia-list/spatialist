using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class PostItUpdater : MonoBehaviour
{
    private TextMeshProUGUI tmpText;
    //private TMP_Text tmpText;
    private string postItId;

    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }

    // update text
    public void UpdateText(string text)
    {
        this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        this.tmpText.SetText(text);
        Debug.Log($"text update signal -> {text}");
    }

    // update color
    public void UpdateColor(string color)
    {
        this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        this.tmpText.color = ColorUtility.TryParseHtmlString(color, out var c) ? c : Color.white;
        Debug.Log($"color update signal -> {color}");
    }

    // update color using Unity's Color class
    public void UpdateColor(Color color)
    {
        this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        this.tmpText.color = color;
        Debug.Log($"color update signal -> {color}");
    }

    // set id
    public void UpdateId(string id)
    {
        this.postItId = id;
        Debug.Log($"id update signal -> {id}");
    }

    // update background color
    public void UpdateBackgroundColor(string color)
    {
        //this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        //this.tmpText.color = ColorUtility.TryParseHtmlString(color, out var c) ? c : Color.white;
        Debug.Log($"background color update signal -> {color}");
    }
}
