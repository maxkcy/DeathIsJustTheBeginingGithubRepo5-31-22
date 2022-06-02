using System.Collections;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    public enum WhatHappened {
        StillFighting,
        Won,
        Lost
    }
    [SerializeField] public GameObject Player;
    [ReadOnly] public List<GameObject> Enemies;
    [ReadOnly] public List<GameObject> Friendlies;
    [SerializeField] LevelUiManager levelUiManager;
    
    public WhatHappened whattahappan;
    
    
    void Start()
    {
        whattahappan = WhatHappened.StillFighting;
        foreach (RoboCtrl robo in FindObjectsOfType<RoboCtrl>())
        {
            Enemies.Add(robo.gameObject);
        }
        foreach (EtredalsAi friendly in FindObjectsOfType<EtredalsAi>())
        {
            Friendlies.Add(friendly.gameObject);
            friendly.gameObject.SetActive(false);
        }
    }

   
    public void CheckWhoRemains() {

        if (Enemies.Count == 0)
        {
            whattahappan = WhatHappened.Won;
        }
        else if (Friendlies.Count == 0)
        {
            whattahappan = WhatHappened.Lost;
        }
        switch (whattahappan)
        {
            case WhatHappened.Lost:
                //break stuff
                Debug.Log("<color=yellow>LevelManager:</color> SoRry, You loSt BroThErs...");
                levelUiManager.Message = "Sorry, you lost Brothers...";
                levelUiManager.ActiveEndOfGameCanvas();
                break;
            case WhatHappened.Won:
                //holy molly;
                Debug.Log("<color=yellow>LevelManager:</color> holY moLy u aCtuAly wOn?!");
                foreach (GameObject friendly in Friendlies)
                {
                    EtredalsAi fAi = friendly.GetComponent<EtredalsAi>();
                    fAi.target = fAi.gameObject.transform;
                }
                levelUiManager.Message = "holY moLy u aCtuAly wOn?!";
                levelUiManager.ActiveEndOfGameCanvas();
                break;
            default: break;
        }
    }
    public void SendInBackUp() {
        foreach (GameObject friendly in Friendlies)
        {
            friendly.SetActive(true);
        }
        //"did someone request back up?" * joke in ui
    }

    private void OnTriggerEnter2D(Collider2D collision) {
        Destroy(collision.gameObject);
        CheckWhoRemains();
    }


}
