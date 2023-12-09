using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;


public class ShowKeyboard : MonoBehaviour
{
    public TouchScreenKeyboard keyboard;
    private TMP_InputField activeInputField;


    // Start is called before the first frame update
    void Start()
    {

    }

    public void OpenSystemKeyboard(TMP_InputField InputField)
    {  
        this.activeInputField = InputField;
        string currentText = this.activeInputField.text; // Get the current text from the input field
        keyboard = TouchScreenKeyboard.Open(currentText, TouchScreenKeyboardType.Default, false, false, false, false);
        TouchScreenKeyboard.hideInput = true; // Hide the keyboard's input field

    }

    // Update is called once per frame
    private void Update()
    {
        // updates the selected input field with the keyboard response every frame
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
                this.activeInputField.text = keyboard.text;
            }

        }
    }

}
