#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int n, i, j, temp;
    int arr[MAX_SIZE];

    // Richiede in input il numero di elementi (N < 100)
    printf("Inserisci il numero di elementi (N < 100): ");
    scanf("%d", &n);

    // Controlla se N è maggiore o uguale a 100
    if (n >= 100) {
        printf("Errore: N deve essere minore di 100.\n");
        return 1;
    }

    // Richiede in input N numeri interi
    printf("Inserisci %d numeri interi:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ordina il vettore in senso crescente usando l'algoritmo di ordinamento a bolle
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Scambia arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Stampa il vettore ordinato
    printf("Vettore ordinato:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}