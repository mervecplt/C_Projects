#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10000

int linearSearch(int [], int, int);
void generateRandomArray(int [], int);
void printArray(int [], int);

int main(void)
{
	int array[ARR_SIZE];
	generateRandomArray(array, ARR_SIZE);
	printf("your generated array: \n");
	printArray(array, ARR_SIZE);
	//int size = sizeof(array) / sizeof(array[0]);
	int target;
	printf("target to search in the array: ");
	scanf("%d", &target);
	int position = linearSearch(array, ARR_SIZE, target);
	if(position != -1)
		printf("the first index that %d occurs is %d\n", target, position);
	else
		printf("%d is not in the array\n", target);

	return 0;
}


int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

void generateRandomArray(int array[], int size)
{
	// srand
	srand(time(NULL));
	int i;
	for(i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 100;
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
