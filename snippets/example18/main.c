#include <stdio.h>
#include <stdlib.h>

#define FILENAME "input.txt"

int main(void) {
    // Declare a file pointer
    FILE *file;

    // Open the file in read mode
    file = fopen(FILENAME, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        // Print an error message and exit if the file could not be opened
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Declare a character variable to store each character read from the file
    char ch;

    // Read and print each character until the end of the file is reached
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    // Return success
    return EXIT_SUCCESS;
}