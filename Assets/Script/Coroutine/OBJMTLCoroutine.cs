using System.Collections;
using System.IO;
using System.Text;
using OBJImport;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Networking;

namespace Script.Coroutine
{
    // ReSharper disable once InconsistentNaming
    public class OBJMTLCoroutine : MonoBehaviour
    {
        public static IEnumerator GetRequest(OBJMTLRequest request)
        {
            using var objRequest = UnityWebRequest.Get(request.objUrl);
            // Request and wait for the desired page.

            yield return objRequest.SendWebRequest();

            if (objRequest.result != UnityWebRequest.Result.Success) yield break;
            request.memoryStreamOBJ = new MemoryStream(Encoding.UTF8.GetBytes(objRequest.downloadHandler.text));

            using var mtlRequest = UnityWebRequest.Get(request.objUrl);
            // Request and wait for the desired page.

            yield return mtlRequest.SendWebRequest();

            if (mtlRequest.result != UnityWebRequest.Result.Success) yield break;
            request.memoryStreamMTL = new MemoryStream(Encoding.UTF8.GetBytes(mtlRequest.downloadHandler.text));

            var gameObject = new OBJLoader().Load(request.memoryStreamOBJ, request.memoryStreamMTL);
            gameObject.name = request.GetAssetManagerRequestReference();

            gameObject.transform.AddComponent<Rigidbody>();
            gameObject.transform.AddComponent<BoxCollider>();

            gameObject.transform.AddComponent<MeshFilter>();
            gameObject.transform.AddComponent<MeshRenderer>();

            var boxCollider = gameObject.transform.GetComponent<BoxCollider>();
            boxCollider.center = new Vector3(0f, 0f, 0f);
            boxCollider.size = new Vector3(100f, 55f, 100f);

            var rigidbody = gameObject.transform.GetComponent<Rigidbody>();

            gameObject.AddComponent<DefaultFurniture>();

            request.SetPayload(gameObject);
            //AssetManager.Instance.SetAsset(request);
        }
    }
}