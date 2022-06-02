using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoboCtrl : MonoBehaviour
{
    private bool _isIdle;
    private bool _isTargeting;
    private bool _dead = false;
    private Transform Target;
    private Animator _anim;
    [HideInInspector] public Rigidbody2D rb;
    public float health = 1000;
    private SpriteRenderer sr;
    private LevelManager levelMan;
    SFXctrl sFXctrl;

    private void Awake() {
        rb = GetComponent<Rigidbody2D>();
    }
    void Start()
    {
        _anim = GetComponent<Animator>();
        
        sr = GetComponent<SpriteRenderer>();
        levelMan = FindObjectOfType<LevelManager>();
        sFXctrl = GetComponent<SFXctrl>();
        Target = GetComponent<TargetingSystem>().Target;
    }

    void Update() 
        {
        
        if (Target != null)
        {
            float player_xDist = Mathf.Abs(Target.transform.position.x - transform.position.x);
            if (player_xDist < .5f)
            {
                _anim.SetTrigger("PlayerOverhead");
            }
        }

        _anim.SetFloat("V_Speed", rb.velocity.y);

        if (Idle)
        {
            _anim.SetBool("Idle", true);
            if (!Targeting)
            {
                sFXctrl.audsc.Stop();
            }
        }
        else
        {
            _anim.SetBool("Idle", false);

            if (sFXctrl.audsc.clip != sFXctrl.IdleClip && !Targeting)
            {
                sFXctrl.audsc.clip = sFXctrl.IdleClip;
            }
            if (!sFXctrl.audsc.isPlaying)
            {
                sFXctrl.audsc.Play();
            }

        }

       if (Targeting)
       {
            _anim.SetBool("Targeting", true);
            Debug.Log("<color=black>RoboCtrl: </color>" + $"{gameObject} am shooting ");
            if (sFXctrl.audsc.clip != sFXctrl.FireClip)
            {
                sFXctrl.audsc.clip = sFXctrl.FireClip;
            }
            if (!sFXctrl.audsc.isPlaying)
            {
                sFXctrl.audsc.Play();
            }
        }
        else
        {
             _anim.SetBool("Targeting", false);
            if (sFXctrl.audsc.clip == sFXctrl.FireClip)
            {
                sFXctrl.audsc.Stop();
            }
        }


        }
    
    


    public void TakeDamage() {
        health -= 1;
        sr.color = Color.red;
        Invoke("ResetColor", .01f);
        Debug.Log("<color=black>RoboCtrl: </color> I'm taking damage");
        if (health <= 0)
        {
            Dead = true;
            _anim.SetTrigger("Dead");
            Collider2D[] robocols = new Collider2D[rb.attachedColliderCount]; 
            rb.GetAttachedColliders(robocols);
            foreach (Collider2D col in robocols)
            {
                col.enabled = false;
            }
            Invoke("Remove", 5);
        }
    }
    void ResetColor() {
        sr.color = Color.white;
    }

    void Remove() {
        Destroy(gameObject);
        levelMan.Enemies.Remove(gameObject);
        levelMan.CheckWhoRemains();
    }

    public bool Idle { get => _isIdle; set { _isIdle = value; } }
    public bool Targeting { get => _isTargeting; set {_isTargeting = value; } }
    public bool Dead { get => _dead; set => _dead = true; }
}