#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// we will use F for flag 1 for player1 and 2 for player2 on the board.
#define FLAG 'F'
#define PLAYER1 '1'
#define PLAYER2 '2'

char** initializeBoard(int size);
void displayBoard(char** board, int size);
int hasCapturedFlag(char** board, int x, int y) ;
void movePlayer(char** board, int size, int* x, int* y, char direction);

int main() {
    int size;
    printf("Enter the size of the game board: ");
    scanf("%d", &size);

    char** board = initializeBoard(size);
    int player1X = 0, player1Y = 0; // Player 1 starting position
    int player2X = size - 1, player2Y = size - 1; // Player 2 starting position
    board[player1X][player1Y] = PLAYER1;
    board[player2X][player2Y] = PLAYER2;

    printf("Welcome to Capture the Flag!\n");
    printf("Player 1 (1) starts at (0, 0) and Player 2 (2) starts at (%d, %d).\n", size - 1, size - 1);
    printf("The flag (F) is hidden on the board. Move your player to capture it.\n");

    // Main game loop
    while (1) {
        printf("\nCurrent Board:\n");
        displayBoard(board, size);

        // Player 1's turn
        printf("\nPlayer 1's turn (1): Enter move (U/D/L/R): ");
        char move;
        scanf(" %c", &move);
        movePlayer(board, size, &player1X, &player1Y, move);
        if (hasCapturedFlag(board, player1X, player1Y)) {
            displayBoard(board, size);
            printf("\nPlayer 1 has captured the flag! Player 1 wins!\n");
            break;
        }

        printf("\nCurrent Board:\n");
        displayBoard(board, size);

        // Player 2's turn
        printf("\nPlayer 2's turn (2): Enter move (U/D/L/R): ");
        scanf(" %c", &move);
        movePlayer(board, size, &player2X, &player2Y, move);
        if (hasCapturedFlag(board, player2X, player2Y)) {
            displayBoard(board, size);
            printf("\nPlayer 2 has captured the flag! Player 2 wins!\n");
            break;
        }
    }

    // Free allocated memory
    for (int i = 0; i < size; i++) {
        free(board[i]);
    }
    free(board);

    return 0;
}

// Function to initialize the game board
char** initializeBoard(int size) {
    char** board = (char**)malloc(size * sizeof(char*));
    for (int i = 0; i < size; i++) {
        board[i] = (char*)malloc(size * sizeof(char));
        for (int j = 0; j < size; j++) {
            board[i][j] = '.';
        }
    }
    // Place the flag randomly on the board
    srand(time(NULL));
    int flagX = rand() % size;
    int flagY = rand() % size;
    board[flagX][flagY] = FLAG;
    return board;
}

// Function to display the game board
void displayBoard(char** board, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to check if a player has captured the flag
int hasCapturedFlag(char** board, int x, int y) {
    return board[x][y] == FLAG;
}

// Function to update player position on the board
void movePlayer(char** board, int size, int* x, int* y, char direction) {
    int newX = *x, newY = *y;
    char playerId = board[*x][*y];
    switch(direction) {
        case 'U':
            newX--;
            break;
        case 'D':
            newX++;
            break;
        case 'L':
            newY--;
            break;
        case 'R':
            newY++;
            break;
    }
    // Check if the new position is valid and move the player
    if (newX >= 0 && newX < size && newY >= 0 && newY < size && board[newX][newY] != PLAYER1 && board[newX][newY] != PLAYER2) {
        board[*x][*y] = '.';
        *x = newX;
        *y = newY;
        board[*x][*y] = (board[*x][*y] == FLAG) ? FLAG : playerId; // If the flag is captured, leave it on the board
    }
}