using UnityEngine;

//started 5-26-22
public class GunScript : MonoBehaviour
{
    [SerializeField] private float _raycastLength = 5.5f;
    private PlayerInputSystem _pis;
    private Animator _animator;
    private Health _health;
    SFXctrl sFXctrl;

    // Start is called before the first frame update
    private void Start() {
        _pis = GetComponentInParent<PlayerInputSystem>();
        _animator = GetComponentInParent<Animator>();
        _health = GetComponentInParent<Health>();
        sFXctrl = GetComponentInParent<SFXctrl>();
    }

    // Update is called once per frame
    private void Update() {
        Debug.DrawRay(transform.position, transform.right * transform.lossyScale.x * _raycastLength, Color.red);
        if (_health.health >= 0)
        {
            _animator.SetBool("isFiring", _pis.Fire);
            if (_pis.Fire)
            {
                if (!sFXctrl.audsc.isPlaying) sFXctrl.audsc.PlayOneShot(sFXctrl.FireClip);
            }
            RaycastHit2D hit = Physics2D.Raycast(transform.position, transform.right * transform.lossyScale.x, _raycastLength,
                                                ~(LayerMask.GetMask("Ignore Raycast", "Ladder")));
            if (hit && _pis.Fire)
            {
                //Debug.Log("<color=green>Player/GunScript: raycast hit: </color> " + hit.collider.tag);
                if (hit.collider.CompareTag("Enemy"))
                {
                    //Debug.Log("<color=green>Player/GunScript: </color> Enemy Shot, reset shot timer. for bool canDamage, event to invoke enemy damage method");
                    hit.collider.gameObject.GetComponent<RoboCtrl>().TakeDamage();
                }
                if (hit.collider.CompareTag("CMD"))
                {
                    hit.collider.gameObject.GetComponent<CMDscript>().TurnOff();
                }
            }
        }
    }
}