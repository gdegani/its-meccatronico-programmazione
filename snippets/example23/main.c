#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a;
    int n, i;

    printf("Array size? ");
    scanf("%i", &n);

    // allocate memory for new array a
    a = (int *) malloc(n * sizeof(int));

    // assign values to array elements
    for(i=0; i<n; i++) {
        a[i] = i;
        printf("%i ", a[i]);
    }
    printf("\n");

    // release memory
    free(a);
    a = NULL;    // <-- make sure that a is no longer used

    // end program
    return 0;
}

