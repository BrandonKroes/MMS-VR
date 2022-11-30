using UnityEngine;
using UnityEngine.SceneManagement;

namespace Script.World_Objects
{
    public class NextScene : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
        }

        void nextScene()
        {
            int nextSceneIndex = SceneManager.GetActiveScene().buildIndex + 1;
            if (SceneManager.sceneCount > nextSceneIndex)
            {
                SceneManager.LoadScene(nextSceneIndex);
            }
        }

        // Update is called once per frame
        void Update()
        {
        }

        public void OnCollisionEnter(Collision col)
        {
            if (PersistenceManager.Instance.networkType != PersistenceManager.NetworkType.UNKNOWN)
            {
                nextScene();
            }
        }
    }
}