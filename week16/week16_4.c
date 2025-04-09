#include <stdio.h>
#include <math.h>

#define ARR_SIZE 1000

int jump_search(int [], int, int);
void generateRandomSortedArray(int [], int);
void printArray(int [], int);

// Main function
int main() {
    int arr[ARR_SIZE];
    generateRandomSortedArray(arr, ARR_SIZE);
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 27;
    printArray(arr, size);

    // Perform jump search
    int result = jump_search(arr, size, target);

    // Display result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}

// Function to perform jump search
int jump_search(int arr[], int size, int target) {
    // Calculate the jump size

    int step = sqrt(size);

    // Initialize variables for jump indices
    int prev = 0;
    int curr = step;

    // Perform the jump search
    while (curr < size && arr[curr] < target) {
        prev = curr;
        curr += step;
    }

    // Perform linear search within the identified range
    for (int i = prev; i < size && i <= curr; i++) {
        if (arr[i] == target)
            return i; // Target found at index i
    }

    return -1; // Target not found
}

void generateRandomSortedArray(int array[], int size)
{
	// srand
	srand(time(NULL));
	array[0] = 0;
	int i = 0, randomNumber;
	while(i < size)
	{
		int lowerBound = i * 2;
		int upperBound = (i + 1) * size;
		// as long as you generate a randomNUmber which is less than the number at i-th index
		while( array[i] > (randomNumber = lowerBound + rand() % (upperBound - lowerBound) ) )
			;//keeps me in the loop by doing nothing
		// i got a random number which is greater than i-th number
		array[i+1] = randomNumber;
		// now, i can be incremented
		i++;
	}
}

void printArray(int array[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}