using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CMDscript : MonoBehaviour
{
    [SerializeField] Sprite OffSprite;
    SpriteRenderer sr;
    TargetingSystem[] RobosTS;
    Collider2D col;
    Transform[] SPs;
    
    void Start()
    {
        sr = GetComponent<SpriteRenderer>();
        RobosTS = FindObjectsOfType<TargetingSystem>();
        col = GetComponent<Collider2D>();
        SPs = GetComponentsInChildren<Transform>();
        transform.position = SPs[Random.Range(0, SPs.Length - 1)].position;
    }

    void Update()
    {
        
    }

    public void TurnOff() {
        sr.sprite = OffSprite;
        foreach (TargetingSystem ts in RobosTS)
        {
            ts.IsCmdOff = true;
        }
        col.enabled = false;
    }
}
