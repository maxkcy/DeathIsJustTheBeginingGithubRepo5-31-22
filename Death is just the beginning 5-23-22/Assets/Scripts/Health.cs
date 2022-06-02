using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour
{
    public float health = 1000f;
    SpriteRenderer sr;
    [SerializeField] Cinemachine.CinemachineVirtualCamera MainCam;
    Rigidbody2D rb;
    public bool Dead;
    public LevelManager levelManager;

    void Start() {
        sr = GetComponent<SpriteRenderer>();
        rb = GetComponent<Rigidbody2D>();
        levelManager = FindObjectOfType<LevelManager>();
    }

    public void TakeDamage() {
        health -= 1;
        sr.color = Color.red;
        Invoke("ResetColor", .01f);
        Debug.Log("<color=green>PlayerCtrl: </color> I'm taking damage");
        if (health <= 0)
        {
            Collider2D[] cols = new Collider2D[rb.attachedColliderCount];
            rb.GetAttachedColliders(cols);
            foreach (Collider2D col in cols)
            {
                col.enabled = false;
            }
            transform.Rotate(0, 0, 90 * transform.lossyScale.x);
            if (GetComponent<PlayerCtrl>().isActiveAndEnabled) {
                Debug.Log("<color=green>Player's health: </color> Sending in back up");
                Invoke("ActivateTeam", 3f); 
            }
            Invoke("Remove", 3f);
        }
    }

    void ResetColor() {
        sr.color = Color.white;
    }

    void Remove() {
        
        Destroy(gameObject);
        levelManager.Friendlies.Remove(gameObject);
        levelManager.CheckWhoRemains();
        if (MainCam != null) MainCam.Priority = 0;
    }

    void ActivateTeam() {
        levelManager.SendInBackUp();
    }
}
