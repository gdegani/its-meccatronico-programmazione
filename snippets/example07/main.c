/*
 * This program reads up to 100 real numbers from the user, calculates the average,
 * counts how many numbers are above the average, and prints those numbers along with the count.
 */

#include <stdio.h>

#define MAX_NUMBERS 100

int main(void) {
    int N;
    double numbers[MAX_NUMBERS];
    double sum = 0.0, average;
    int count_above_average = 0;

    // Input the number of elements
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &N);

    // Check if the number of elements exceeds the maximum limit
    if (N > MAX_NUMBERS) {
        printf("Number of elements exceeds the maximum limit of 100.\n");
        return 1;
    }

    // Input the numbers
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &numbers[i]);
        sum += numbers[i];  // Calculate the sum of the numbers
    }

    // Calculate the average
    average = sum / N;

    // Print the average
    printf("Average: %lf\n", average);

    // Count and print numbers above average
    printf("Numbers above average:\n");
    for (int i = 0; i < N; i++) {
        if (numbers[i] > average) {
            printf("%lf\n", numbers[i]);
            count_above_average++;
        }
    }

    // Print the count of numbers above average
    printf("Count of numbers above average: %d\n", count_above_average);

    return 0;
}