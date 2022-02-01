using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeScaleTime : MonoBehaviour
{
    private Vector3 scaleChange, positionChange;
    public float stepPerSecond = 5f;
    private float sineFunction;
    private float sineFunction1;



    // Start is called before the first frame update
    void Start()
    {
        scaleChange = new Vector3(-stepPerSecond*Time.deltaTime, -stepPerSecond * Time.deltaTime, -stepPerSecond * Time.deltaTime);

       // scaleChange = new Vector3(-stepPerSecond * Time.deltaTime, -stepPerSecond * Time.deltaTime, -stepPerSecond * Time.deltaTime);
        // positionChange = new Vector3(0.0f, -0.005f, 0.0f);
       // positionChange = new Vector3(0.0f, 0.0f, 0.0f);
    }

    // Update is called once per frame
    void Update()
    {

        sineFunction = (3f + Mathf.Sin(4f*Time.unscaledTime))/8f;
        Vector3 vec = new Vector3(sineFunction, sineFunction, sineFunction);

        sineFunction1 = (Mathf.Sin(Time.unscaledTime)) / 2f;
        Vector3 vecPos = new Vector3(sineFunction1/2f, sineFunction1, 2f);

        transform.localScale = vec;
        transform.position = vecPos;

        //scaleChange = new Vector3(-stepPerSecond, -stepPerSecond, -stepPerSecond) * Time.deltaTime;
        //gameObject.transform.localScale += scaleChange;
        // transform.localScale += scaleChange;
        // gameObject.transform.position += positionChange;
        //
        // Move upwards when the sphere hits the floor or downwards
        // when the sphere scale extends 1.0f.
        /*  if (gameObject.transform.localScale.y < 0.4f || gameObject.transform.localScale.y > 0.5f)
          {
              scaleChange = -scaleChange;
              positionChange = -positionChange;
          }
        */

    }
}
