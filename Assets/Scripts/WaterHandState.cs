using UnityEngine;

  public class WaterHandState : MonoBehaviour
  {
      public static bool HasWetHand { get; private set; }

      public static void MarkHandWet()
      {
          HasWetHand = true;
      }

      public static void Clear()
      {
          HasWetHand = false;
      }
  }
