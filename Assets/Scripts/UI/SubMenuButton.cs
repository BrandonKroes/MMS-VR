using Script;
using Script.Coroutine;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class SubMenuButton : MonoBehaviour
    {
        private Button _button;

        private Furniture _furniture;

        // Start is called before the first frame update
        void Start()
        {
            _furniture = FurnitureManager.Instance.GetFurnitureBySlug(name);
            _button = GetComponent<Button>();
            _button.onClick.AddListener(click);
            ChangeButtonColorNormal(Color.white);
        }


        void click()
        {
            print("button pressed");
            if (_furniture.downloadStatus == Status.TOBEDOWNLOADNED)
            {
                _furniture.downloadStatus = Status.DOWNLOADING;
                ChangeButtonColorNormal(Color.blue);
            }
            
            /*

            switch (_furniture.downloadStatus)
            {
                case Status.DOWNLOADED:
                    IsReady();
                    break;
                case Status.TOBEDOWNLOADNED:
                    _furniture.downloadStatus = Status.DOWNLOADING;
                    break;
                default:
                    break;
            }

            CheckDownloadStatus(); */
        }

        private void CheckDownloadStatus()
        {
            if (AssetManager.Instance.IsAssetGathered(_furniture.getSlugName()))
            {
                ChangeButtonColorNormal(Color.green);
                _furniture.downloadStatus = Status.DOWNLOADED;
            }
            else if (AssetManager.Instance.IsAssetBeingGathered(_furniture.getSlugName()))
            {
                _furniture.downloadStatus = Status.DOWNLOADING;
                ChangeButtonColorNormal(Color.blue);
            }
            else
            {
                _furniture.downloadStatus = Status.TOBEDOWNLOADNED;
                ChangeButtonColorNormal(Color.gray);
            }
        }


        private void IsReady()
        {
            if (AssetManager.Instance.IsAssetGathered(_furniture.getSlugName()))
            {
                if (_furniture.downloadStatus == Status.DOWNLOADING)
                {
                    _furniture.downloadStatus = Status.DOWNLOADED;
                }
                else
                {
                    InstantiateFurniture();
                }
            }
        }

        private void InstantiateFurniture()
        {
            Instantiate(AssetManager.Instance.InstantiateByRequestReference(_furniture.getSlugName()));
        }

        private void ChangeButtonColorNormal(Color c)
        {
            ColorBlock colorBlock = _button.colors;
            colorBlock.disabledColor = c;
            colorBlock.highlightedColor = c;
            colorBlock.pressedColor = c;
            colorBlock.selectedColor = c;
            colorBlock.normalColor = c;
            _button.colors = colorBlock;
        }

        // Update is called once per frame
        void Update()
        {
            if (_furniture.downloadStatus != Status.TOBEDOWNLOADNED)
            {
                if (_furniture.downloadStatus == Status.DOWNLOADING)
                {
                    if (!AssetManager.Instance.IsAssetBeingGathered(_furniture.getSlugName()))
                    {
                        if (AssetManager.Instance.IsAssetGathered(_furniture.getSlugName()))
                        {
                            IsReady();
                        }
                        else
                        {
                            AssetManager.Instance.GetAsset(
                                new OBJRequest(_furniture.getUrl(), _furniture.getSlugName()));
                        }
                    }
                }

                CheckDownloadStatus();
            }
        }
    }
}