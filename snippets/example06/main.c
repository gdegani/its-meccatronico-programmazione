#include <stdio.h>

#define MAX_VALUES 100

int main(void) {
    int n, values[MAX_VALUES];

    // Chiedi quanti valori verranno introdotti
    printf("Quanti valori vuoi inserire (max 100)? ");
    scanf("%d", &n);

    if (n > MAX_VALUES) {
        printf("Il numero massimo di valori è 100.\n");
        return 1;
    }

    // Chiedi i valori
    printf("Inserisci %d valori:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    // Visualizza i valori pari nell'ordine di inserimento
    printf("Valori pari: ");
    for (int i = 0; i < n; i++) {
        if (values[i] % 2 == 0) {
            printf("%d ", values[i]);
        }
    }

    // Visualizza i valori dispari nell'ordine inverso
    printf("\nValori dispari: ");
    for (int i = n - 1; i >= 0; i--) {
        if (values[i] % 2 != 0) {
            printf("%d ", values[i]);
        }
    }

    printf("\n");
    return 0;
}
