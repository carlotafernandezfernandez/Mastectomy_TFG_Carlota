using UnityEngine;

public class MirrorStepTrigger : MonoBehaviour
{
    public InstructionManager instructionManager;

    private bool completed = false;
    private bool playerWasInside = false;

    private void OnTriggerEnter(Collider other)
    {
        TryCompleteWithPlayer(other);
    }

    private void OnTriggerStay(Collider other)
    {
        TryCompleteWithPlayer(other);
    }

    private void TryCompleteWithPlayer(Collider other)
    {
        if (!IsPlayer(other)) return;

        if (instructionManager == null || !instructionManager.IsCurrentStep(0))
        {
            playerWasInside = true;
            return;
        }

        CompleteStep();
    }

    private void OnTriggerExit(Collider other)
    {
        if (!IsPlayer(other)) return;

        playerWasInside = false;
    }

    private bool IsPlayer(Collider other)
    {
        if (other.CompareTag("MainCamera"))
            return true;

        Transform current = other.transform;

        while (current != null)
        {
            if (current.name.Contains("CenterEyeAnchor") ||
                current.name.Contains("TrackingSpace") ||
                current.name.Contains("Camera Rig"))
                return true;

            current = current.parent;
        }

        return false;
    }

    private void CompleteStep()
    {
        if (completed) return;

        completed = true;
        instructionManager.CompleteMirrorStep();
    }
}
