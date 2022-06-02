using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeamAiScanner : MonoBehaviour
{
    EtredalsAi etredalsAi;

    private void Start() {
        etredalsAi = GetComponentInParent<EtredalsAi>();
    }
    private void OnTriggerStay2D(Collider2D collision) {
        if (collision.CompareTag("Enemy"))
        {
            Debug.Log("<color=green>AiScanner</color> Picked up an enemy near me :3 frightened");
            if (!collision.isTrigger) etredalsAi.target = collision.transform;

        }
    }
}
