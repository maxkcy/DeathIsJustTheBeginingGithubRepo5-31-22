using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VelocityLimiter : MonoBehaviour
{
    Rigidbody2D rb;
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Mathf.Abs(rb.velocity.x) > 4)
        {
            rb.velocity = new Vector2(4 * Mathf.Sign(rb.velocity.x), rb.velocity.y); 
        }
        if (Mathf.Abs(rb.velocity.y) > 6f)
        {
            rb.velocity = new Vector2(rb.velocity.x, 6 * Mathf.Sign(rb.velocity.y));
        }
    }
}
