using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeScale : MonoBehaviour
{
    private Vector3 scaleChange, positionChange;


    // Start is called before the first frame update
    void Start()
    {
        scaleChange = new Vector3(-0.001f, -0.001f, -0.001f);
        // positionChange = new Vector3(0.0f, -0.005f, 0.0f);
         positionChange = new Vector3(0.0f, 0.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {
        gameObject.transform.localScale += scaleChange;
        gameObject.transform.position += positionChange;

        // Move upwards when the sphere hits the floor or downwards
        // when the sphere scale extends 1.0f.
        if (gameObject.transform.localScale.y < 0.2f || gameObject.transform.localScale.y > 0.5f)
        {
            scaleChange = -scaleChange;
            positionChange = -positionChange;
        }


    }
}
