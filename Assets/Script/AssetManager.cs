using System.Collections.Generic;
using Script.Coroutine;
using Script.Generics;
using UnityEngine;

namespace Script
{
    public class AssetManager : SingletonMonoBehaviour<AssetManager>
    {
        private GameObject sceneInstantiator;
        private Dictionary<string, IAssetRequest> _assets;
        private MonoBehaviour _monoBehaviour;
        private List<string> _outstanding_request;

        private void Start()
        {
            _monoBehaviour = GetComponent<MonoBehaviour>();
            _assets = new Dictionary<string, IAssetRequest>();
            _outstanding_request = new List<string>();
        }


        // TODO: Remove example code
        public void GetDrawer()
        {
            GetAsset(new OBJRequest("https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.obj",
                "IKEA-Alex_drawer_white-3D"));
        }

        // TODO: Remove example code
        public void GetBed()
        {
            GetAsset(new OBJMTLRequest("https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.obj",
                "https://brandonkroes.com/MMS/drawer/IKEA-Alex_drawer_white-3D.mtl",
                "IKEA-Alex_drawer_white-3DMTL"));
        }

        public void GetAsset(IAssetRequest request)
        {
            if (_outstanding_request.Contains(request.GetRequestReference())) return;
            _outstanding_request.Add(request.GetRequestReference());
            request.ExecuteRequest(_monoBehaviour);
        }

        public void SetAsset(IAssetRequest request)
        {
            if (_assets.ContainsKey(request.GetRequestReference())) return;
            _assets.Add(request.GetRequestReference(), request);

            _assets[request.GetRequestReference()].GetPayload().transform.SetParent(sceneInstantiator.transform);
            _assets[request.GetRequestReference()].GetPayload().transform.localScale =
                new Vector3(0.01f, 0.01f, 0.01f);
            _assets[request.GetRequestReference()].GetPayload().transform.position = new Vector3(0f, 10f, 0f);

            _assets[request.GetRequestReference()].GetPayload().SetActive(true);
        }
    }
}