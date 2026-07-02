using UnityEngine;

  public class SoapTrigger : MonoBehaviour
  {
      public InstructionManager instructionManager;

      [Header("Soap")]
      public GameObject soapObject;

      [Header("Grab Requirement")]
      public bool requireSoapWasGrabbed = true;
      public float grabbedMovementThreshold = 0.15f;

      private Vector3 soapStartPosition;
      private bool soapWasGrabbed = false;
      private bool completed = false;
      private Collider triggerCollider;

      void Start()
      {
          triggerCollider = GetComponent<Collider>();

          if (soapObject != null)
              soapStartPosition = soapObject.transform.position;
      }

      void Update()
      {
          if (soapObject == null)
              return;

          if (!soapWasGrabbed)
          {
              float distanceFromStart = Vector3.Distance(soapStartPosition, soapObject.transform.position);

              if (distanceFromStart >= grabbedMovementThreshold)
                  soapWasGrabbed = true;
          }

          TryCompleteSoapStepByOverlap();
      }

      private void OnTriggerEnter(Collider other)
      {
          TryCompleteSoapStep(other);
      }

      private void OnTriggerStay(Collider other)
      {
          TryCompleteSoapStep(other);
      }

      private void TryCompleteSoapStep(Collider other)
      {
          if (completed)
              return;

          if (instructionManager == null || !instructionManager.IsCurrentStep(2))
              return;

          if (!IsSoap(other))
              return;

          if (requireSoapWasGrabbed && !soapWasGrabbed)
              return;

          completed = true;
          instructionManager.CompleteSoapStep();
      }

      private void TryCompleteSoapStepByOverlap()
      {
          if (completed)
              return;

          if (instructionManager == null || !instructionManager.IsCurrentStep(2))
              return;

          if (soapObject == null || triggerCollider == null)
              return;

          if (requireSoapWasGrabbed && !soapWasGrabbed)
              return;

          if (SoapTouchesTrigger())
          {
              completed = true;
              instructionManager.CompleteSoapStep();
          }
      }

      private bool SoapTouchesTrigger()
      {
          foreach (Collider soapCollider in soapObject.GetComponentsInChildren<Collider>())
          {
              if (soapCollider == null || !soapCollider.enabled)
                  continue;

              if (BoundsTouchTrigger(soapCollider.bounds))
                  return true;
          }

          foreach (Renderer soapRenderer in soapObject.GetComponentsInChildren<Renderer>())
          {
              if (soapRenderer == null || !soapRenderer.enabled)
                  continue;

              if (BoundsTouchTrigger(soapRenderer.bounds))
                  return true;
          }

          return Vector3.Distance(soapObject.transform.position, triggerCollider.ClosestPoint(soapObject.transform.position)) <= 0.08f;
      }

      private bool BoundsTouchTrigger(Bounds soapBounds)
      {
          if (triggerCollider.bounds.Intersects(soapBounds))
              return true;

          Vector3 closestPoint = triggerCollider.ClosestPoint(soapBounds.center);
          return Vector3.Distance(soapBounds.center, closestPoint) <= 0.08f;
      }

      private bool IsSoap(Collider other)
      {
          if (soapObject == null || other == null)
              return false;

          if (other.attachedRigidbody != null && other.attachedRigidbody.gameObject == soapObject)
              return true;

          Transform current = other.transform;

          while (current != null)
          {
              if (current.gameObject == soapObject)
                  return true;

              current = current.parent;
          }

          return false;
      }

      public void MarkSoapGrabbed()
      {
          soapWasGrabbed = true;
      }
  }
