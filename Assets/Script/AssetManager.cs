using System.Collections.Generic;
using System.Runtime.InteropServices;
using Script.Coroutine;
using Script.Generics;
using UnityEngine;

namespace Script
{
    public class AssetManager : SingletonMonoBehaviour<AssetManager>
    {
        public GameObject sceneInstantiator;
        private Dictionary<string, IAssetRequest> _assets;
        private MonoBehaviour _monoBehaviour;
        private Dictionary<string, List<Furniture>> furnitures;

        //Button 
        private List<GameObject> _buttons;
        //SubMeny reference
        private  GameObject subMenu = Instantiate(Resources.Load("Content", typeof(GameObject))) as GameObject;



        private void Start()
        {
            _monoBehaviour = GetComponent<MonoBehaviour>();
            _assets = new Dictionary<string, IAssetRequest>();
            furnitures = new Dictionary<string, List<Furniture>>();
            _buttons = new List<GameObject>();


            for (int i = 0; i < 3; i++)
            {
                var button = Instantiate(Resources.Load("CategoryButton", typeof(GameObject))) as GameObject;
                if (button == null) continue;
                button.transform.SetParent(subMenu.transform);
                button.transform.localScale = Vector3.one;
                button.transform.localRotation = Quaternion.Euler(Vector3.zero);
                button.GetComponent<RectTransform>().anchoredPosition3D = new Vector3(i, i, 0);

            }
        }


        //Fill data for testing
        public void Fill() {
            Status s = Status.TOBEDOWNLOADNED;

            Furniture bed1 = new Furniture("IKEA-Alex_drawer_white-3D", "https", s);
            Furniture bed2 = new Furniture("Rashid_bed", "https", s);

            Furniture drawer1 = new Furniture("Setki_Drawer", "https", s);
            Furniture drawer2 = new Furniture("Setki_Drawer", "https", s);

            Furniture  door1= new Furniture("Brandon_door", "https", s);
            Furniture  door2= new Furniture("Brandon_door", "https", s);

            List<Furniture> beds = new List<Furniture>()
            {
               bed1,
               bed2
            };

            List<Furniture> drawers = new List<Furniture>()
            {
               drawer1,
               drawer2
            };

            List<Furniture> doors = new List<Furniture>()
            {
               door1,
               door2
            };

            var furnitures = new Dictionary<string, List<Furniture>>(){
                {"Bed",beds},
                 {"Bed",drawers},
                  {"Bed",doors}
             };
        }

        //To load objects from button UI
        public void LoadObject(Furniture item)
        {
            StartCoroutine(OBJRequestCoroutine.GetRequest(
                new OBJRequest(
                    item.getUrl(), 
                    item.getSlugName()
                    )));
          
        }


        // TODO: Remove example code
        public void GetDrawer()
        {
            StartCoroutine(OBJRequestCoroutine.GetRequest(
                new OBJRequest("https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.obj",
                    "IKEA-Alex_drawer_white-3D")));
        }
        
        public void GetBed()
        {
            var x = new OBJMTLRequest("https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.obj",
                "https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.mtl",
                "IKEA-Alex_drawer_white-3DMTL");
            x.ExecuteRequest(_monoBehaviour);
        }


        private void GetAsset(IAssetRequest request)
        {
            request.ExecuteRequest(_monoBehaviour);
        }

        public void SetAsset(IAssetRequest request)
        {
            if (!_assets.ContainsKey(request.GetRequestReference()))
            {
                _assets.Add(request.GetRequestReference(), request);

                _assets[request.GetRequestReference()].GetPayload().transform.SetParent(sceneInstantiator.transform);
                _assets[request.GetRequestReference()].GetPayload().transform.localScale =
                    new Vector3(0.01f, 0.01f, 0.01f);
                _assets[request.GetRequestReference()].GetPayload().transform.position = new Vector3(0f, 10f, 0f);

                _assets[request.GetRequestReference()].GetPayload().SetActive(true);
            }

            print("instantiated");
        }
    }
}