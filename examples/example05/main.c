/*
 * Esercizio:
 * Scrivere un programma che calcoli la radice quadrata x di un numero n.
 * - Usare l’algoritmo di bisezione per risolvere l’equazione x^2 = n.
 * - Non utilizzare la funzione di libreria sqrt().
 * - Calcolare la soluzione con una precisione di 0.0000001.
 * - Il numero in input deve essere maggiore di 1.
 * - In caso contrario, stampare un messaggio di errore e terminare il programma.
 * 
 * Flowchart dell'algoritmo:
 *
 *                  +----------------------+
 *                  |  Inserire il numero n  |
 *                  +----------------------+
 *                              |
 *                  +--------------------------+
 *                  | n ≤ 1 ?                   |
 *                  +--------------------------+
 *                         |  No                      |  Sì  
 *                         v                           v
 *          +----------------------+       +------------------+
 *          | Inizializza a=1, b=n  |       | Stampa errore   |
 *          | ε = 0.0000001        |       | Termina programma |
 *          +----------------------+       +------------------+
 *                         |
 *           +----------------------------+
 *           |   x = (a + b) / 2           |
 *           +----------------------------+
 *                         |
 *      +----------------------------------+
 *      |   |x² - n| < ε ?                 |
 *      +----------------------------------+
 *             | No                   | Sì
 *             v                         v
 *   +----------------------+     +------------------+
 *   | x² > n ?             |     | Stampa x        |
 *   +----------------------+     | Termina         |
 *       | No          | Sì       +------------------+
 *       v             v
 *   +---------+  +---------+
 *   | a = x   |  | b = x   |
 *   +---------+  +---------+
 *       |           
 *       v
 *   Ripeti il ciclo
 */

#include <stdio.h>

// Definiamo la precisione richiesta
#define EPSILON 0.0000001

int main() {
    double n, a, b, x;
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(long double));

    // Input dell'utente
    printf("Inserisci un numero maggiore di 1: ");
    scanf("%lf", &n);

    // Controllo se il numero è valido
    if (n <= 1) {
        printf("Errore: il numero deve essere maggiore di 1.\n");
        return 1; // Termina il programma con errore
    }

    // Inizializzazione dei limiti per il metodo di bisezione
    a = 1.0;
    b = n;

    // Iterazione dell'algoritmo di bisezione
    while ((b - a) > EPSILON) {
        x = (a + b) / 2.0;  // Calcolo del punto medio
        printf("Punto medio: %.7f\n",x);
        if (x * x > n)
            b = x;  // Se x^2 è maggiore di n, aggiorna il limite superiore
        else
            a = x;  // Altrimenti aggiorna il limite inferiore
    }

    // Stampa del risultato
    printf("La radice quadrata approssimata di %.1f è: %.7f\n", n, (a + b) / 2.0);

    return 0; // Terminazione del programma
}