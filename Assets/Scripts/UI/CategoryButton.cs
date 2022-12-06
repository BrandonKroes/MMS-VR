using Script;
using Script.Coroutine;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class CategoryButton : MonoBehaviour
    {
        private Button _button;

        private Furniture _furniture;

        // Start is called before the first frame update
        void Start()
        {
            _button = GetComponent<Button>();
            _button.onClick.AddListener(click);
        }


        void click()
        {
            FurnitureManager.Instance.ChangeCategory(name);
        }

        // Update is called once per frame
        void Update()
        {
        }
    }
}