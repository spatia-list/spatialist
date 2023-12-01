using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


public enum PostItState {LOCKED, UNLOCKED}

public class PostItManager : MonoBehaviour
{

    private PostItState _state;
    private AzureSpatialAnchorsScript _script;
    private PostIt _object;

    public TextMeshPro Text;
    public TextMeshPro Title;
    public GameObject LockButton;
    public GameObject UnlockButton;

    // Start is called before the first frame update
    void Start()
    {
        _state = PostItState.UNLOCKED;
    }

    // Update is called once per frame
    void Update()
    {
    }


    public void AttachToInstance(AzureSpatialAnchorsScript script)
    {
        _script = script;
    }

    public void SetObject(PostIt obj)
    {
        if (obj == null)
        {
            Debug.Log("PostIt - Tried to assign a null data obj");
        }
        _object = obj;
        
        Pose? poseTransform = null;

        if (obj.Pose != null)
        {
            poseTransform = _script.ApplySavedPose(obj.AnchorId, obj.Pose.Value);
        }


        UnityDispatcher.InvokeOnAppThread(() =>
        {
            Text.SetText(_object.Content);
            Debug.Log("Setting content to:" +  _object.Content);
            Title.SetText(_object.Title);

            if (poseTransform != null)
            {
                transform.SetPositionAndRotation(poseTransform.Value.position, poseTransform.Value.rotation);
            }
        });
            
    }

    public void Lock()
    {
        _state = PostItState.LOCKED;
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);
        Exception ex = _script.SavePostIt(_object, gameObject);
        if (ex != null)
        {
            Debug.LogException(ex);
        }
    }

    public void Unlock()
    {
        _state= PostItState.UNLOCKED;
        UnlockButton.SetActive(false);
        LockButton.SetActive(true);
    }
}
