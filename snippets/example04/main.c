/*
 * Esercizio:
 * Scrivere un programma in linguaggio C per la gestione elementare di un carrello della spesa.
 * Il programma deve chiedere in input:
 *   - Il numero di oggetti contenuti nel carrello.
 *   - Il prezzo unitario di ogni oggetto.
 * Il programma deve calcolare il costo totale del carrello:
 *   - Se il numero di oggetti è maggiore di 10, applicare uno sconto del 10%.
 *   - Calcolare il costo al lordo dell’IVA del 22%.
 * Stampare a schermo:
 *   - Il dettaglio del carrello, l’imponibile, l’IVA e il totale lordo.
 */

#include <stdio.h>

int main() {
    // Dichiarazione delle variabili
    int numero_oggetti;        // Numero totale di oggetti nel carrello
    float prezzo_unitario;     // Prezzo di un singolo oggetto
    float imponibile;          // Prezzo totale senza IVA
    float sconto = 0;          // Sconto applicato (se applicabile)
    float iva;                 // IVA calcolata sul totale
    float totale;              // Totale finale, comprensivo di IVA
    // #region sample
    // Richiesta dati all'utente
    printf("Inserisci il numero di oggetti nel carrello: ");
    scanf("%d", &numero_oggetti);

    printf("Inserisci il prezzo unitario degli oggetti: ");
    scanf("%f", &prezzo_unitario);

    // Calcolo del costo totale prima dell'applicazione di sconti o IVA
    imponibile = numero_oggetti * prezzo_unitario;

    // #region blocco_if
    // Applicazione dello sconto del 10% se il numero di oggetti è maggiore di 10
    if (numero_oggetti > 10) {
        sconto = imponibile * 0.10;  // Calcolo dello sconto (10% del totale)
        imponibile -= sconto;        // Aggiornamento dell'imponibile dopo lo sconto
    }
    // #endregion
    // Calcolo dell'IVA (22% sull'imponibile)
    iva = imponibile * 0.22;

    // Calcolo del totale lordo (imponibile + IVA)
    totale = imponibile + iva;
    // #endregion
    // Stampa del dettaglio del carrello
    printf("\n===== Dettaglio del Carrello =====\n");
    printf("Numero di oggetti: %d\n", numero_oggetti);
    printf("Prezzo unitario: %.2f\n", prezzo_unitario);
    printf("Totale prima dello sconto: %.2f\n", numero_oggetti * prezzo_unitario);
    printf("Sconto applicato: %.2f\n", sconto);
    printf("Imponibile (dopo sconto): %.2f\n", imponibile);
    printf("IVA (22%%): %.2f\n", iva);
    printf("Totale lordo: %.2f\n", totale);
    printf("==============================\n");

    return 0;
}