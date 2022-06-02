using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class NewInputSysCtrl : MonoBehaviour
{
    public PlayerInputActionMap PlayerInputActionMap;

    private void Awake() {
        PlayerInputActionMap = new PlayerInputActionMap();
    }

    private void OnEnable() {
        PlayerInputActionMap.Enable();
        PlayerInputActionMap.Player.Move.performed += Move;
    }

    private void OnDisable() {
        PlayerInputActionMap.Disable();
        PlayerInputActionMap.Player.Move.performed -= Move;
    }

    private void Move(InputAction.CallbackContext ctx) {
        //Debug.Log("<color=red> NIS: </color> Move Worked");
        Vector2 dir = ctx.ReadValue<Vector2>();
        //Debug.Log("<color=red> NIS: </color> mag(x,y) = (" + dir.x + "," + dir.y + ")");
    }
}
