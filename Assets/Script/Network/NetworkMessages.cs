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
        public string id;
        public Transform transform;
    }
}