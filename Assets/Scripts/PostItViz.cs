using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
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
    void Start() { }

    // Update is called once per frame
    void Update() { }

    // method to visualize post-its
    public void VisualizePostIts(GetPostItsResponseJSON postItContainer)
    {
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            // iterate through post-its
            foreach (PostItJSON postIt in postItContainer.postits)
            {
                // create a post-it game object
                List<float> pos = postIt.pose.position;
                List<float> ori = postIt.pose.orientation;
                GameObject postItGameObject = Instantiate(
                    postItPrefab,
                    new Vector3(pos[0], pos[1], pos[2]),
                    new Quaternion(ori[0], ori[1], ori[2], ori[3])
                );
                // set the text of the post-it game object
                // add title and description in to one text
                string postItText = postIt.title + "\n" + postIt.content;
                postItGameObject.GetComponentInChildren<PostItUpdater>().UpdateText(postItText);
                // set the color of the post-it game object
                int r = postIt.rgb[0];
                int g = postIt.rgb[1];
                int b = postIt.rgb[2];
                Color32 color = new Color32((byte)r, (byte)g, (byte)b, 255);
                string htmlColor =
                    "#" + color.r.ToString("X2") + color.g.ToString("X2") + color.b.ToString("X2");
                postItGameObject.GetComponentInChildren<PostItUpdater>().UpdateColor(htmlColor);
            }
        });
    }
}
