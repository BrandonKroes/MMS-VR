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

            request.SetPayload(gameObject);
            AssetManager.Instance.SetAsset(request);
        }
    }
}