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

    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void UpdateText(string text)
    {
        this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        this.tmpText.SetText(text);
        Debug.Log($"text update signal -> {text}");
    }

    public void UpdateColor(string color)
    {
        this.tmpText = gameObject.GetComponent<TextMeshProUGUI>();
        this.tmpText.color = ColorUtility.TryParseHtmlString(color, out var c) ? c : Color.white;
        Debug.Log($"color update signal -> {color}");
    }
}
