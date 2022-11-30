using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GrabScaleAdjust : MonoBehaviour
{
    public Transform left_controller;
    public Transform right_controller;
    public float scaleMultiplier = 0.5f;
    public bool isBeingScaled = false;
    public bool controllersFound = false;

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        isBeingScaled = CheckIfBeingScaled();

        if (!isBeingScaled) return;

        ScaleObject();
    }

    public void SetControllers(Transform l, Transform r)
    {
        left_controller = l;
        right_controller = r;
    }

    bool CheckIfBeingScaled()
    {
        // TODO: Implement function
        return false;
    }

    void ScaleObject()
    {
        float distance = Vector3.Distance(this.left_controller.position, this.right_controller.position);
        Vector3 scale_adjust = (new Vector3(distance, distance, distance) * this.scaleMultiplier);
        Vector3 current_scale = this.transform.localScale;
        this.transform.localScale = new Vector3(current_scale.x * scale_adjust.x,
            current_scale.y * scale_adjust.y, current_scale.z * scale_adjust.z);
    }
}