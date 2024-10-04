using System.Collections;
using UnityEngine;
using UnityEngine.Events;

public class LegPuzzle : VREscapeRoomPuzzleBase
{
    // Fioka koja se otvara kada se noga postavi
    [SerializeField] private GameObject firstDrawer;

    // Fioka koja se otvara kada se rotirani objekat postavi
    [SerializeField] private GameObject secondDrawer;

    // Zlatni ključ koji se pojavljuje u drugoj fioci
    [SerializeField] private GameObject goldenKey;

    // Callback za otvaranje prve fioke
    public UnityEvent onLegPlaced;

    // Callback za otvaranje druge fioke (nakon što je objekat postavljen)
    public UnityEvent onRotatedObjectPlaced;

    private bool isLegPlaced = false;
    private bool isObjectPlaced = false;

    private void Start()
    {
        // Osiguravamo da su fioke i ključ neaktivni na početku
        firstDrawer.SetActive(false);
        secondDrawer.SetActive(false);
        goldenKey.SetActive(false);
    }

    // Poziva se kada noga stola bude postavljena
    public void OnLegPlaced()
    {
        if (!isLegPlaced)
        {
            isLegPlaced = true;
            Debug.Log("Table leg placed, opening first drawer!");

            // Otvaramo prvu fioku
            firstDrawer.SetActive(true);
            StartCoroutine(DelayFirstDrawer());
            // Pozivamo UnityEvent za dodatne akcije (npr. zvuk)
            onLegPlaced.Invoke();
        }
    }
    IEnumerator DelayFirstDrawer()
    {
        yield return new WaitForSeconds(2.5f);
        firstDrawer.GetComponent<Animator>().Play("Open");
        firstDrawer.GetComponent<AudioSource>().Play();
    }

    // Poziva se kada rotirani objekat bude postavljen
    public void OnRotatedObjectPlaced()
    {
        if (isLegPlaced && !isObjectPlaced)
        {
            isObjectPlaced = true;
            Debug.Log("Rotated object placed, opening second drawer!");

            // Otvaramo drugu fioku i prikazujemo ključ
            secondDrawer.SetActive(true);
            goldenKey.SetActive(true);

            // Pozivamo UnityEvent za dodatne akcije (npr. zvuk)
            onRotatedObjectPlaced.Invoke();

            // Obeležavamo zagonetku kao završenu
            CompletePuzzle();
        }
    }
}
