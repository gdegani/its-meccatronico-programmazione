#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUMBER 100

int main(void) {
    int guess, number;
    srand(time(NULL)); // Seed the random number generator
    number = rand() % (MAX_NUMBER + 1); // Generate a random number between 0 and MAX_NUMBER

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 0 and %d. Can you guess it?\n", MAX_NUMBER);

    int counter = 0;
    do {
        printf("Please, input your guess: ");
        scanf("%d", &guess);
        printf("You guessed %d!\n", guess);

        if (guess > number) {
            printf("Too high...\n");
        } else if (guess < number) {
            printf("Too low...\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
        }

        counter++;
    } while (guess != number && counter < 3);

    if (guess != number) {
        printf("Sorry, you've used all your attempts. The number was %d.\n", number);
    }

    return 0;
}