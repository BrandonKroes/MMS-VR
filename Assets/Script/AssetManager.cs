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


        private void Start()
        {
            _monoBehaviour = GetComponent<MonoBehaviour>();
            _assets = new Dictionary<string, IAssetRequest>();


            
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