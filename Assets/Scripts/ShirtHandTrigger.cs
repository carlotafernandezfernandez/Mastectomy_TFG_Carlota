using UnityEngine;

public class ShirtHandTrigger : MonoBehaviour
{
    public InstructionManager instructionManager;

    private bool removed = false;

    private void OnTriggerEnter(Collider other)
    {
        if (removed) return;

        if (other.name.Contains("Hand") || other.name.Contains("LeftHand") || other.name.Contains("RightHand"))
        {
            removed = true;

            if (instructionManager != null)
            {
                instructionManager.RemoveShirt(gameObject);
            }
        }
    }
}