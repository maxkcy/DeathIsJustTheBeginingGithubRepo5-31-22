using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetingSystem : MonoBehaviour
{
    [SerializeField] private float _raycastLenght = 5.5f;
    RoboCtrl roboCtrl;
    public Transform Target;
    public bool IsCmdOff = false;
    private Animator _anim;
    private SpriteRenderer sr;
    private Rigidbody2D rb;
    void Start()
    {
        roboCtrl = GetComponent<RoboCtrl>();
        _anim = GetComponent<Animator>();
        sr = GetComponent<SpriteRenderer>();
        rb = GetComponent<Rigidbody2D>();

    }

    void Update() {
        if (Target != null)
        {
            TargetPlayer(CheckIfInVicinity());
        }

    }

    public bool CheckIfInVicinity() {
        
        float distance = Vector2.Distance(Target.position, transform.position);
        if (IsCmdOff)
        {
            if (distance < _raycastLenght) return true;
            else return false;
        }
        else
        {
            if (distance < _raycastLenght * 2) return true;
            else return false;
        }
    }

    public void TargetPlayer(bool playerInVicinity) {
        if (!playerInVicinity) 
        { 
            roboCtrl.Targeting = false;
            return; 
        }
        Vector2 dir = (Vector2)(Target.position - transform.position).normalized;
        Debug.DrawRay(transform.position, dir * _raycastLenght, Color.black);
        RaycastHit2D hit = Physics2D.Raycast(transform.position, dir, IsCmdOff ? _raycastLenght : _raycastLenght * 2,
                                            ~LayerMask.GetMask("Enemy", "Ignore Raycast", "Ladder"));
        if (hit)
        {
            Debug.Log("<color=black>my targeting system hit:</color> " + hit.collider.tag); 
            if (hit.collider.CompareTag("Friendly"))
            {
                roboCtrl.Idle = true;
                float trg_dltX = Mathf.Abs(Target.position.x - transform.position.x);
                if (trg_dltX < .5f)
                {
                    _anim.SetTrigger("PlayerOverhead");
                    roboCtrl.Targeting = false;
                    
                }else
                {
                    roboCtrl.Targeting = true;
                }
                

                if (Mathf.Sign(dir.x) < 0)
                {
                    sr.flipX = true;
                }
                else if (Mathf.Sign(dir.x) > 0)
                {
                    sr.flipX = false;
                }

                if (!roboCtrl.Dead)
                {
                    if (IsCmdOff)
                    {
                        int rand = Random.Range(-1, 1);
                        if (rand < 0 && Target != null) 
                        {
                            var hp = Target.GetComponent<Health>();
                            hp.TakeDamage(.5f);
                        } // gave null error w/ wheel feet :0

                    }
                    else
                    {
                        if (Target != null)
                        {
                            var hp = Target.GetComponent<Health>();
                            hp.TakeDamage(1f);
                        }
                    }

                    rb.velocity = new Vector2(0, rb.velocity.y);
                }
            }
            else { roboCtrl.Targeting = false; }
        }      
    }


}
