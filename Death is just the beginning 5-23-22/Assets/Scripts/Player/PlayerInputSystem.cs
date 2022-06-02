using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

//started 5-26-22
[RequireComponent(typeof(PlayerCtrl))]
public class PlayerInputSystem : MonoBehaviour
{
    public PlayerInputActionMap PlayerInputActionMap;
    private bool _fire;
    public bool Fire { get => _fire; }
    private Vector2 _movementDirMag;
    public Vector2 MovementDirMag { get => _movementDirMag; }
    private Vector2 _mousePos;
    public Vector2 MousePos { get => _mousePos; }
    private void Awake() {
        PlayerInputActionMap = new PlayerInputActionMap();
    }

    private void OnEnable() {
        PlayerInputActionMap.Enable();
        PlayerInputActionMap.Player.Move.performed += MovePressed;
        PlayerInputActionMap.Player.Move.canceled += MoveUnpressed;
        PlayerInputActionMap.Player.Fire.performed += FirePressed;
        PlayerInputActionMap.Player.Fire.canceled += (ctx => { 
            _fire = false;
            //Debug.Log("<color=green>PlayerIS: </color> Fired Shot " + _fire);
        });
        PlayerInputActionMap.Player.MouseMoved.performed += MouseMoved;
        PlayerInputActionMap.Player.MouseMoved.canceled += MouseMoved;
    }

    private void OnDisable() {
        PlayerInputActionMap.Disable();
        PlayerInputActionMap.Player.Move.performed -= MovePressed;
        PlayerInputActionMap.Player.Move.canceled -= MoveUnpressed;
        PlayerInputActionMap.Player.Fire.performed -= FirePressed;
        PlayerInputActionMap.Player.MouseMoved.performed -= MouseMoved;
        PlayerInputActionMap.Player.MouseMoved.canceled -= MouseMoved;

    }

    private void MovePressed(InputAction.CallbackContext ctx) {
        //Debug.Log("<color=green>PlayerIS: </color> Move Worked");
        Vector2 dir = ctx.ReadValue<Vector2>();
        //Debug.Log("<color=green>PlayerIS: </color> mag(x,y) = (" + dir.x + "," + dir.y + ")");
        _movementDirMag = dir;
    }
    private void MoveUnpressed(InputAction.CallbackContext ctx) {
        //Debug.Log("<color=green>PlayerIS: </color> Move2 cancle Worked");
        Vector2 dir = ctx.ReadValue<Vector2>();
        //Debug.Log("<color=green>PlayerIS: </color> Move2 mag(x,y) = (" + dir.x + "," + dir.y + ")");
        _movementDirMag = dir;
    }

    private void FirePressed(InputAction.CallbackContext ctx) {
        _fire = true;
        //Debug.Log("<color=green>PlayerIS: </color> Fired Shot " + Fire );     
    }

    private void MouseMoved(InputAction.CallbackContext ctx) {
        _mousePos = ctx.ReadValue<Vector2>();
        //Debug.Log("<color=green>PlayerIS: </color> MouseMoved ( " + _mousePos.x + " , " + _mousePos.y + ")" );
    }
    void Start()
    {
    
    }

    private void Update() {

    }

}
