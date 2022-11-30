using System.Collections.Generic;
using Script.Coroutine;
using Script.Generics;
using UnityEngine;

namespace Script
{
    public class PersistenceManager : SingletonMonoBehaviour<PersistenceManager>
    {
        public enum NetworkType
        {
            CLIENT,
            SERVER,
            UNKNOWN
        }

        public NetworkType networkType;

        private void Start()
        {
            this.networkType = NetworkType.UNKNOWN;
        }

        public void setNetworkType(NetworkType n)
        {
            this.networkType = n;
            print("network type set");
        }
    }
}