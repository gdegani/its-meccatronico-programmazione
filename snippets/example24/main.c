#include <stdio.h>
#include <stdlib.h>
#include "simple_list.h"

int main() {

    int v;
    char scelta[5];

    do {
        printf("Operazioni possibili:\n");
        printf("a. AddToHead\n");
        printf("b. AddToTail\n");
        printf("c. RemoveFromHead\n");
        printf("d. RemoveFromTail\n");
        printf("e. ClearAll\n");
        printf("p. PrintAll\n");
        printf("x. Exit\n");
        printf("\nScelta: ");
        scanf("%s", scelta);

        switch (scelta[0]) {
            case 'a':
                printf("Valore da inserire: ");
                scanf("%d", &v);
                if (AddToHead(v) == LIST_ERROR)
                    printf("Errore!\n");
                break;
            case 'b':
                printf("Valore da inserire: ");
                scanf("%d", &v);
                if (AddToTail(v) == LIST_ERROR)
                    printf("Errore!\n");
                break;
            case 'c':
                if (RemoveFromHead(&v) == LIST_ERROR)
                    printf("Errore!\n");
                else
                    printf("Valore prelevato: %d\n", v);
                break;
            case 'd':
                if (RemoveFromTail(&v) == LIST_ERROR)
                    printf("Errore!\n");
                else
                    printf("Valore prelevato: %d\n", v);
                break;
            case 'e':
                ClearAll();
                break;
            case 'p':
                printAll();
                break;
        }
    } while (scelta[0] != 'x');
    return EXIT_SUCCESS;
}
