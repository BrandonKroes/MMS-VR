using System.Collections;
using System.IO;
using System.Text;
using OBJImport;
using Script.Coroutine.Prefab;
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
            ;
            gameObject.AddComponent<DefaultFurniture>();

            request.SetPayload(gameObject);
            AssetManager.Instance.SetAsset(request);
        }
    }
}