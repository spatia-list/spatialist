using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Mathematics;
using Unity.XR.CoreUtils;
using UnityEngine;


public enum PostItState { LOCKED, UNLOCKED }

public class PostItManager : MonoBehaviour
{

    private PostItState _state;
    private AzureSpatialAnchorsScript _script;
    private PostIt _data;

    public TextMeshPro Text;
    public TextMeshPro Title;
    public GameObject LockButton;
    public GameObject UnlockButton;

    /// <summary>
    /// New material to change for post it
    /// </summary>
    public Material Material_1;
    public Material Material_2;
    public Material Material_3;
    public Material Material_4;
    public Material Material_5;

    public GameObject Color1Button;
    public GameObject Color2Button;
    public GameObject Color3Button;
    public GameObject Color4Button;
    public GameObject Color5Button;

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

    public void SetObject(PostIt data, LocalAnchor parent)
    {
        if (data == null)
        {
            Debug.Log("APP_DEBUG: PostIt - Tried to assign a null data obj");
            return; // stops the execution
        }
        _data = data;


        

        UnityDispatcher.InvokeOnAppThread(() =>
        {
            Text.SetText(_data.Content);
            Debug.Log("APP_DEBUG: Setting content to:" + _data.Content);
            Title.SetText(_data.Title);

            if (data.Pose != null && parent != null)
            {
                Debug.Log("ASA - Applying Pose on PostIt from server");
                transform.SetParent(parent.Instance.transform);
                transform.SetLocalPose(data.Pose.Value);
            }

            transform.localScale = Vector3.one * data.Scale;
        });

    }

    public void ChangeColorYellow()
    {
        ChangePostItColor(Material_1);
    }

    public void ChangeColorPink()
    {
        ChangePostItColor(Material_2);
    }

    public void ChangeColorGreen()
    {
        ChangePostItColor(Material_3);
    }

    public void ChangeColorRed()
    {
        ChangePostItColor(Material_4);
    }

    public void ChangeColorBlue()
    {
        ChangePostItColor(Material_5);
    }

    public void ChangePostItColor(Material mat)
    {
        Transform quad = gameObject.transform.Find("ContentQuad");
        Transform backPlate = gameObject.transform.Find("TitleBar/BackPlate");

        Debug.Log("APP_DEBUG: Getting ContentQuad from PostItPrefab");

        if (quad != null && backPlate != null)
        {
            GameObject quadGO = quad.gameObject;
            GameObject backPlateGO = backPlate.gameObject; 

            MeshRenderer quadRend = quadGO.GetComponent<MeshRenderer>();
            MeshRenderer backPlateRend = backPlateGO.GetComponent<MeshRenderer>();

            quadRend.material = mat;
            backPlateRend.material = mat;

            Debug.Log("APP_DEBUG: Setting ContentQuad material.");
        }
    }


    // Called when the user locks (saves) the post it, by clicking on the lock button
    public void Lock()
    {
        Debug.Log("APP_DEBUG: Locking post it");
        _state = PostItState.LOCKED;
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);
        Color1Button.SetActive(false);
        Color2Button.SetActive(false);
        Color3Button.SetActive(false);
        Color4Button.SetActive(false);
        Color5Button.SetActive(false);

        Exception ex = _script.SavePostIt(_data, gameObject);
        if (ex != null)
        {
            Debug.LogException(ex);
        }
    }

    // Called when the user unlocks (to edit) the post it, by clicking on the unlock button
    public void Unlock()
    {
        _state = PostItState.UNLOCKED;
        //UnlockButton.SetActive(false);
        LockButton.SetActive(true);
        Color1Button.SetActive(true);
        Color2Button.SetActive(true);
        Color3Button.SetActive(true);
        Color4Button.SetActive(true);
        Color5Button.SetActive(true);
    }
}
