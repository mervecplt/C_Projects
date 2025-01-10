#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30  // Define a default size for array operations

// Function prototypes
void assignRandArrayWithPtr(int *, int);  // Fill an array with random values
void printArrayWithPtr(const int *, int);  // Print an array using pointers

int main(void)
{
    int n = 10;  // Initial size for dynamic array
    int *p = (int *)malloc(n * sizeof(int));  // Allocate memory for n integers

    if(p == NULL)  // Check if memory allocation was successful
    {
        printf("Allocation unsuccessful.\n");
        exit(1);  // Exit program if allocation failed
    }
    
    // Fill and print the array
    assignRandArrayWithPtr(p, n);  // Fill the array with random values
    printArrayWithPtr(p, n);  // Print the initial array
    
    printf("After realloc:\n");
    p = (int *)realloc(p, 2 * n * sizeof(int));  // Resize the array to hold 2n elements
    assignRandArrayWithPtr(p + n, n);  // Fill the new part of the array with random values
    printArrayWithPtr(p, 2 * n);  // Print the expanded array
    
    // Free allocated memory
    free(p);
    return 0;  
}

// Function to fill an array with random values
void assignRandArrayWithPtr(int *arrPtr, int size)
{
    int i;
    srand(time(NULL));  // Seed the random number generator
    for(i = 0; i < size; i++)
    {
        *(arrPtr + i) = rand() % 100;  // Assign a random value between 0 and 99
    }
}

// Function to print an array using pointers
void printArrayWithPtr(const int *arrPtr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, *(arrPtr + i));  // Print each element
    }
}