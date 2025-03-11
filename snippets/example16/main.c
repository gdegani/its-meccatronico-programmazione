#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define SYMBOL1 'X'
#define SYMBOL2 '0'

char player1[50], player2[50];
char board[3][3];

// Function to print the current state of the board
void printBoard() {
    printf("  0 1 2\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", i);
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if there is a winner
bool checkWin() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return true;
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return true;
    return false;
}

// Function to reset the board to its initial state
void resetBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}
FILE *fptr;
// Function to handle a player's turn
void playYourTurn(int turn) {
    int row, col;
    char input[10];
    do {
        printf("%s's turn. Enter row and column (0-2): ", turn == 0 ? player1 : player2);
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, "%d %d", &row, &col) != 2 || row < 0 || row > 2 || col < 0 || col > 2) {
            printf("Invalid input. Please enter two numbers between 0 and 2.\n");
            continue;
        }
        if (board[row][col] == SYMBOL1 || board[row][col] == SYMBOL2) {
            printf("Please, select a free position...\n");
        }
    } while (board[row][col] == SYMBOL1 || board[row][col] == SYMBOL2 || row < 0 || row > 2 || col < 0 || col > 2);

    board[row][col] = turn == 0 ? SYMBOL1 : SYMBOL2;
}

int main() {
    // Get player names
    printf("Enter name for player 1: ");
    fgets(player1, sizeof(player1), stdin);
    player1[strcspn(player1, "\n")] = '\0'; // Remove newline character

    printf("Enter name for player 2: ");
    fgets(player2, sizeof(player2), stdin);
    player2[strcspn(player2, "\n")] = '\0'; // Remove newline character

    // Initialize the board
    resetBoard();

    // Randomly select the starting player
    int turn = rand() % 2;

    // Main game loop
    for (int move = 0; move < 9; move++) {
        system("clear"); // Clear the screen
        printBoard();
        playYourTurn(turn);

        // Check for a win
        if (checkWin()) {
            printf("%s wins!\n", turn == 0 ? player1 : player2);
            break;
        }
        // Switch turns
        turn = 1 - turn;
    }

    if (!checkWin()) {
        printf("It's a draw!\n");
    }

    return 0;
}