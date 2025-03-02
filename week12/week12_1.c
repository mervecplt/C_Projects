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
   for(i=0;i<size;i++){
     board[i] = (char*)malloc(size * sizeof(char))
   }
   for(i=0; i<size;i++){
    for(j=0;j<size;j++){
        board[i][j]=".";
    }
   
   }

   srand(time(NULL))
   flagx=rand() % size;
   flagy=rand() % size;

   if(flagx == 0 && flagy == 0 || flagx == size - 1 && flagy == size - 1){
    flagx=rand() % size;
    flagy=rand() % size;
   }

   board[flagx][flagy] = FLAG;

}

// Function to display the game board
void displayBoard(char** board, int size) 
    for(i=0; i<size;i++){
        for(j=0;j<size;j++){
           printf( "%c" , board[i][j]);
        }
        printf("\n");

}

// Function to check if a player has captured the flag
int hasCapturedFlag(char** board, int x, int y) {
    return bord[x][y] == FLAG;

}

// Function to update player position on the board
void movePlayer(char** board, int size, int* x, int* y, char direction) {
      int newX = *x , newY = *y;

       switch(direction){

        case'U': if(*x > 0) {
            newX--;
        }
        break;
        case'D': if(*x < size - 1) {
            newX++;
        }
        break;
        case'L': if(*y > 0) {
            newY--;
        }
        break;
        case'R': if(*y < size - 1) {
            newY++;
        }
        break;
        default;
        printf("Invalid move use U/D/L/R");
        return;

       }
}