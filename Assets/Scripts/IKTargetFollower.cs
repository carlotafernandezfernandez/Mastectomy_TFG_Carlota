  using UnityEngine;

  public class IKTargetFollower : MonoBehaviour
  {
      public Transform targetToFollow;
      public Vector3 positionOffset;
      public Vector3 rotationOffset;

      void LateUpdate()
      {
          if (targetToFollow == null)
              return;

          transform.position = targetToFollow.TransformPoint(positionOffset);
          transform.rotation = targetToFollow.rotation * Quaternion.Euler(rotationOffset);
      }
  }
