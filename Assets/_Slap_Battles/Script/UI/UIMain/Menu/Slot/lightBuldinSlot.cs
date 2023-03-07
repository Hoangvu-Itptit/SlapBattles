using System;
using System.Collections;
using UnityEngine;

public class lightBuldinSlot : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        StartCoroutine(Flicker());
    }

    IEnumerator Flicker()
    {
        bool check = true;
        while (true)
        {
            
            for (int i = 0; i < transform.childCount; i++)
            {
                if (i % 2 == 0)
                {
                    transform.GetChild(i).GetChild(0).gameObject.SetActive(!check);
                    transform.GetChild(i).GetChild(1).gameObject.SetActive(check);
                }
                else
                {
                    transform.GetChild(i).GetChild(0).gameObject.SetActive(check);
                    transform.GetChild(i).GetChild(1).gameObject.SetActive(!check);
                }
                /*var rand = Random.Range(0, 2);
                if (rand == 1)
                {
                    transform.GetChild(i).GetChild(0).gameObject.SetActive(false);
                    transform.GetChild(i).GetChild(1).gameObject.SetActive(true);
                }
                else
                {
                    transform.GetChild(i).GetChild(0).gameObject.SetActive(true);
                    transform.GetChild(i).GetChild(1).gameObject.SetActive(false);
                }*/
            }

            check = !check;
            yield return new WaitForSeconds(0.5f);
        }
    }
}