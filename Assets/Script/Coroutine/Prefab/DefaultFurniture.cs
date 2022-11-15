using UnityEngine;

public class DefaultFurniture : MonoBehaviour
{
    // Start is called before the first frame update
    private void Start()
    {
    }

    // Update is called once per frame
    private void Update()
    {
        transform.rotation = new Quaternion(0f, 0f, 0f, 0f);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.CompareTag("Floor")) Destroy(GetComponent<Rigidbody>());
    }
}