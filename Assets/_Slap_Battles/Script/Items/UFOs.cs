using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UFOs : MonoBehaviour
{
    public float moveSpeed;

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, moveSpeed, 0) * 10 * Time.deltaTime);
    }
}