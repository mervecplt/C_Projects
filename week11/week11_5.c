#include <stdio.h>
#include <stdlib.h>

// Function prototypes for entering grades and printing an array
void enterGrades(int **, int *);
void printArray(int *, int);

int main(void)
{
    // Declare and allocate initial memory for an array of grades
    int n = 2; // Initial size of the grades array
    int *stdGrades = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if(stdGrades == NULL)
    {
        printf("could not allocate...");
        exit(1); // Exit program if memory allocation failed
    }
    
    // Function call to enter grades, reallocating memory as needed
    enterGrades(&stdGrades, &n);
    
    // Function call to print the grades array
    printArray(stdGrades, n);

    // Free the allocated memory to avoid memory leaks
    free(stdGrades);
}

void enterGrades(int **stdGrades, int *arrSize)
{
    int counter = 0; // Keeps track of the number of grades entered
    char stop = 'a'; // Variable to determine when to stop entering grades

    while(stop != 'e') // Loop until the user chooses to stop
    {
        // Prompt the user to enter the grade for the current student
        printf("enter %d-th student's grade: ", counter+1);
        scanf("%d%*c", (*stdGrades)+counter); // Store input in the grades array
        counter++;

        // Check if the array is full, and double its size if needed
        if(counter == *arrSize)
        {
            *arrSize *= 2; // Double the size of the array
            *stdGrades = (int *)realloc(*stdGrades, *arrSize * sizeof(int));
            if(*stdGrades == NULL) // Check if reallocation was successful
            {
                printf("could not allocate...");
                exit(1);
            }
        }

        // Ask the user whether to continue or stop entering grades
        printf("press e to quit: ");
        scanf("%c", &stop);
    }

    // Adjust the array size to match the actual number of grades entered
    *arrSize = counter;

    // Reallocate the array to fit the exact number of grades
    *stdGrades = (int *)realloc(*stdGrades, *arrSize * sizeof(int));
    if(*stdGrades == NULL) // Check if reallocation was successful
    {
        printf("could not allocate...");
        exit(1);
    }
}

void printArray(const int *stdGrades, int n) 
{
    int i = 0; // Loop counter for iterating through the array

    // Print each grade in the array
    while(i < n)
    {
        printf("%d. grade: %d\n", i+1, stdGrades[i]);
        i++;
    }
}