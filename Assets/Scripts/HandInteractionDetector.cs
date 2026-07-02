using UnityEngine;

public static class HandInteractionDetector
{
    public static bool IsHand(Collider other, bool allowNameFallback = true)
    {
        if (other == null)
            return false;

        Transform current = other.transform;

        while (current != null)
        {
            if (current.GetComponent<HandCollisionTarget>() != null)
                return true;

            if (allowNameFallback && current.name.Contains("Hand"))
                return true;

            current = current.parent;
        }

        return false;
    }
}
