using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TextUpdateScript : MonoBehaviour
{
    
    // Attach to the TextMesh component linked to this object
    public TextMeshPro textMeshPro;


    void Start()
    {
        textMeshPro.SetText("Script has attached to the Text component.");
        textMeshPro.color = Color.white;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetText(string text, Color color)
    { 
        Debug.Log($"TextOut :: {text}");
        textMeshPro.SetText(text);
        textMeshPro.color = color;
    }
}
