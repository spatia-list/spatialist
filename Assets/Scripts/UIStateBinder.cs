using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIStateBinder : MonoBehaviour
{

    public UIManager manager;

    public void SetUIManagerState(UIState state)
    {
        if (manager == null)
        {
            Debug.Log("APP_DEBUG: Component tried to set state without attached UI manager!");
            return;
        }

        manager.SetState(state);
    }

}
