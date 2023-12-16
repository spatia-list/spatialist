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
using Microsoft.MixedReality.Toolkit.UI.BoundsControl;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.WebView;


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
    public MeshRenderer contentQuadBackRend;
    public MeshRenderer titleBackPlateBackRend;

    // Lock and UnlockUI buttons
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

    public GameObject WebViewObject;
    private Microsoft.MixedReality.WebView.WebView _webView;
    private IWebView _iWebView;
    

    // Start is called before the first frame update
    void Start()
    {
        // Start state of the postit is unlocked (since we want to edit and rescale the postit in the  )
        // Default state in the prefab is always unlocked! UnlockUI();

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

        bool isRichContent = false;
        if (data.Type == PostItType.MEDIA)
        {
            isRichContent = true;
        }
        Debug.Log("APP_DEBUG: PostIt - SetObject - isRichContent: " + isRichContent);

        // Perfor rich content
        if (data.Type == PostItType.MEDIA)
        {
            Debug.Log("APP_DEBUG: PostIt - SetObject - Rich content detected, loading media");
            UnityDispatcher.InvokeOnAppThread(() =>
            {
                WebViewObject.SetActive(true);
                
            });

            if (WebViewObject.TryGetComponent<Microsoft.MixedReality.WebView.WebView>(out Microsoft.MixedReality.WebView.WebView webView))
            {
                _webView = webView;
                
            }
            else
            {
                Debug.Log("APP_DEBUG: PostIt - SetObject - Could not find WebView component in WebViewObject");
            }

            if (_webView == null)
            {
                Debug.Log("APP_DEBUG: PostIt - SetObject - WebView is null");
                return;
            }
            else
            {
                Debug.Log("APP_DEBUG: PostIt - SetObject - WebView is not null");
            }

            _webView.GetWebViewWhenReady( (IWebView wv) =>
            {
                Debug.Log("APP_DEBUG: PostIt - SetObject - WebView is ready");
                _iWebView = wv;
            });

            Debug.Log("APP_DEBUG: PostIt - SetObject - Loading URL: " + data.Content);

            _webView.Load(new Uri(data.Content));
        }
        else
        {
            UnityDispatcher.InvokeOnAppThread(() =>
            {
                WebViewObject.SetActive(false);
            });
        }

    }

    // Changes the postit color (back plate and title bar) to the specified material
    public void ChangePostItColor(Material mat, Material mat_trans)
    {
        this.contentQuadRend.material = mat;
        this.contentQuadBackRend.material = mat;
        this.titleBackPlateRend.material = mat_trans;
        this.titleBackPlateBackRend.material = mat_trans;
        Debug.Log("APP_DEBUG: Setting ContentQuad material.");
    }

    public void ChangeColorYellow()
    {
        ChangePostItColor(MaterialYellow, MaterialYellowTrans);
        _data.Color = "yellow";
    }

    public void ChangeColorPink()
    {
        ChangePostItColor(MaterialPink, MaterialPinkTrans);
        _data.Color = "pink";
    }

    public void ChangeColorGreen()
    {
        ChangePostItColor(MaterialGreen, MaterialGreenTrans);
        _data.Color = "green";
    }

    public void ChangeColorRed()
    {
        ChangePostItColor(MaterialRed, MaterialRedTrans);
        _data.Color = "red";
    }

    public void ChangeColorBlue()
    {
        ChangePostItColor(MaterialBlue, MaterialBlueTrans);
        _data.Color = "blue";
    }


    // Sets the material of the post it based on the color value that is returned from Cosmos DB
    // Function is called when loading data from Cosmos DB
    private void SetMaterialFromColor(string postItColorName)
    {
        _data.Color = postItColorName;
        ColorToMaterials(postItColorName, out Material mat, out Material mat_trans);
        ChangePostItColor(mat, mat_trans);
    }

    
    public void ColorToMaterials(String colorName, out Material mat, out Material mat_trans)
    {

        /* It is invalid to check the color using the static color.(...) objects since they are stored as RGB triples (in a range from 0 to 1)
         * Therefore, we need to construct a list of all the usable colors, get their RGB values, and choose the one with
         * the smallest distance. If the distance is larger than a threshold, we can assume that the color is not recognized
         */
        
        // float minDistance = float.MaxValue;
        // Color? closestColor = null;

        // Vector3 vecTarget = new Vector3(color.r, color.g, color.b);

        // foreach (Color c in _availableColors)
        // {
        //     Vector3 vec = new Vector3(c.r, c.g, c.b);
        //     float distance = Vector3.Distance(vec, vecTarget);
        //     if (distance < minDistance)
        //     {
        //         minDistance = distance;
        //         closestColor = c;
        //     }
        // }

        // Debug.Log("APP_DEBUG: PostIt - ColorToMaterials - Closest color is: " + closestColor + " with distance" + minDistance);

        switch (colorName)
        {
            case "yellow":
                mat = MaterialYellow;
                mat_trans = MaterialYellowTrans;
                break;
            case "pink":
                mat = MaterialPink;
                mat_trans = MaterialPinkTrans;
                break;
            case "green":
                mat = MaterialGreen;
                mat_trans = MaterialGreenTrans;
                break;
            case "red":
                mat = MaterialRed;
                mat_trans = MaterialRedTrans;
                break;
            case "blue":
                mat = MaterialBlue;
                mat_trans = MaterialBlueTrans;
                break;
            default:
                Debug.Log("APP_DEBUG: PostIt - ColorToMaterials - Something went wrong, color string not recognized while loading data from Cosmos DB. Setting color to yellow (default)");
                mat = MaterialYellow;
                mat_trans = MaterialYellowTrans;
                break;
        }
    }




    // Called when the user locks (saves) the post it, by clicking on the lock button
    public void Lock()
    {
        LockUI();

        // Update the postit content and title text (in the PostIt class)
        _data.Content = ContentTextDisplay.text;
        _data.Title = TitleTextDisplay.text;

        Exception ex = _script.SavePostIt(_data, gameObject);
        if (ex != null)
        {
            Debug.LogException(ex);
        }
    }

    // Lock the UI elements of the post it
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

        // Lock the scaling (bounds control)
        if (gameObject.TryGetComponent<BoundsControl>(out BoundsControl postitBoundsControl))
        {
            Debug.Log("APP_DEBUG: PostIt - LockUI - Removing bounds control");
            postitBoundsControl.enabled = false; // makes sure that we can not rescale the postit when the poster is locked
        }

        // Lock the position (disable interaction grabbable)
        if (gameObject.TryGetComponent<NearInteractionGrabbable>(out NearInteractionGrabbable postitGrabbable))
        {
            Debug.Log("APP_DEBUG: PostIt - LockUI - Removing grabbable");
            postitGrabbable.enabled = false; // makes sure that we can not move the postit when the poster is locked
        }

    }

    // Called when the user unlocks (to edit) the post it, by clicking on the unlock button
    public void UnlockUI()
    {
        _state = PostItState.UNLOCKED;

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

        // Turn on the scaling (bounds control)
        if (gameObject.TryGetComponent<BoundsControl>(out BoundsControl postitBoundsControl))
        {
            Debug.Log("APP_DEBUG: PostIt - LockUI - Removing bounds control");
            postitBoundsControl.enabled = true; // makes sure that we can not rescale the postit when the poster is locked
        }

        // Turn on interaction grabbable
        if (gameObject.TryGetComponent<NearInteractionGrabbable>(out NearInteractionGrabbable postitGrabbable))
        {
            Debug.Log("APP_DEBUG: PostIt - LockUI - Removing grabbable");
            postitGrabbable.enabled = true; // makes sure that we can not move the postit when the poster is locked
        }

    }

    // Function called when the user clicks on the delete button
    public void Delete()
    {
        Debug.Log("APP_DEBUG: Deleting post it");
        _script.DeletePostIt(_data, gameObject);
    }


}
