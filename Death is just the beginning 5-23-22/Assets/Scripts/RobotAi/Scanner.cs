using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scanner : MonoBehaviour
{
    // Start is called before the first frame update
    private TargetingSystem _tsys;
    void Start()
    {
        _tsys = GetComponentInParent<TargetingSystem>();
    }

    private void OnTriggerStay2D(Collider2D collision) {
        if (collision.CompareTag("Friendly"))
        {
            if (!collision.isTrigger) { _tsys.Target = collision.transform; }
        }
    }
}
