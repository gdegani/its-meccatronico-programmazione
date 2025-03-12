#include <stdio.h>

void somma( int a, int b, int *risultato ) {
    *risultato = a + b;
    printf("Risultato: %d\n", *risultato);
}

int main(void) {
    printf("Hello, World!\n");

    int a = 5, b = 3, risultato = 0;
    printf("a: %d, b: %d\n", a, b);

    somma(a, b, &risultato);

    printf("Risultato: %d\n", risultato);

    return 0;
}
