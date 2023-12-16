using Microsoft.Azure.SpatialAnchors.Unity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnchorManager : MonoBehaviour
{

    public GameObject anchor;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Hide()
    {
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            anchor.SetActive(false);
        });
    }

    public void Show()
    {
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            anchor.SetActive(true);
        });
    }
}
