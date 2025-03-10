#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"

#define MAX 1000

int main(int argc, char *argv[]) {
    char vettore[MAX];

    // Prompt the user to enter a string
    printf("Introduci la stringa: ");

    // Use fgets instead of gets for safer input handling
    if (fgets(vettore, MAX, stdin) != NULL) {
        // Remove the newline character if present
        size_t len = strlen(vettore);
        if (len > 0 && vettore[len - 1] == '\n') {
            vettore[len - 1] = '\0';
        }

        // Check if the string is a palindrome and print the result
        if (isPalindrome(vettore)) {
            printf("La stringa e' palindroma\n");
        } else {
            printf("La stringa non e' palindroma\n");
        }
    } else {
        // Handle input error
        printf("Errore nella lettura della stringa\n");
    }

    return EXIT_SUCCESS;
}