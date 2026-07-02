using UnityEngine;

public class ShirtHandTrigger : MonoBehaviour
{
    public InstructionManager instructionManager;
    public bool allowNameFallback = true;

    private bool removed = false;

    private void OnTriggerEnter(Collider other)
    {
        if (removed)
            return;

        if (!HandInteractionDetector.IsHand(other, allowNameFallback))
            return;

        if (instructionManager == null || !instructionManager.IsCurrentStep(1))
            return;

        removed = true;
        instructionManager.RemoveShirt(gameObject);
    }
}
