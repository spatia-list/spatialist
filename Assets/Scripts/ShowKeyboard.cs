using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class ShowKeyboard : MonoBehaviour
{
    public TouchScreenKeyboard keyboard;
    private TMP_InputField inputField;

    // Start is called before the first frame update
    void Start()
    {
        inputField = GetComponent<TMP_InputField>();
        // inputField.OnSelect.AddListener(x => OpenSystemKeyboard()); // calls the function OpenSystemKeyboard(), the x => is necessary because the OnSelect event passes a string as an output parameter (the inputfield ID)
    }

    
    public void OpenSystemKeyboard()
    {  
        string currentText = inputField.text; // Get the current text from the input field
        keyboard = TouchScreenKeyboard.Open(currentText, TouchScreenKeyboardType.Default, false, false, false, false);
        TouchScreenKeyboard.hideInput = true; // Hide the keyboard's input field

    }

    // Update is called once per frame
    private void Update()
    {
        if (keyboard != null)
        {
            if (keyboard.status == TouchScreenKeyboard.Status.Done || keyboard.status == TouchScreenKeyboard.Status.Canceled)
            {
                // set the keyboard to null so it doesn't open again
                keyboard = null;
            }
            else if (keyboard.active)
            {
                // show the typed text on the post-it (inputField)
                inputField.text = keyboard.text;
            }

        }
    }

}
