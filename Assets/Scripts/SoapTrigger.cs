using UnityEngine;

public class SoapTrigger : MonoBehaviour
{
    public InstructionManager instructionManager;

    private bool completed = false;

    private void OnTriggerEnter(Collider other)
    {
        if (completed) return;

        if (other.name.Contains("Hand"))
        {
            completed = true;

            if (instructionManager != null)
                instructionManager.CompleteSoapStep();
        }
    }
}