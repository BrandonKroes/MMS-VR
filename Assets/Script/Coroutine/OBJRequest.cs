using Script.Network;
using UnityEngine;

namespace Script.Coroutine
{
    public class OBJRequest : IAssetRequest
    {
        private readonly string _assetManagerRequestReference;
        private GameObject payload;
        private readonly string url;

        public OBJRequest(string url, string name)
        {
            _assetManagerRequestReference = name;
            this.url = url;
        }

        public OBJRequest(NewOBJRequest newObjRequest)
        {
            url = newObjRequest.requestURL;
            _assetManagerRequestReference = newObjRequest.id;
        }

        public string GetRequestReference()
        {
            return GetAssetManagerRequestReference();
        }

        public void ExecuteRequest(MonoBehaviour monoBehaviour)
        {
            // initialises the request
            var _ = monoBehaviour.StartCoroutine(OBJRequestCoroutine.GetRequest(this));

            // informing client to download the file too.
            var crq = new NewOBJRequest
            {
                id = _assetManagerRequestReference,
                requestURL = url
            };

            //NetworkServer.SendToAll(crq);
        }

        public IAssetRequest.RequestType GetRequestType()
        {
            return IAssetRequest.RequestType.OBJ;
        }

        public void SetPayload(GameObject gameObject)
        {
            payload = gameObject;
        }

        public GameObject GetPayload()
        {
            return payload;
        }

        public string GetURL()
        {
            return url;
        }

        public string GetAssetManagerRequestReference()
        {
            return _assetManagerRequestReference;
        }
    }
}