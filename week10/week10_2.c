#include <stdio.h>
#define MAX_N 50 // Define a constant for the maximum size of the 2D array

// Function prototypes
int initializeEmptyTwoDArray(int [][MAX_N], int);
int ackermannMemoization(int, int, int [][MAX_N]); 
int ackermann(int, int);

int main(void)
{
    // Declare a 2D array to store Ackermann function results
    int ackermannArray[MAX_N][MAX_N];

    // Initialize the array with -1 values
    initializeEmptyTwoDArray(ackermannArray, MAX_N);

    // Compute and print the Ackermann function result without memoization
    printf("%d\n", ackermann(5, 4));

    // Uncomment below to compute with memoization
    // printf("%d\n", ackermannMemoization(5, 4, ackermannArray));

    return 0;
}

// Function to initialize a 2D array with -1
int initializeEmptyTwoDArray(int ackermannArray[][MAX_N], int length)
{
    int i, j;
    for(i = 0; i < length; i++)
    {
        for(j = 0; j < length; j++)
        {
            ackermannArray[i][j]= -1; // Set all elements to -1
        }
    }
}

// Recursive Ackermann function
int ackermann(int m, int n)
{
    if(m == 0)
        return n + 1; // Base case 1
    if(m > 0 && n == 0)
        return ackermann(m-1, 1); // Base case 2
    if(m > 0 && n > 0)
        return ackermann(m-1, ackermann(m, n-1)); // Recursive call
}

// Ackermann function with memoization
int ackermannMemoization(int m, int n, int ackermannArray[][MAX_N])
{
    if(ackermannArray[m][n] != -1)
        return ackermannArray[m][n]; // Use memoized value if available

    if(m == 0)
        ackermannArray[m][n] = n + 1; // Base case 1
    else if(m > 0 && n == 0)
        ackermannArray[m][n] = ackermannMemoization(m-1, 1, ackermannArray); // Base case 2
    else if(m > 0 && n > 0)
        ackermannArray[m][n] = ackermannMemoization(m-1, ackermannMemoization(m, n-1, ackermannArray), ackermannArray); // Recursive call

    return ackermannArray[m][n];
}