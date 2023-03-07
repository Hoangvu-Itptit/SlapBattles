using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NumberPlayer : MonoBehaviour
{
    public Text numberPlayerinGame;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (LevelCtl.Instance != null && LevelCtl.Instance.listActiveEnemy != null)
        {
            numberPlayerinGame.text = "Live: " + (LevelCtl.Instance.listActiveEnemy.Count + 1);
        }
    }
}