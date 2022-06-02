using UnityEngine;

//started 5-26-22
[RequireComponent(typeof(PlayerInputSystem))]
public class PlayerCtrl : MonoBehaviour
{
    [SerializeField] private float _speed = .1f;
    [SerializeField] private CapsuleCollider2D _feetCol;
    [SerializeField] private CapsuleCollider2D _bodCol;
    [SerializeField] private float _jumpForce = 1000f;
    private PlayerInputSystem _pis;
    private Transform _torsoBone;
    private Rigidbody2D rb;
    private float _initBodSizeY, _initBodyOffSetY;

    private void Start() {
        _pis = GetComponent<PlayerInputSystem>();
        _torsoBone = transform.Find("Bones/Root Bone/Torso Bone");
        rb = GetComponent<Rigidbody2D>();
        _initBodSizeY = _bodCol.size.y; _initBodyOffSetY = _bodCol.offset.y;
    }

    private void Update() {
        Flip();
        RotateTorso(_pis.MousePos);
        Move();
    }

    private Vector2 MouseToWorld(Vector2 mousePos) {
        Vector2 _mousePos = Camera.main.ScreenToWorldPoint(mousePos);
        return _mousePos;
    }

    private void RotateTorso(Vector2 mousePos) {
        Vector2 worldMousePos = MouseToWorld(mousePos);
        Vector2 dir = (worldMousePos - (Vector2)_torsoBone.position).normalized;
        //this should be a method
        if (Mathf.Abs(dir.y) > .8f)
        {
            _bodCol.size = new Vector2(_bodCol.size.x, _initBodSizeY - .2f);
            _bodCol.offset = new Vector2(_bodCol.offset.x, _initBodyOffSetY - .2f);
        }
        else
        {
            _bodCol.size = new Vector2(_bodCol.size.x, _initBodSizeY);
            _bodCol.offset = new Vector2(_bodCol.offset.x, _initBodyOffSetY);
        }

        float deltaZAngle = Quaternion.FromToRotation(-_torsoBone.up, dir).eulerAngles.z;
        deltaZAngle *= _torsoBone.lossyScale.x;
        _torsoBone.Rotate(0, 0, deltaZAngle);
    }

    private void Flip() {
        if (MouseToWorld(_pis.MousePos).x > transform.position.x)
        {
            transform.localScale = new Vector2(1, 1);
        }
        else
        {
            transform.localScale = new Vector2(-1, 1);
        }
    }

    private void Move() {
        MoveHorizontal();
        if (_feetCol.IsTouchingLayers(LayerMask.GetMask("PlatForm", "Ladder"))) MoveVertical(); //if on ladder collider

        void MoveHorizontal() {
            if (_pis.MovementDirMag.x < 0)
            {
                rb.velocity = new Vector2(-_speed, rb.velocity.y);
                //transform.position = new Vector2(transform.position.x - _speed, transform.position.y);
            }
            else if (_pis.MovementDirMag.x > 0)
            {
                rb.velocity = new Vector2(_speed, rb.velocity.y);
                //transform.position = new Vector2(transform.position.x + _speed, transform.position.y);
            }
            else
            {
                rb.velocity = new Vector2(0, rb.velocity.y);
            }
        }

        void MoveVertical() {
            if (_pis.MovementDirMag.y < 0)
            {
                rb.AddForce(new Vector2(0, -10f));
                //transform.position = new Vector2(transform.position.x, transform.position.y - _speed);
            }
            else if (_pis.MovementDirMag.y > 0)
            {
                rb.AddForce(new Vector2(0, _jumpForce));
            }
        }
    }
}