using System;
using System.Collections.Generic;
using System.Linq;
using Mirror;
using Script.Network;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

namespace Coroutine.Prefab
{
    public class DefaultFurniture : MonoBehaviour
    {
        private List<GameObject> Children;
        private Vector3 _referenceScale;

        private Vector3 _superSmallScale;
        private bool _previouslySelected;
        private XRGrabInteractable _xrGrabInteractable;

        private void Start()
        {
            _referenceScale = transform.localScale;
            _superSmallScale = new Vector3(_referenceScale.x * 0.1f, _referenceScale.y * 0.1f,
                _referenceScale.z * 0.1f);
            _xrGrabInteractable = GetComponent<XRGrabInteractable>();
            _previouslySelected = false;
        }

        private void Update()
        {
            transform.rotation = new Quaternion(0f, 0f, 0f, 0f);

            if (_xrGrabInteractable.isSelected)
            {
                transform.localScale = _superSmallScale;
                _previouslySelected = true;
            }
            else if (_previouslySelected)
            {
                transform.localScale = _referenceScale;
                _previouslySelected = false;
            }

            if (transform.hasChanged)
            {
                var uap = new UpdateAssetPosition(name, transform);
                NetworkServer.SendToAll(uap);
                transform.hasChanged = false;
            }
        }
    }
}