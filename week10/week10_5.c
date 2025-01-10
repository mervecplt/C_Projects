#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 30 // Define the size of the array

// Function prototypes
void assignRandArray(int [], int);
void printArray(const int [], int);
void assignRandArrayWithPtr(int *, int);
void printArrayWithPtr(const int *, int);

int main(void)
{
    int arr[SIZE];

    // Assign random values to the array using array indexing
    assignRandArray(arr, SIZE);

    // Print the full array
    printArray(arr, SIZE);
	// uncomment to see the same effect with pointers
	//assignRandArrayWithPtr(&arr[0], SIZE);
	//printArrayWithPtr(&arr[0], SIZE);

    printf("-----\n");

    // Print part of the array starting from index 10
    printArray(arr+10, SIZE-10);

    return 0;
}

// Assign random values to an array (using array indexing)
void assignRandArray(int arr[], int size)
{
    int i;
    srand(time(NULL)); // Initialize random seed
    for(i = 0; i < size; i++)
    {
        arr[i] = rand() % 100; // Assign random values (0-99)
    }
}

// Print an array (using array indexing)
void printArray(const int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("arr[%d]: %d\n", i, arr[i]);
    }
}

// Assign random values to an array (using pointers)
void assignRandArrayWithPtr(int *arrPtr, int size)
{
    int i;
    srand(10); // Use a fixed random seed
    for(i = 0; i < size; i++)
    {
		//arrPtr[i] = rand() % 100;
		//*(arrPtr+i) = rand()%100;
        *arrPtr = rand() % 100; // Assign random value at pointer location
        arrPtr++; // Increment pointer
    }
}

// Print an array (using pointers)
void printArrayWithPtr(const int *arrPtr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
		//printf("arrPtr[%d]: %d\n", i, arrPtr[i]);
		//printf("arr[%d]: %d\n", i, *(arrPtr+i));
        printf("arr[%d]: %d\n", i, *arrPtr); // Dereference pointer
        arrPtr++; // Increment pointer
    }
}