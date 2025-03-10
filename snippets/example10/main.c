#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSONE 100
#define MAX_NOME 50

enum test1 {UNO, DUE, TRE};
enum test2 {UNO, QUATTRO, CINQUE, SEI};
int main(void) {


    int numero_persone, numero_gruppi;

    // Richiedi il numero di persone
    do {
        printf("Inserisci il numero di persone (2 <= numero_persone < 100): ");
        scanf("%d", &numero_persone);
    } while (numero_persone < 2 || numero_persone >= 100);

    // Richiedi i nomi delle persone
    char nomi[MAX_PERSONE][MAX_NOME];
    for (int i = 0; i < numero_persone; i++) {
        printf("Inserisci il nome della persona %d: ", i + 1);
        scanf("%s", nomi[i]);
    }

    // Richiedi il numero di gruppi
    do {
        printf("Inserisci il numero di gruppi (>= 2): ");
        scanf("%d", &numero_gruppi);
    } while (numero_gruppi < 2);

    // Stampa i dati in input
    printf("\nNumero di persone: %d\n", numero_persone);
    printf("Nomi delle persone:\n");
    for (int i = 0; i < numero_persone; i++) {
        printf("%s\n", nomi[i]);
    }
    printf("Numero di gruppi: %d\n", numero_gruppi);

    // Suddividi le persone in gruppi
    printf("\nGruppi:\n");
    for (int i = 0; i < numero_gruppi; i++) {
        printf("Gruppo %d:\n", i + 1);
        for (int j = i; j < numero_persone; j += numero_gruppi) {
            printf("  %s\n", nomi[j]);
        }
    }

    return 0;
}