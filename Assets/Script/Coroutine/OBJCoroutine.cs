using System.Collections;
using System.IO;
using System.Text;
using OBJImport;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;

namespace Script.Coroutine
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

            gameObject.transform.AddComponent<Rigidbody>();
            gameObject.transform.AddComponent<BoxCollider>();

            gameObject.transform.AddComponent<MeshFilter>();
            gameObject.transform.AddComponent<MeshRenderer>();

            var boxCollider = gameObject.transform.GetComponent<BoxCollider>();
            boxCollider.center = new Vector3(0f, 0f, 0f);
            boxCollider.size = new Vector3(100f, 55f, 100f);


            gameObject.AddComponent<DefaultFurniture>();

            print("executed");
            request.SetPayload(gameObject);
            AssetManager.Instance.SetAsset(request);
        }
    }
}