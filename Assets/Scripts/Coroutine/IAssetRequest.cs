using UnityEngine;

namespace Script.Coroutine
{
    public interface IAssetRequest
    {
        public enum RequestType
        {
            OBJ,
            MTL
        }

        RequestType GetRequestType();
        void SetPayload(GameObject gameObject);
        GameObject GetPayload();
        string GetRequestReference();
        void ExecuteRequest(MonoBehaviour monoBehaviour);
    }
}