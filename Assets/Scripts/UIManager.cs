using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum UIState
{
    WELCOME = 0,
    LAUNCH = 1,
    SELECT_MAP = 2,
    MAPPING_MAIN = 3,
    MAPPING_MODE = 4,
    MAPPING_CHANGE_NAME = 5,
    MAPPING_CONFIRM_CANCEL = 6,
    LOCALIZATION = 7,
    POSTIT = 8,
}

public class UIManager : MonoBehaviour
{
    // Start is called before the first frame update

    /// <summary>
    /// Used to keep UI prefabs in these objects to activate and deactivate
    /// </summary>
    public GameObject U1Welcome;
    public GameObject U2Launch;
    public GameObject U3SelectMap;
    public GameObject U4MappingMain;
    public GameObject U5MappingMode;
    public GameObject U6MappingChangeName;
    public GameObject U7MappingConfirmCancel;
    public GameObject U8Lozalization;
    public GameObject U9PostIt;

    /// <summary>
    /// Used to keep track of all GameObjects that represent an UI prefab
    /// </summary>
    private List<GameObject> _list = new();

    /// <summary>
    /// Current state of the UI
    /// </summary>
    private UIState _currentState;

    /// <summary>
    /// Initial state of the UI
    /// </summary>
    public UIState StartState;

    /// <summary>
    /// Current view that is displayed in the main scene
    /// </summary>
    private GameObject _currentView;


    private AzureSpatialAnchorsScript _script;


    void Start()
    {
        // find the AzureSpatialAnchorsScript component in the scene
        _script = gameObject.GetComponent<AzureSpatialAnchorsScript>();

        _list.Add(U1Welcome);
        _list.Add(U2Launch);
        _list.Add(U3SelectMap);
        _list.Add(U4MappingMain);
        _list.Add(U5MappingMode);
        _list.Add(U6MappingChangeName);
        _list.Add(U7MappingConfirmCancel);
        _list.Add(U8Lozalization);
        _list.Add(U9PostIt);

        for (int i = 0; i < _list.Count; i++)
        {
            _list[i].SetActive(false);
        }

        // Comment this out, when configuring the UI, let's reenable it
        SetState(StartState);
        _script.Speak("Welcome to the Spatia-list Post-it notes! Your virtual post-it notes. Click next to proceed.");
    }

    // Update is called once per frame
    void Update()
    {
        switch (_currentState)
        {
            case UIState.WELCOME:
                {

                    break;
                }

            case UIState.LAUNCH:
                {

                    break;
                }

            case UIState.SELECT_MAP:
                {

                    break;
                }

            case UIState.MAPPING_MAIN:
                {

                    break;
                }

            case UIState.MAPPING_MODE:
                {

                    break;
                }

            case UIState.MAPPING_CHANGE_NAME:
                {

                    break;
                }

            case UIState.MAPPING_CONFIRM_CANCEL:
                {

                    break;
                }

            case UIState.LOCALIZATION:
                {

                    break;
                }

            case UIState.POSTIT:
                {

                    break;
                }

            default:
                {

                    break;
                }
        }
    }

    /// <summary>
    /// Called to load the specific UI prefab according to the state
    /// </summary>
    /// <param name="state">UIState that represents the next view that we want to display</param>
    private GameObject getView(UIState state)
    {
        return _list[(int)state];
    }

    /// <summary>
    /// Called when we assign the state for the UI
    /// It disables the previous scene
    /// It loads the next scene
    /// </summary>
    /// <param name="state">UIState that UI has at the moment</param>
    public void SetState(UIState state)
    {
        if (_currentView)
        {
            _currentView.SetActive(false);
        }

        _currentState = state;

        _currentView = getView(state);

        if (_currentView != null)
        {
            _currentView.SetActive(true);
        }

    }

    /// <summary>
    /// Called when UI is in a specific state
    /// </summary>
    public void SetU1() { SetState(UIState.WELCOME); }

    public void SetU2() { SetState(UIState.LAUNCH); }

    public void SetU3() { SetState(UIState.SELECT_MAP); }

    public void SetU4() { SetState(UIState.MAPPING_MAIN); }

    public void SetU5() {
        _script = GameObject.Find("AzureSpatialAnchors").GetComponent<AzureSpatialAnchorsScript>();

        _script.Speak("First, you need to select an existing map, or need to create a new one. Then, raise your hand and look at your palm.There, you will see some buttons. Click on the mapping button to create anchors around the room. Click on the create button to create postits. You can modify your post-it by clicking edit button, delete it by using delete button, and save it by using save button.");

        SetState(UIState.MAPPING_MODE); 
    
    }

    public void SetU6() {
        // reset map name
        GameObject mappingChangeName = _list[(int)UIState.MAPPING_CHANGE_NAME];

        // get the child game object MRKeyboardInputField (TMP)
        Transform keyboardInputTrans = mappingChangeName.transform.Find("Mapping Change Map Name [Frame]/TextInputPrefab/VerticalGroup/MRKeyboardInputField (TMP)");
        // get the text from the input field
        GameObject keyboardInputObj = keyboardInputTrans.gameObject;
        keyboardInputObj.GetComponent<TMPro.TMP_InputField>().text = "";

        // enable the ui view
        SetState(UIState.MAPPING_CHANGE_NAME); 
        
    }

    public void SetU7() { SetState(UIState.MAPPING_CONFIRM_CANCEL); }

    public void SetU8() { SetState(UIState.LOCALIZATION); }

    public void SetU9() { SetState(UIState.POSTIT); }

    public void SetMapName()
    {
        // find the AzureSpatialAnchorsScript component in the scene
        _script = GameObject.Find("AzureSpatialAnchors").GetComponent<AzureSpatialAnchorsScript>();

        // get the text from the input field in the child game object MRKeyboardInputField (TMP)
        Debug.Log("APP_DEBUG: SetMapName called");

        // get the mapping change name gameobject
        GameObject mappingChangeName = _list[(int)UIState.MAPPING_CHANGE_NAME];
        // get the child game object MRKeyboardInputField (TMP)
        if (mappingChangeName == null)
        {
            Debug.Log("APP_DEBUG: mappingChangeName is null");
            return;
        }
        Transform keyboardInputTrans = mappingChangeName.transform.Find("Mapping Change Map Name [Frame]/TextInputPrefab/VerticalGroup/MRKeyboardInputField (TMP)");
        // get the text from the input field
        if (keyboardInputTrans == null)
        {
            Debug.Log("APP_DEBUG: keyboardInputTrans is null");
            return;
        }
        GameObject keyboardInputObj = keyboardInputTrans.gameObject;
        string groupName = keyboardInputObj.GetComponent<TMPro.TMP_InputField>().text;

        if (groupName == null || groupName == "")
        {
            Debug.Log("APP_DEBUG: groupName is empty");
            _script.Speak("Please enter a name for the map");
            return;
        }

        // print the group name
        Debug.Log("APP_DEBUG: entered group name is " + groupName);

        if (_script.IsMapNameExisting(groupName))
        {
            Debug.Log("APP_DEBUG: groupName already exists");
            _script.Speak("Map name already exists, please enter a different name");
            return;
        }

        Debug.Log("APP_DEBUG: Setting map name to: " + groupName);
        _script.SetCurrentGroup(groupName);
        _script.Speak("Entered to map "+ groupName);

        // disable the ui view
        _list[(int)UIState.MAPPING_CHANGE_NAME].SetActive(false);
    }


}
