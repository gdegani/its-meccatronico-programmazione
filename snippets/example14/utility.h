#ifndef EXAMPLE14_UTILITY_H
#define EXAMPLE14_UTILITY_H

int isPalindrome(char *str);

/**
 * Function to print a slice of a vector of integers
 * @param vettore - Pointer to the vector
 * @param sx - Pointer to the left character
 * @param dx - Pointer to the right character
 */
void stampaVettore( int vettore[ ] , int sx, int dx );


/**
 * Function to remove spaces from a string
 * @param strin input string
 * @param strout output string
 * @param length input string length
 */
void togliSpazi( char *strin, char *strout, int length);

#endif //EXAMPLE14_UTILITY_H
