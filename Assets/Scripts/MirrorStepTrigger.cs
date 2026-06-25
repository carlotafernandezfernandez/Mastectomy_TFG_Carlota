using UnityEngine;

public class MirrorStepTrigger : MonoBehaviour
{
    public InstructionManager instructionManager;

    private bool completed = false;
    private bool playerWasInside = false;

    private void OnTriggerEnter(Collider other)
    {
        if (!IsPlayer(other)) return;

        // Si todavía no está activo el Step 1, solo registramos que está dentro
        if (instructionManager == null || !instructionManager.IsCurrentStep(0))
        {
            playerWasInside = true;
            return;
        }

        // Si ya estaba dentro antes de empezar, no completar hasta que salga y vuelva a entrar
        if (playerWasInside) return;

        CompleteStep();
    }

    private void OnTriggerExit(Collider other)
    {
        if (!IsPlayer(other)) return;

        playerWasInside = false;
    }

    private bool IsPlayer(Collider other)
    {
        return other.CompareTag("MainCamera") || other.name.Contains("CenterEyeAnchor");
    }

    private void CompleteStep()
    {
        if (completed) return;

        completed = true;
        instructionManager.CompleteMirrorStep();
    }
}