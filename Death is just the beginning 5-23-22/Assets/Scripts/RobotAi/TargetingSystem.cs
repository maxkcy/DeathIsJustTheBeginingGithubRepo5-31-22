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
            if (distance < _raycastLenght * 3) return true;
            else return false;
        }
    }

    public void TargetPlayer(bool playerInVicinity) {
        if (!playerInVicinity) { roboCtrl.Targeting = false; return; }
        Vector2 dir = (Vector2)(Target.position - transform.position).normalized;
        Debug.DrawRay(transform.position, dir * _raycastLenght, Color.black);
        RaycastHit2D hit = Physics2D.Raycast(transform.position, dir, IsCmdOff ? _raycastLenght : _raycastLenght * 3,
                                            ~LayerMask.GetMask("Enemy", "Ignore Raycast", "Ladder"));
        Debug.Log("<color=black>my targeting system hit:</color> " + hit.collider.tag);
        if (hit && hit.collider.CompareTag("Friendly"))
        {
            //Debug.Log("<color=black>Targeting System: rayCast hit on:</color>" + hit.collider.tag);
            float player_xDist = Mathf.Abs(Target.position.x - transform.position.x);

            if (player_xDist < .5f)
            {
                _anim.SetTrigger("PlayerOverhead");
                roboCtrl.Targeting = false;
                roboCtrl.Idle = true;
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
                //Debug.Log("<color=black>TargetingSystem: </color>Shooting Friendly, need to induce Damage");
                Target.GetComponent<Health>().TakeDamage();
                if (IsCmdOff) 
                {
                    int rand = Random.Range(-1, 1);
                    if (rand < 0) roboCtrl.Targeting = false;
                }
                else
                {
                    roboCtrl.Targeting = true;
                }
                roboCtrl.Idle = true;
            }
            rb.velocity = new Vector2(0, rb.velocity.y);
        }
        else { roboCtrl.Targeting = false; }
       
    }


}
