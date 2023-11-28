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


    void Start()
    {
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

        SetState(StartState);
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
        return _list[(int) state];
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

    public void SetU2() { SetState(UIState.LAUNCH);}

    public void SetU3() { SetState(UIState.SELECT_MAP); }

    public void SetU4() { SetState(UIState.MAPPING_MAIN); }

    public void SetU5() { SetState(UIState.MAPPING_MODE); }

    public void SetU6() { SetState(UIState.MAPPING_CHANGE_NAME); }

    public void SetU7() { SetState(UIState.MAPPING_CONFIRM_CANCEL); }

    public void SetU8() { SetState(UIState.LOCALIZATION); }

    public void SetU9() { SetState(UIState.POSTIT); }

}
