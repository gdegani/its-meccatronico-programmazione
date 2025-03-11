#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[100], str2[100];

    printf("Inserisci la prima stringa: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Inserisci la seconda stringa: ");
    fgets(str2, sizeof(str2), stdin);

    // Rimuove il carattere di newline alla fine delle stringhe
    str1[strcspn(str1, "\n")] = '\0';

    int posizione = strcspn(str2, "\n");
    str2[posizione] = '\0';

    if (strlen(str1) > strlen(str2)) {
        printf("La stringa più lunga è: %s\n", str1);
    } else if (strlen(str1) < strlen(str2)) {
        printf("La stringa più lunga è: %s\n", str2);
    } else {
        printf("Le stringhe hanno la stessa lunghezza. La prima stringa è: %s\n", str1);
    }


    if (strcmp(str1, str2) > 0) {
        printf("La stringa maggiore è: %s\n", str1);
    } else if (strcmp(str1, str2) < 0) {
        printf("La stringa maggiore è: %s\n", str2);
    } else {
        printf("Le stringhe sono uguali: %s\n", str1);
    }
    return 0;
}