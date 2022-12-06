using System.Collections.Generic;
using Script.Coroutine;
using Script.Generics;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Script
{
    public class AssetManager : SingletonMonoBehaviour<AssetManager>
    {
        public GameObject sceneInstantiator;
        private Dictionary<string, IAssetRequest> _assets;
        private MonoBehaviour _monoBehaviour;
        private List<string> _outstanding_requests;


        private void Start()
        {
            _monoBehaviour = GetComponent<MonoBehaviour>();
            _assets = new Dictionary<string, IAssetRequest>();
            _outstanding_requests = new List<string>();
        }

        public void GetAsset(IAssetRequest request)
        {
            _outstanding_requests.Add(request.GetRequestReference());
            request.ExecuteRequest(_monoBehaviour);
        }

        public void SetAsset(IAssetRequest request)
        {
            if (!_assets.ContainsKey(request.GetRequestReference()))
            {
                _outstanding_requests.Remove(request.GetRequestReference());

                _assets.Add(request.GetRequestReference(), request);

                _assets[request.GetRequestReference()].GetPayload().transform.SetParent(sceneInstantiator.transform);
                _assets[request.GetRequestReference()].GetPayload().transform.position = new Vector3(0f, 10f, 0f);

                _assets[request.GetRequestReference()].GetPayload().SetActive(true);
                _assets[request.GetRequestReference()].GetPayload().AddComponent<XRGrabInteractable>();
            }
        }

        public GameObject InstantiateByRequestReference(string rqref)
        {
            return _assets[rqref].GetPayload();
        }

        public bool IsAssetGathered(string slug)
        {
            if (_assets.Count > 0)
            {
                foreach (var item in this._assets)
                {
                    if (item.Key == slug)
                    {
                        return true;
                    }
                }
            }

            return false;
        }

        public bool IsAssetBeingGathered(string slug)
        {
            if (_outstanding_requests.Count > 0)
            {
                foreach (var item in this._outstanding_requests)
                {
                    if (item == slug)
                    {
                        return true;
                    }
                }
            }

            return false;
        }
    }
}