using Mirror;
using UnityEngine;

namespace Script.Network
{
    public struct NewOBJRequest : NetworkMessage
    {
        public string id;
        public string requestURL;

        public string print()
        {
            return id + " " + requestURL;
        }
    }

    public struct NewOBJMTLRequest : NetworkMessage
    {
        public string id;
        public string requestURLOBJ;
        public string requestURLOBJMTL;
    }

    public struct UpdateAssetPosition : NetworkMessage
    {
        public UpdateAssetPosition(string id, Transform transform)
        {
            this.id = id;
            this.position = transform.position;
            this.rotation = transform.rotation;
            this.scale = transform.localScale;
        }
        public string id;
        public Vector3 position;
        public Vector3 scale;
        public Quaternion rotation;
    }
}