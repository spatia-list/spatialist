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
    private PostIt _data;

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

    public void SetObject(PostIt data)
    {
        if (data == null)
        {
            Debug.Log("PostIt - Tried to assign a null data obj");
            return; // stops the execution
        }
        _data = data;
        
        Pose? poseTransform = null;

        if (data.Pose != null)
        {
            poseTransform = _script.ApplyPoseFromCosmos(data.AnchorId, data.Pose.Value);
        }

        UnityDispatcher.InvokeOnAppThread(() =>
        {
            Text.SetText(_data.Content);
            Debug.Log("Setting content to:" +  _data.Content);
            Title.SetText(_data.Title);

            if (poseTransform != null)
            {
                transform.SetPositionAndRotation(poseTransform.Value.position, poseTransform.Value.rotation);
            }
        });
            
    }


    // Called when the user locks (saves) the post it, by clicking on the lock button
    public void Lock()
    {
        _state = PostItState.LOCKED;
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);
        Exception ex = _script.SavePostIt(_data, gameObject);
        if (ex != null)
        {
            Debug.LogException(ex);
        }
    }

    // Called when the user unlocks (to edit) the post it, by clicking on the unlock button
    public void Unlock()
    {
        _state= PostItState.UNLOCKED;
        UnlockButton.SetActive(false);
        LockButton.SetActive(true);
    }
}
