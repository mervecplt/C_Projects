#include <stdio.h>
#define MAX_N 50  // Define a maximum size for the Fibonacci array

// Function prototypes
int fibonacci(int);  // Calculate Fibonacci number recursively
int fibonacciMemoization(int, int []);  // Calculate Fibonacci number using memoization
int initializeEmptyArray(int [], int);  // Initialize an array with -1 values

int main(void)
{
    int fiboArray[MAX_N];  // Declare an array to store Fibonacci values for memoization
    initializeEmptyArray(fiboArray, MAX_N);  // Initialize the array with -1
    printf("%d\n", fibonacci(24));  // Print the 24th Fibonacci number (recursive). Notice how long it takes
    printf("%d\n", fibonacciMemoization(24, fiboArray));  // Print the 24th Fibonacci number (memoized)
    
    return 0;  // Indicate successful program termination
}

// Function to calculate Fibonacci number recursively
int fibonacci(int n)
{
    if(n == 0)  // Base case: Fibonacci(0) = 0
        return 0;
    if(n == 1)  // Base case: Fibonacci(1) = 1
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);  // Recursive formula
}

// Function to initialize an array with -1
int initializeEmptyArray(int fiboArray[], int length)
{
    int i;
    for(i = 0; i < length; i++)
        fiboArray[i] = -1;  // Mark all elements as uninitialized
}

// Function to calculate Fibonacci number using memoization
int fibonacciMemoization(int n, int fiboArray[])
{
    if(fiboArray[n] != -1)  // If value is already calculated, return it
        return fiboArray[n]; 
    if(n == 0)  // Base case: Fibonacci(0) = 0
        fiboArray[0] = 0;
    else if(n == 1)  // Base case: Fibonacci(1) = 1
        fiboArray[1] = 1;
    else  // Recursive formula with memoization
        fiboArray[n] = fibonacci(n-1) + fibonacci(n-2);
    return fiboArray[n];  // Return the calculated value
}