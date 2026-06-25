using System.Collections;
using TMPro;
using UnityEngine;

public class InstructionManager : MonoBehaviour
{
    [Header("Feedback")]
    public ParticleSystem successParticles;
    public AudioSource successAudio;

    [Header("Intro UI")]
    public GameObject introCanvas;
    public TMP_Text introText;
    public GameObject introCheck;

    [Header("Bathroom UI")]
    public GameObject bathroomCanvas;
    public TMP_Text bathroomText;
    public GameObject bathroomCheck;

    [Header("Final UI")]
    public GameObject understoodButton;

    private int currentStep = -1;
    private bool instructionsStarted = false;

    void Start()
    {
        if (introCanvas != null) introCanvas.SetActive(false);
        if (bathroomCanvas != null) bathroomCanvas.SetActive(false);
        if (introCheck != null) introCheck.SetActive(false);
        if (bathroomCheck != null) bathroomCheck.SetActive(false);
        if (understoodButton != null) understoodButton.SetActive(false);
    }

    public bool IsCurrentStep(int step)
    {
        return instructionsStarted && currentStep == step;
    }

    public void StartInstructions()
    {
        instructionsStarted = true;
        currentStep = 0;

        if (introCanvas != null) introCanvas.SetActive(true);
        if (bathroomCanvas != null) bathroomCanvas.SetActive(false);
        if (introCheck != null) introCheck.SetActive(false);
        if (bathroomCheck != null) bathroomCheck.SetActive(false);
        if (understoodButton != null) understoodButton.SetActive(false);

        if (introText != null)
            introText.text = "Step 1: Look for the mirror and look at yourself.";
    }

    public void CompleteMirrorStep()
    {
        if (!IsCurrentStep(0)) return;
        StartCoroutine(MirrorStepRoutine());
    }

    private IEnumerator MirrorStepRoutine()
    {
        currentStep = 99;

        if (introCheck != null)
            introCheck.SetActive(true);

        PlaySuccessFeedback();

        yield return new WaitForSeconds(1.2f);

        if (introCanvas != null)
            introCanvas.SetActive(false);

        if (bathroomCanvas != null)
            bathroomCanvas.SetActive(true);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text = "Step 2: Remove your shirt.";

        currentStep = 1;
    }

    public void RemoveShirt(GameObject shirtToRemove)
    {
        if (!IsCurrentStep(1)) return;

        if (shirtToRemove != null)
            shirtToRemove.SetActive(false);

        StartCoroutine(ShirtStepRoutine());
    }

    private IEnumerator ShirtStepRoutine()
    {
        currentStep = 99;

        if (bathroomCheck != null)
            bathroomCheck.SetActive(true);

        PlaySuccessFeedback();

        yield return new WaitForSeconds(1.2f);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text = "Step 3: Apply mild soap gently to the surgical area.";

        currentStep = 2;
    }

    public void CompleteSoapStep()
    {
        if (!IsCurrentStep(2)) return;
        StartCoroutine(SoapStepRoutine());
    }

    private IEnumerator SoapStepRoutine()
    {
        currentStep = 99;

        if (bathroomCheck != null)
            bathroomCheck.SetActive(true);

        PlaySuccessFeedback();

        yield return new WaitForSeconds(1.2f);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text = "Step 4: Rinse the area with water, allowing it to flow gently over the incision.";

        currentStep = 3;
    }

    public void CompleteWaterStep()
    {
        if (!IsCurrentStep(3)) return;
        StartCoroutine(WaterStepRoutine());
    }

    private IEnumerator WaterStepRoutine()
    {
        currentStep = 99;

        if (bathroomCheck != null)
            bathroomCheck.SetActive(true);

        PlaySuccessFeedback();

        yield return new WaitForSeconds(1.2f);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text = "Step 5: Dry the area by gently patting the skin with a clean towel.";

        currentStep = 4;
    }

    public void CompleteTowelStep()
    {
        if (!IsCurrentStep(4)) return;
        StartCoroutine(TowelStepRoutine());
    }

    private IEnumerator TowelStepRoutine()
    {
        currentStep = 99;

        if (bathroomCheck != null)
            bathroomCheck.SetActive(true);

        PlaySuccessFeedback();

        yield return new WaitForSeconds(1.2f);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text =
                "Step 6: Do not apply creams, lotions, powders or perfumes unless recommended by a healthcare professional.";

        if (understoodButton != null)
            understoodButton.SetActive(true);

        currentStep = 5;
    }

    public void CompleteExperience()
    {
        if (!IsCurrentStep(5)) return;

        currentStep = 99;

        if (understoodButton != null)
            understoodButton.SetActive(false);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(true);

        PlaySuccessFeedback();

        if (bathroomText != null)
            bathroomText.text = "Experience completed.\n\nThank you for participating.";

        StartCoroutine(EndExperienceRoutine());
    }

    private IEnumerator EndExperienceRoutine()
    {
        yield return new WaitForSeconds(4f);

        if (bathroomCheck != null)
            bathroomCheck.SetActive(false);

        if (bathroomText != null)
            bathroomText.text = "You may now remove the headset.";
    }

    private void PlaySuccessFeedback()
    {
        if (successParticles != null)
            successParticles.Play();

        if (successAudio != null)
            successAudio.Play();
    }
}