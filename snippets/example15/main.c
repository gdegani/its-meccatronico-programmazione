#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// Define a type for a pointer to unsigned char
typedef unsigned char *byte_pointer;

// Function to display bytes of a given memory area
void show_bytes(byte_pointer start, int len) {
    for (int i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

// Function to display bytes of an integer
void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

// Function to print a byte as bits
void print_byte_as_bits(char val) {
    for (int i = 7; i >= 0; i--) {
        printf("%c", (val & (1 << i)) ? '1' : '0');
    }
}

// Function to print the bits of a variable
void print_bits(char *ty, char *val, unsigned char *bytes, size_t num_bytes) {
    printf("(%*s) %*s =  [ ", 15, ty, 16, val);
    for (size_t i = 0; i < num_bytes; i++) {
        print_byte_as_bits(bytes[i]);
        printf(" ");
    }
    printf("]\n");
}

// Macro to show the value and bits of a variable
#define SHOW(T, V) do { \
    T x = V; \
    printf("%d\n", V); \
    print_bits(#T, #V, (unsigned char*) &x, sizeof(x)); \
} while(0)

int main(int argc, char *argv[]) {
    // Display the value and bits of various integers
    SHOW(int, INT_MIN);
    SHOW(int, -2);
    SHOW(int, -1);
    SHOW(int, 0);
    SHOW(int, 1);
    SHOW(int, 2);
    SHOW(int, INT_MAX);

    return EXIT_SUCCESS;
}