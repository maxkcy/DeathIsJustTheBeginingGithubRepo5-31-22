using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoverMachine : MonoBehaviour
{
    private RoboCtrl _roboCtrl;
    private Rigidbody2D rb;
    private RoboPatrol _rPatrol;
    private TargetingSystem _tsys;
    void Start()
    {
        _roboCtrl = GetComponentInParent<RoboCtrl>();
        rb = GetComponentInParent<Rigidbody2D>();
        _rPatrol = GetComponentInParent<RoboPatrol>();
        _tsys = GetComponentInParent<TargetingSystem>();
    }


    private void OnTriggerStay2D(Collider2D collision) {
        if (collision.CompareTag("PlatForm") && !_roboCtrl.Idle)
        {
            rb.AddForce(new Vector2(0, _rPatrol.force));
            if (rb.velocity.y <= 1)
            {
                transform.parent.position = new Vector2(transform.parent.position.x, transform.parent.position.y + .01f);
            }
        }
        if (collision.CompareTag("Friendly"))
        {
            if (!collision.isTrigger) { _tsys.Target = collision.transform; }
        }
    }


}
