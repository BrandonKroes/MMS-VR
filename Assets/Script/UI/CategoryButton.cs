using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CategoryButton : MonoBehaviour
{
    private Button _button;
    // Start is called before the first frame update
    void Start()
    {
        _button = GetComponent<Button>();
        _button.onClick.AddListener(click);
    }

    void click()
    {
        print(this.name);
        //FurnitureManager.Instance.HideMenuItemsExcept(this.name);
    }

    // Update is called once per frame
    void Update()
    {
        _button.onClick.Invoke();

    }
}
