using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using Debug = UnityEngine.Debug;

// the purpose of this script is to visualize the post-its given Post-it container class as input
public class PostItViz : MonoBehaviour
{
    public GameObject postItPrefab;
    // store the post-its in an vector of game objects of undefined length
    //private GameObject[] postIts = new GameObject[];

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // method to visualize post-its
    // public void VisualizePostIts(PostItContainer postItContainer)
    // {
    //     // iterate through post-its
    //     foreach (PostIt postIt in postItContainer.postits)
    //     {
    //         // create a post-it game object
    //         GameObject postItGameObject = Instantiate(postItPrefab, postIt.position, postIt.orientation);
    //         // set the text of the post-it game object
    //         postItGameObject.GetComponentInChildren<PostItUpdater>().UpdateText(postIt.text_content);
    //         // set the color of the post-it game object
    //         postItGameObject.GetComponentInChildren<PostItUpdater>().UpdateColor(postIt.rgb);
    //     }
    // }
}
