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
using Microsoft.MixedReality.Toolkit.Experimental.UI;


public enum PostItState { LOCKED, UNLOCKED }

public class PostItManager : MonoBehaviour
{

    private PostItState _state;
    private AzureSpatialAnchorsScript _script;
    private PostIt _data;

    // TextMeshPro objects
    // public TMP_InputField TitleTextInput;
    public TMP_InputField ContentTextInput;
    public TMP_InputField TitleTextInput;
    public TextMeshProUGUI ContentTextDisplay;
    public TextMeshProUGUI TitleTextDisplay;

    // Button to edit the text
    public GameObject EditTextButton;
    public GameObject EditTitleButton;

    // Renderer objects (for the material of the postit)
    public MeshRenderer contentQuadRend;
    public MeshRenderer titleBackPlateRend;

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
    public Material MaterialYellowTrans;
    public Material MaterialPinkTrans;
    public Material MaterialGreenTrans;
    public Material MaterialRedTrans;
    public Material MaterialBlueTrans;

    public GameObject ColorYellowButton;
    public GameObject ColorPinkButton;
    public GameObject ColorGreenButton;
    public GameObject ColorRedButton;
    public GameObject ColorBlueButton;
    

    // Start is called before the first frame update
    void Start()
    {
        // Start state of the postit is locked
        LockUI();

        /// READ: 
        /// Code for if we want to get the game objects without defining them in the inspector!

        // Find where we can access the material of the content Quad and the title in the prefab
        // Transform contentQuad = gameObject.transform.Find("ContentQuad");
    	// Transform titleBackPlate = gameObject.transform.Find("TitleBar/BackPlate");

        // Find where we can access the text of the content and title in the prefab
        // Transform contentText = gameObject.transform.Find("ContentQuad/TextInputField/ContentText");
        // Transform titleText = gameObject.transform.Find("TitleBar/BackPlate/TextInputField/TitleText");

        // Here we get the location of the input fields for the content and title 
        // Transform contentInputText = gameObject.transform.Find("ContentQuad/TextInputField");
        // Transform titleInputText = gameObject.transform.Find("TitleBar/BackPlate/TextInputField");

        // Debug.Log("APP_DEBUG: Getting ContentQuad from PostItPrefab");

        // if (contentQuad != null && contentText != null && titleBackPlate != null && titleText != null) //  && backPlate != null
        // {
        //     GameObject contentQuadGO = contentQuad.gameObject;
        //     GameObject contentTextGO = contentText.gameObject;
        //     GameObject titleBackPlateGO = titleBackPlate.gameObject; 
        //     GameObject titleTextGO = titleText.gameObject;
        //     GameObject contentInputTextGO = contentInputText.gameObject;
        //     GameObject titleInputTextGO = titleInputText.gameObject;

        //     // Gets the specific components of the post-it prefab
        //     this.contentQuadRend = contentQuadGO.GetComponent<MeshRenderer>();
        //     this.ContentTextDisplay = contentTextGO.GetComponent<TextMeshPro>();

        //     this.titleBackPlateRend = titleBackPlateGO.GetComponent<MeshRenderer>();
        //     this.TitleTextDisplay = titleTextGO.GetComponent<TextMeshPro>();

        //     this.ContentTextInput = contentInputTextGO.GetComponent<MRTKUGUIInputField>();
        //     this.TitleTextInput = titleInputTextGO.GetComponent<MRTKUGUIInputField>();
            
        // }
        // else
        // {
        //     Debug.Log("APP_DEBUG: Could not find ContentQuad or BackPlate in PostItPrefab");
        // }

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
            Debug.Log("APP_DEBUG: Setting content to:" + _data.Content);
            Debug.Log("APP_DEBUG: Setting title to:" + _data.Title);
            ContentTextInput.text = _data.Content;
            TitleTextInput.text = _data.Title;

            // sets the color of the postit
            SetMaterialFromColor(_data.Color);
            
            // sets the parent and local pose, scales after
            if (data.Pose != null && parent != null)
            {
                Debug.Log("ASA - Applying Pose on PostIt from server");
                transform.SetParent(parent.Instance.transform);
                transform.SetLocalPose(data.Pose.Value);
            }

            Debug.Log("ASA - Setting scale to: " + data.Scale);
            transform.localScale = data.Scale;
        });

    }

    // Changes the postit color (back plate and title bar) to the specified material
    public void ChangePostItColor(Material mat, Material mat_trans)
    {

            this.contentQuadRend.material = mat;
            this.titleBackPlateRend.material = mat_trans;
            Debug.Log("APP_DEBUG: Setting ContentQuad material.");

    }

    public void ChangeColorYellow()
    {
        ChangePostItColor(MaterialYellow, MaterialYellowTrans);
    }

    public void ChangeColorPink()
    {
        ChangePostItColor(MaterialPink, MaterialPinkTrans);
    }

    public void ChangeColorGreen()
    {
        ChangePostItColor(MaterialGreen, MaterialGreenTrans);
    }

    public void ChangeColorRed()
    {
        ChangePostItColor(MaterialRed, MaterialRedTrans);
    }

    public void ChangeColorBlue()
    {
        ChangePostItColor(MaterialBlue, MaterialBlueTrans);
    }

    // Sets the material of the post it based on the color value that is returned from Cosmos DB
    // Function is called when loading data from Cosmos DB
    private void SetMaterialFromColor(Color postItColor)
        {

            if (postItColor == Color.yellow)
            {
                ChangePostItColor(MaterialYellow, MaterialYellowTrans);
            }
            else if (postItColor == Color.magenta)
            {
                ChangePostItColor(MaterialPink, MaterialPinkTrans);
            }
            else if (postItColor == Color.green)
            {
                ChangePostItColor(MaterialGreen, MaterialGreenTrans);
            }
            else if (postItColor == Color.red)
            {
                ChangePostItColor(MaterialRed, MaterialRedTrans);
            }
            else if (postItColor == Color.blue)
            {
                ChangePostItColor(MaterialBlue, MaterialBlueTrans);
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
        LockUI();

        // Update the postit color (in the PostIt class)
        UpdatePostItColorFromMaterial(this.contentQuadRend.material);	

        // Update the postit content and title text (in the PostIt class)
        _data.Content = ContentTextDisplay.text;
        _data.Title = TitleTextDisplay.text;


        Exception ex = _script.SavePostIt(_data, gameObject);
        if (ex != null)
        {
            Debug.LogException(ex);
        }
    }

    public void LockUI()
    {
        Debug.Log("APP_DEBUG: Locking post it");
        _state = PostItState.LOCKED;

        // Display the unlock button, and hide the lock button
        UnlockButton.SetActive(true);
        LockButton.SetActive(false);

        // Hide the color edit buttons
        ColorYellowButton.SetActive(false);
        ColorPinkButton.SetActive(false);
        ColorGreenButton.SetActive(false);
        ColorRedButton.SetActive(false);
        ColorBlueButton.SetActive(false);

        // Turn off text editing of the postit (hide the edit text button)
        EditTextButton.SetActive(false);
        EditTitleButton.SetActive(false);
    }

    // Called when the user unlocks (to edit) the post it, by clicking on the unlock button
    public void Unlock()
    {
        _state = PostItState.UNLOCKED;
        //UnlockButton.SetActive(false);

        // Display the lock/save button
        LockButton.SetActive(true);

        // Display the color selection buttons
        ColorYellowButton.SetActive(true);
        ColorPinkButton.SetActive(true);
        ColorGreenButton.SetActive(true);
        ColorRedButton.SetActive(true);
        ColorBlueButton.SetActive(true);

        // Enable text and title editing (turning on the TextMeshPro input fields)
        EditTextButton.SetActive(true);
        EditTitleButton.SetActive(true);

    }

    // Function called when the user clicks on the delete button
    public void Delete()
    {
        Debug.Log("APP_DEBUG: Deleting post it");
        _script.DeletePostIt(_data, gameObject);
    }


}
