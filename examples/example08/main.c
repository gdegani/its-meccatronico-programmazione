#include <stdio.h>
#define MAX_SIZE 1000
int main(void) {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if ( n >= MAX_SIZE){
        return 1;
    }
    int prime[MAX_SIZE];
    for (int i = 0; i <= n; i++) {
        prime[i] = 1; // true
    }

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == 1) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = 0; // false
            }
        }
    }

    printf("Prime numbers up to %d are: ", n);
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            printf("%d ", p);
        }
    }
    printf("\n");

    return 0;
}