using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class AnchorEffect : MonoBehaviour
{

    public int speed;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        // rotate the cube so that one corner is alwys facing the top
        gameObject.transform.Rotate(0, 0, speed * Time.deltaTime);
    }
}
