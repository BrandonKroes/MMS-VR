using System.IO;
using Mirror;
using Script.Network;
using UnityEngine;

namespace Script.Coroutine
{
    // ReSharper disable once InconsistentNaming
    public class OBJMTLRequest : IAssetRequest
    {
        private readonly string _assetManagerRequestReference;
        public readonly string mtlUrl;
        public readonly string objUrl;
        private GameObject _payload;

        // ReSharper disable once InconsistentNaming
        public MemoryStream memoryStreamMTL;

        // ReSharper disable once InconsistentNaming
        public MemoryStream memoryStreamOBJ;

        public OBJMTLRequest(string objUrl, string mtlUrl, string name)
        {
            this.objUrl = objUrl;
            this.mtlUrl = mtlUrl;
            _assetManagerRequestReference = name;
        }

        public OBJMTLRequest(NewOBJMTLRequest newObjmtlRequest)
        {
            objUrl = newObjmtlRequest.requestURLOBJ;
            mtlUrl = newObjmtlRequest.requestURLOBJMTL;
            _assetManagerRequestReference = newObjmtlRequest.id;
        }

        public void SetPayload(GameObject gameObject)
        {
            _payload = gameObject;
        }

        public GameObject GetPayload()
        {
            return _payload;
        }

        public string GetRequestReference()
        {
            return GetAssetManagerRequestReference();
        }

        // ReSharper disable Unity.PerformanceAnalysis
        public void ExecuteRequest(MonoBehaviour monoBehaviour)
        {
            var _ = monoBehaviour.StartCoroutine(OBJMTLCoroutine.GetRequest(this));

            // informing client to download the file too.
            var crq = new NewOBJMTLRequest
            {
                id = _assetManagerRequestReference,
                requestURLOBJ = objUrl,
                requestURLOBJMTL = mtlUrl
            };
            // Only servers should tell others to download!
            if (NetworkServer.active)
            {
                NetworkServer.SendToAll(crq);
            }
        }

        public IAssetRequest.RequestType GetRequestType()
        {
            return IAssetRequest.RequestType.MTL;
        }

        public string GetAssetManagerRequestReference()
        {
            return _assetManagerRequestReference;
        }
    }
}