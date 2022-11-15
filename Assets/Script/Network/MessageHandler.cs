using Mirror;
using Script.Coroutine;
using UnityEngine;

namespace Script.Network
{
    public class MessageHandler : MonoBehaviour
    {
        private MonoBehaviour _monoBehaviour;

        private void Start()
        {
            _monoBehaviour = GetComponent<MonoBehaviour>();
        }

        public void RegisterMessages()
        {
            if (!NetworkClient.active) return;
            NetworkClient.RegisterHandler<NewOBJRequest>(MessageOBJRequest, false);
            NetworkClient.RegisterHandler<UpdateAssetPosition>(UpdateAssetPosition, false);
            NetworkClient.RegisterHandler<NewOBJMTLRequest>(MessageNewOBJTMLRequest, false);
        }


        private void UpdateAssetPosition(UpdateAssetPosition updateAssetPosition)
        {
            var obj = GameObject.Find(updateAssetPosition.id);
            obj.transform.position = updateAssetPosition.transform.position;
            obj.transform.localScale = updateAssetPosition.transform.localScale;
        }

        private void MessageNewOBJTMLRequest(NewOBJMTLRequest newObjmtlRequest)
        {
            new OBJMTLRequest(newObjmtlRequest).ExecuteRequest(_monoBehaviour);
        }

        private void MessageOBJRequest(NewOBJRequest newObjRequest)
        {
            new OBJRequest(newObjRequest).ExecuteRequest(_monoBehaviour);
        }
    }
}