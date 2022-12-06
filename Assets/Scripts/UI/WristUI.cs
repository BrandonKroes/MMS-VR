using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

public class WristUI : MonoBehaviour
{
    public InputActionAsset inputActions;
    private InputAction _menu;
    public GameObject LeftRay;
    private XRRayInteractor xrRayInteractor;

    private Canvas _wristUICanvas;

    private void Start()
    {
        xrRayInteractor = LeftRay.GetComponent<XRRayInteractor>();
        _wristUICanvas = GetComponent<Canvas>();
        _menu = inputActions.FindActionMap("XRI LeftHand").FindAction("Menu Toggle");
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
        xrRayInteractor.enabled = !_wristUICanvas.enabled;
    }
}