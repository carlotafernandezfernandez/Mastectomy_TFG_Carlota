using UnityEngine;

  public class FaucetWaterController : MonoBehaviour
  {
      public Transform faucetHandle;
      public ParticleSystem waterParticles;

      public Vector3 closedRotation = Vector3.zero;
      public Vector3 openRotation = new Vector3(35f, 0f, 0f);

      public bool allowNameFallback = true;

      private bool isOpen = false;

      void Start()
      {
          SetWaterActive(false);

          if (faucetHandle != null)
              faucetHandle.localEulerAngles = closedRotation;
      }

	      private void OnTriggerEnter(Collider other)
	      {
	          TryOpenFaucet(other);
	      }

	      private void OnTriggerStay(Collider other)
	      {
	          TryOpenFaucet(other);
	      }

	      private void TryOpenFaucet(Collider other)
	      {
	          if (!HandInteractionDetector.IsHand(other, allowNameFallback))
	              return;

	          OpenFaucet();
	      }

      public void OpenFaucet()
      {
          if (isOpen)
              return;

          isOpen = true;

          if (faucetHandle != null)
              faucetHandle.localEulerAngles = openRotation;

          SetWaterActive(true);
      }

	      private void SetWaterActive(bool active)
	      {
	          if (waterParticles == null)
	              return;

	          if (active)
	          {
	              waterParticles.gameObject.SetActive(true);
	              waterParticles.Play();
	          }
	          else
	          {
	              waterParticles.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
	              waterParticles.gameObject.SetActive(false);
	          }
	      }

      public bool IsOpen()
      {
          return isOpen;
      }
  }
