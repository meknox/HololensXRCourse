using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowPointer : MonoBehaviour
{
    public GameObject pointer;
    Vector3 prevFollow;

    void Start()
    {
        prevFollow = new Vector3(0.001f, 0.001f, 0.001f);
    }

    // Update is called once per frame
    void Update()
    {
        if (pointer.transform.position != prevFollow)
        {
            StopCoroutine("followFunc");
            StartCoroutine("followFunc", pointer.transform.position);
            prevFollow = pointer.transform.position;
        }
    }

    IEnumerator followFunc(Vector3 target)
    {
        while (Vector3.Distance(transform.position, target) > 0.05f)
        {
            transform.position = Vector3.Lerp(transform.position, target, 0.5f);

            yield return null;
        }
    }
}
