using Microsoft.Azure.SpatialAnchors.Unity;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.Common;
using TMPro;
using Unity.Mathematics;
using Unity.VisualScripting;
using Unity.XR.CoreUtils;
using UnityEngine;


public enum PostItState { LOCKED, UNLOCKED }

public class PostItManager : MonoBehaviour
{

    private PostItState _state;
    private AzureSpatialAnchorsScript _script;
    private PostIt _data;

    // TextMeshPro objects
    public TextMeshPro TextDisplay;
    public TextMeshPro TextInput;
    public TextMeshPro Title;

    // Lock and Unlock buttons
    public GameObject LockButton;
    public GameObject UnlockButton;

    /// <summary>
    /// New material to change for post it
    /// </summary>
    public Material MaterialYellow;
    public Material MaterialPink;
    public Material MaterialGreen;
    public Material MaterialRed;
    public Material MaterialBlue;

    public GameObject Color1Button;
    public GameObject Color2Button;
    public GameObject Color3Button;
    public GameObject Color4Button;
    public GameObject Color5Button;

    private MeshRenderer quadRend;
    private MeshRenderer backPlateRend;


    // Start is called before the first frame update
    void Start()
    {
        // Start state of the postit is unlocked
        _state = PostItState.UNLOCKED;

        // Find where we can access the material of the title and content quad in the prefab
        Transform quad = gameObject.transform.Find("ContentQuad");
        Transform backPlate = gameObject.transform.Find("TitleBar/BackPlate");

        Debug.Log("APP_DEBUG: Getting ContentQuad from PostItPrefab");

        if (quad != null && backPlate != null)
        {
            GameObject quadGO = quad.gameObject;
            GameObject backPlateGO = backPlate.gameObject; 

            this.quadRend = quadGO.GetComponent<MeshRenderer>();
            this.backPlateRend = backPlateGO.GetComponent<MeshRenderer>();
        }
        else
        {
            Debug.Log("APP_DEBUG: Could not find ContentQuad or BackPlate in PostItPrefab");
        }

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
            // sets content and title text
            TextDisplay.SetText(_data.Content);
            Debug.Log("APP_DEBUG: Setting content to:" + _data.Content);
            Title.SetText(_data.Title);

            // sets the color of the postit
            SetMaterialFromColor(_data.Color);
            
            // sets the parent and local pose, scales after
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
        ChangePostItColor(MaterialYellow);
    }

    public void ChangeColorPink()
    {
        ChangePostItColor(MaterialPink);
    }

    public void ChangeColorGreen()
    {
        ChangePostItColor(MaterialGreen);
    }

    public void ChangeColorRed()
    {
        ChangePostItColor(MaterialRed);
    }

    public void ChangeColorBlue()
    {
        ChangePostItColor(MaterialBlue);
    }

    // Changes the postit color (back plate and title bar) to the specified material
    public void ChangePostItColor(Material mat)
    {

            this.quadRend.material = mat;
            this.backPlateRend.material = mat;
            Debug.Log("APP_DEBUG: Setting ContentQuad material.");


    }

    // Sets the material of the post it based on the color value that is returned from Cosmos DB
    // Function is called when loading data from Cosmos DB
    private void SetMaterialFromColor(Color postItColor)
        {

            if (postItColor == Color.yellow)
            {
                ChangePostItColor(MaterialYellow);
            }
            else if (postItColor == Color.magenta)
            {
                ChangePostItColor(MaterialPink);
            }
            else if (postItColor == Color.green)
            {
                ChangePostItColor(MaterialGreen);
            }
            else if (postItColor == Color.red)
            {
                ChangePostItColor(MaterialRed);
            }
            else if (postItColor == Color.blue)
            {
                ChangePostItColor(MaterialBlue);
            }
        }


    // Updates the RGB color value of the post it based on the material
    // This function is called when the PostIt data needs to be updated and saved to cosmos DB
    private void UpdatePostItColorFromMaterial(Material mat)
    {
        if (mat == MaterialYellow)
        {
            _data.Color = Color.yellow;
        }
        else if (mat == MaterialPink)
        {
            _data.Color = Color.magenta;
        }
        else if (mat == MaterialGreen)
        {
            _data.Color = Color.green;
        }
        else if (mat == MaterialRed)
        {
            _data.Color = Color.red;
        }
        else if (mat == MaterialBlue)
        {
            _data.Color = Color.blue;
        }
    }


    // Called when the user locks (saves) the post it, by clicking on the lock button
    public void Lock()
    {
        Debug.Log("APP_DEBUG: Locking post it");
        _state = PostItState.LOCKED;

        // Display the unlock button, and hide the lock button
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);

        // Hide the color edit buttons
        Color1Button.SetActive(false);
        Color2Button.SetActive(false);
        Color3Button.SetActive(false);
        Color4Button.SetActive(false);
        Color5Button.SetActive(false);

        // Turn off text editing of the postit
        TextInput.gameObject.SetActive(false);

        // Update the postit color (in the PostIt class)
        UpdatePostItColorFromMaterial(this.quadRend.material);	

        // Update the postit content (in the PostIt class)
        _data.Content = TextDisplay.text;

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

        // Display the lock/save button
        LockButton.SetActive(true);

        // Display the color selection buttons
        Color1Button.SetActive(true);
        Color2Button.SetActive(true);
        Color3Button.SetActive(true);
        Color4Button.SetActive(true);
        Color5Button.SetActive(true);

        // Enable text and title editing (turning on the TextMeshPro input fields)
        TextInput.gameObject.SetActive(true);

    }
}
