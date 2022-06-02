using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LadderMapScript : MonoBehaviour
{

    private void OnTriggerStay2D(Collider2D collision) {
        if (!collision.isTrigger)
        {
            collision.attachedRigidbody.gravityScale = .8f;
        }
       
    }

    private void OnTriggerExit2D(Collider2D collision) {
        collision.attachedRigidbody.gravityScale = 1;
        if (Mathf.Abs(collision.attachedRigidbody.velocity.y) > .3f)
        {
            collision.attachedRigidbody.velocity = new Vector2(collision.attachedRigidbody.velocity.x,
               .3f * Mathf.Sign(collision.attachedRigidbody.velocity.y));
        }
    }
}
