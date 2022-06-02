using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXctrl : MonoBehaviour
{

    public AudioClip FireClip;
    public AudioClip IdleClip; 
    [HideInInspector]public AudioSource audsc;
    void Start()
    {
        audsc = GetComponent<AudioSource>();
        if (audsc == null)
        {
            audsc = GetComponentInParent<AudioSource>();
        }
    }

}
