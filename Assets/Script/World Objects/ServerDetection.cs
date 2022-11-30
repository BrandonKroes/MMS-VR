using UnityEngine;

namespace Script.World_Objects
{
    public class ServerDetection : MonoBehaviour
    {
        private MeshRenderer m;

        // Start is called before the first frame update
        void Start()
        {
            m = GetComponent<MeshRenderer>();
        }

        // Update is called once per frame
        void Update()
        {
            if (PersistenceManager.Instance.networkType == PersistenceManager.NetworkType.SERVER)
            {
                m.material.color = Color.green;
            }
            else
            {
                m.material.color = Color.white;
            }
        }

        public void OnCollisionEnter(Collision col)
        {
            PersistenceManager.Instance.setNetworkType(PersistenceManager.NetworkType.SERVER);
        }
    }
}