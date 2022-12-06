using System.Collections;
using System.IO;
using System.Linq;
using System.Text;
using Coroutine.Prefab;
using OBJImport;
using Script;
using Script.Coroutine;
using UnityEngine;
using UnityEngine.Networking;

namespace Coroutine
{
    public class OBJRequestCoroutine : MonoBehaviour
    {
        public static IEnumerator GetRequest(OBJRequest request)
        {
            using var webRequest = UnityWebRequest.Get(request.GetURL());

            yield return webRequest.SendWebRequest();

            if (webRequest.result != UnityWebRequest.Result.Success) yield break;

            var gameObject = new OBJLoader().Load(
                new MemoryStream(Encoding.UTF8.GetBytes(webRequest.downloadHandler.text)));
            gameObject.name = request.GetAssetManagerRequestReference();
            gameObject.AddComponent<DefaultFurniture>();
            gameObject.AddComponent<BoxCollider>();
            MeshFilter[] childFilters = gameObject.GetComponentsInChildren<MeshFilter>();
            childFilters =
                childFilters.Skip(1)
                    .ToArray(); // the first element is always a self reference, this causes WEIRD behaviour.

            if (childFilters.Length != 0)
            {
                Bounds bounds = new Bounds();
                foreach (MeshFilter filter in childFilters) bounds.Encapsulate(filter.sharedMesh.bounds);
                gameObject.GetComponent<BoxCollider>().center = bounds.center;
                gameObject.GetComponent<BoxCollider>().size = bounds.size;
            }

            gameObject.transform.localScale = new Vector3(0.001f, 0.001f, 0.001f);


            request.SetPayload(gameObject);
            AssetManager.Instance.SetAsset(request);
        }
    }
}