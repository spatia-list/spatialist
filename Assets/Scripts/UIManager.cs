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
    public GameObject U1Welcome;
    public GameObject U2Launch;
    public GameObject U3SelectMap;
    public GameObject U4MappingMain;
    public GameObject U5MappingMode;
    public GameObject U6MappingChangeName;
    public GameObject U7MappingConfirmCancel;
    public GameObject U8Lozalization;
    public GameObject U9PostIt;

    private List<GameObject> _list = new();
    public UIState CurrentState;


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
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetState(UIState state)
    {
        CurrentState = state;
    }
}
