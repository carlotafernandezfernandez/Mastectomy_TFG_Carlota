using UnityEngine;

  public class WaterContactTrigger : MonoBehaviour
  {
      public FaucetWaterController faucet;
      public bool allowNameFallback = true;

      private void OnTriggerEnter(Collider other)
      {
          TryMarkHandWet(other);
      }

      private void OnTriggerStay(Collider other)
      {
          TryMarkHandWet(other);
      }

      private void TryMarkHandWet(Collider other)
      {
          if (faucet != null && !faucet.IsOpen())
              return;

          if (!HandInteractionDetector.IsHand(other, allowNameFallback))
              return;

          WaterHandState.MarkHandWet();
      }
  }

