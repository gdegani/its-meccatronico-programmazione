#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Define a constant for the maximum length of the string

int main(int argc, char *argv[]) {
    char vettore[MAX]; // Declare an array to store the input string
    char *puntatore = vettore; // Initialize a pointer to the start of the array

    printf("Dammi una stringa: "); // Prompt the user for a string
    fgets(vettore, MAX, stdin); // Read the input string from the user

    // Loop through the string until the null terminator is found
    while(*puntatore != '\0') {
        puntatore++;
    }

    // Print the length of the string (excluding the null terminator)
    printf("La stringa e' lunga %d caratteri.\n", puntatore - vettore - 1);
    return EXIT_SUCCESS; // Return success status
}