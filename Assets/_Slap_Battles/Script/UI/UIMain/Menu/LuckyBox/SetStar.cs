using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetStar : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        SetNumStar();
    }

    private void OnEnable()
    {
        SetNumStar();
    }

    public void SetNumStar()
    {
        var num = PrefData.number_star_have;
        for (int i = 0; i < 3; i++)
        {
            if (i < num)
            {
                transform.GetChild(i).GetChild(0).gameObject.SetActive(false);
                transform.GetChild(i).GetChild(1).gameObject.SetActive(true);
            }
            else
            {
                transform.GetChild(i).GetChild(0).gameObject.SetActive(true);
                transform.GetChild(i).GetChild(1).gameObject.SetActive(false);
            }
        }
    }
}
