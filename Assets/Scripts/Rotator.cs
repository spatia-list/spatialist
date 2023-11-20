using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour

{

    public float speed;

    public Vector3 unitVector;

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Starting rotation");
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(speed * Time.deltaTime * unitVector);
    }
}
