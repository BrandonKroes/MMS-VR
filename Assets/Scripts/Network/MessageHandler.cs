using System.Collections.Generic;
using Mirror;
using Script.Coroutine;
using Script.Network;
using UnityEngine;

namespace Network
{
    public class MessageHandler : MonoBehaviour
    {
        private MonoBehaviour _monoBehaviour;

        private List<UpdateAssetPosition> _updateAssetPositionsQueue;

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
            if (GameObject.Find(updateAssetPosition.id) != null)
            {
                GameObject obj = GameObject.Find(updateAssetPosition.id);
                obj.transform.position = updateAssetPosition.position;
                obj.transform.rotation = updateAssetPosition.rotation;
                obj.transform.localScale = updateAssetPosition.scale;
                Destroy(obj.GetComponent<Rigidbody>());
            }
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