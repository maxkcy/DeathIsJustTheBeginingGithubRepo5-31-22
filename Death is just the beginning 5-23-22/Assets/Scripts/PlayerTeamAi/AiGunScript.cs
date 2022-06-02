using UnityEngine;

public class AiGunScript : MonoBehaviour
{
    public float raycastLength = 5.5f;
    private Animator _anim;
    private Health _health;
    SFXctrl sFXctrl;

    // Start is called before the first frame update
    private void Start() {
        _anim = GetComponentInParent<Animator>();
        _health = GetComponentInParent<Health>();
        sFXctrl = GetComponent<SFXctrl>();
    }

    // Update is called once per frame
    private void Update() {
        if (_health.health > 0)
        {
            Shoot();
        }
    }

    public void Shoot() {
        Debug.DrawRay(transform.position, transform.right * transform.lossyScale.x * raycastLength, Color.red);
        RaycastHit2D hit = Physics2D.Raycast(transform.position, transform.right * transform.lossyScale.x, raycastLength,
                                            ~LayerMask.GetMask("Friendly", "Player", "Ladder"));
        if (hit)
        {
            //Debug.Log("<color=green>Player/GunScript: raycast hit: </color> " + hit.collider.tag);
            if (hit.transform.CompareTag("Enemy"))
            {
                //Debug.Log("<color=green>Player/GunScript: </color> Enemy Shot, reset shot timer. for bool canDamage, event to invoke enemy damage method");
                hit.transform.gameObject.GetComponent<RoboCtrl>().TakeDamage();
                _anim.SetBool("isFiring", true);
                if (!sFXctrl.audsc.isPlaying) sFXctrl.audsc.PlayOneShot(sFXctrl.FireClip);
            }
            else _anim.SetBool("isFiring", false);
        } 
    }
}