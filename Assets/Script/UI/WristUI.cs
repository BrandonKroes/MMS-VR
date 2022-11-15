using UnityEngine;
using UnityEngine.InputSystem;

public class WristUI : MonoBehaviour
{
    public InputActionAsset inputActions;
    private InputAction _menu;

    private Canvas _wristUICanvas;

    private void Start()
    {
        _wristUICanvas = GetComponent<Canvas>();
        _menu = inputActions.FindActionMap("XRI LeftHand").FindAction("Menu");
        _menu.Enable();
        _menu.performed += ToggleMenu;
        _wristUICanvas.enabled = false;
    }

    private void OnDestroy()
    {
        _menu.performed -= ToggleMenu;
    }

    public void ToggleMenu(InputAction.CallbackContext context)
    {
        _wristUICanvas.enabled = !_wristUICanvas.enabled;
    }
}