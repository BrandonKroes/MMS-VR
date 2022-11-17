using System.Collections.Generic;
using UnityEngine;

namespace Script.Coroutine.Prefab
{
    public class DefaultFurniture : MonoBehaviour
    {
        private List<GameObject> Children;

        // Start is called before the first frame update
        private void Start()
        {
            List<GameObject> Children = new List<GameObject>();
            foreach (Transform child in transform)
            {
                Children.Add(child.gameObject);
            }

            foreach (var child in Children)
            {
                child.AddComponent<MeshCollider>();
                child.GetComponent<MeshCollider>().convex = true;
                child.GetComponent<MeshCollider>().sharedMesh = child.GetComponent<MeshFilter>().sharedMesh;
            }
            
            gameObject.AddComponent<Rigidbody>();
        }

        // Update is called once per frame
        private void Update()
        {
            transform.rotation = new Quaternion(0f, 0f, 0f, 0f);
        }
    }
}