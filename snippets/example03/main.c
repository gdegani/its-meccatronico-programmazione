#include <stdio.h>

int main(void) {
    int base = 2, altezza = 3;

    printf("Hello world!\n");
    {

        int base = 4;
        int area = base * altezza;
        printf("Base = %d \n", base);
        printf("Altezza = %d \n", altezza);
        printf("Area = %d \n", area);
    }
    printf("Base = %d \n", base);

    getchar();
    return 0;

}
