using UnityEngine;

public class CandleTrigger : MonoBehaviour
{
    [SerializeField] private MeshRenderer symbolRenderer; // Referenca na MeshRenderer simbola

    private void Start()
    {
        symbolRenderer = GetComponent<MeshRenderer>();
        // Osiguravamo da je simbol nevidljiv na početku
        if (symbolRenderer != null)
        {
            symbolRenderer.enabled = false;
        }
    }

    // Kada sveća uđe u trigger, simbol postaje vidljiv
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Candle")) // Proveravamo da li je sveća ušla u trigger
        {
            if (symbolRenderer != null)
            {
                symbolRenderer.enabled = true; // Aktiviramo simbol
            }
        }
    }

    // Kada sveća napusti trigger, simbol postaje nevidljiv
    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag("Candle")) // Proveravamo da li je sveća izašla iz triggera
        {
            if (symbolRenderer != null)
            {
                symbolRenderer.enabled = false; // Deaktiviramo simbol
            }
        }
    }
}
