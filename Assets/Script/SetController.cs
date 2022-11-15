using UnityEngine;

public class SetController : MonoBehaviour
{
    public bool setDesktopController;
    public GameObject xrController;
    public GameObject desktopController;

    private void Start()
    {
        if (setDesktopController)
        {
            desktopController.SetActive(true);
            xrController.SetActive(false);
        }
        else
        {
            xrController.SetActive(true);
            desktopController.SetActive(false);
        }
    }
}