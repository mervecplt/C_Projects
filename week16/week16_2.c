#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10000

int linearSearchRecursive(int [], int, int, int);
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
	int position = linearSearchRecursive(array, ARR_SIZE, target, 0);
	if(position != -1)
		printf("the first index that %d occurs is %d\n", target, position);
	else
		printf("%d is not in the array\n", target);
	
	return 0;
}


int linearSearchRecursive(int array[], int size, int target, int i)
{
	
	if(i == size)
		return -1;
	if(array[i] == target)
		return i;
	return linearSearchRecursive(array, size, target, i+1);
	
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