using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoboPatrol : MonoBehaviour
{
    [SerializeField] private List<Transform> Waypoints;
    [SerializeField] public float force;
    private int _crtWPIndex;
    private RoboCtrl _roboCtrl;
    Rigidbody2D rb;
    private SpriteRenderer sr;
    void Start()
    {
        _roboCtrl = GetComponent<RoboCtrl>();
        rb = GetComponent<Rigidbody2D>();
        _crtWPIndex = 0;
        sr = GetComponent<SpriteRenderer>();
    }

    void Update()
    {
        if (!_roboCtrl.Targeting && _roboCtrl.Idle)
        {
            Invoke("WaitB4Patrol", .7f);
        }
        Patrol();

    }

    void WaitB4Patrol() {
        _roboCtrl.Idle = false;
    }

    void Patrol() {
        if (_roboCtrl.Targeting || _roboCtrl.Idle) return;
        float dis = Vector2.Distance(Waypoints[_crtWPIndex].position, transform.position);
        if (dis < 1)
        {
            if (_crtWPIndex >= Waypoints.Count - 1)
            {
                _crtWPIndex = 0;
            } else
            {
                _crtWPIndex++;
            }

        }
        Vector2 dir = (Waypoints[_crtWPIndex].position - transform.position).normalized;
        rb.AddForce(dir * force * .2f);
        if (Mathf.Sign(rb.velocity.x) < 0)
        {
            sr.flipX = true;
        }
        else if (Mathf.Sign(rb.velocity.x) > 0)
        {
            sr.flipX = false;
        }
    }





}
