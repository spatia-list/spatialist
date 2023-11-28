using Microsoft.Azure.SpatialAnchors.Unity;
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
        _object = obj;
        UnityDispatcher.InvokeOnAppThread(() =>
        {
            Text.SetText(_object.Content);
            Debug.Log("Setting content to:" +  _object.Content);
            Title.SetText(_object.Title);
        });
            
    }

    public void Lock()
    {
        _state = PostItState.LOCKED;
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);
    }

    public void Unlock()
    {
        _state= PostItState.UNLOCKED;
        UnlockButton.SetActive(false);
        LockButton.SetActive(true);
    }
}
