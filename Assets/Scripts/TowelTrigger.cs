using UnityEngine;

  public class TowelTrigger : MonoBehaviour
  {
      public InstructionManager instructionManager;

      [Header("Towel")]
      public GameObject towelObject;

      [Header("Grab Requirement")]
      public bool requireTowelWasGrabbed = true;
      public float grabbedMovementThreshold = 0.15f;

      private Vector3 towelStartPosition;
      private bool towelWasGrabbed = false;
      private bool completed = false;

      void Start()
      {
          if (towelObject != null)
              towelStartPosition = towelObject.transform.position;
      }

      void Update()
      {
          if (towelWasGrabbed || towelObject == null)
              return;

          float distanceFromStart = Vector3.Distance(towelStartPosition, towelObject.transform.position);

          if (distanceFromStart >= grabbedMovementThreshold)
              towelWasGrabbed = true;
      }

      private void OnTriggerEnter(Collider other)
      {
          TryCompleteTowelStep(other);
      }

      private void OnTriggerStay(Collider other)
      {
          TryCompleteTowelStep(other);
      }

      private void TryCompleteTowelStep(Collider other)
      {
          if (completed)
              return;

          if (instructionManager == null || !instructionManager.IsCurrentStep(4))
              return;

          if (!IsTowel(other))
              return;

          if (requireTowelWasGrabbed && !towelWasGrabbed)
              return;

          completed = true;
          instructionManager.CompleteTowelStep();
      }

      private bool IsTowel(Collider other)
      {
          if (towelObject == null || other == null)
              return false;

          Transform current = other.transform;

          while (current != null)
          {
              if (current.gameObject == towelObject)
                  return true;

              current = current.parent;
          }

          return false;
      }

      public void MarkTowelGrabbed()
      {
          towelWasGrabbed = true;
      }
  }
