using UnityEngine;

  public class WaterTrigger : MonoBehaviour
  {
      public InstructionManager instructionManager;
      public bool allowNameFallback = true;

      private bool completed = false;

      private void OnTriggerEnter(Collider other)
      {
          TryCompleteWaterStep(other);
      }

      private void OnTriggerStay(Collider other)
      {
          TryCompleteWaterStep(other);
      }

      private void TryCompleteWaterStep(Collider other)
      {
          if (completed)
              return;

          if (instructionManager == null || !instructionManager.IsCurrentStep(3))
              return;

          if (!WaterHandState.HasWetHand)
              return;

          if (!HandInteractionDetector.IsHand(other, allowNameFallback))
              return;

          completed = true;
          instructionManager.CompleteWaterStep();
          WaterHandState.Clear();
      }
  }
