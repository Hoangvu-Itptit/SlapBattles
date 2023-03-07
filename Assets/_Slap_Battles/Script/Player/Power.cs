using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Power : MonoBehaviour
{
    [SerializeField] private SlicedFilledImage powerFill;
    private bool isInPower;

    private void Awake()
    {
        isInPower = false;
        powerFill.fillAmount = 0;
    }

    private void OnEnable()
    {
        isInPower = false;
        powerFill.fillAmount = 0;
        transform.GetChild(0).GetChild(1).gameObject.SetActive(false);
        transform.GetChild(0).GetChild(0).gameObject.SetActive(true);
    }

    public void Uppower()
    {
        if (isInPower) return;

        powerFill.fillAmount += 1f / 5f;

        if (powerFill.fillAmount >= 0.99f)
        {
            StartCoroutine(PowerFull());
        }
    }

    IEnumerator PowerFull()
    {
        Debug.Log("Power");
        isInPower = true;
        var bar = transform.GetChild(0);
        bar.GetChild(0).gameObject.SetActive(false);
        bar.GetChild(1).gameObject.SetActive(true);
        
        var player = Player.Instance;
        var playerTranform = player.transform;
        playerTranform.localScale = new Vector3(3, 3, 3);
        player.moveSpeed += player.playerPower.playerMoveSpeed;

        yield return new WaitForSeconds(5);

        bar.GetChild(1).gameObject.SetActive(false);
        bar.GetChild(0).gameObject.SetActive(true);
        powerFill.fillAmount = 0;
        playerTranform.localScale = player.playerPower.playerSize;
        player.moveSpeed = player.playerPower.playerMoveSpeed;

        yield return new WaitForSeconds(30);
        isInPower = false;
    }
}