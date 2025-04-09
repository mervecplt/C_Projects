#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_SIZE 10000
 
void generateRandomSortedArray(int [], int, int *, int *);
void printArray(int [], int);
int binarySearch(int [], int, int);
int linearSearch(int [], int, int);



int main(void)
{
	int array [ARR_SIZE], min, max, target, i, position;
	double elapsedTimeBinary = 0, elapsedTimeLinear = 0, startTime;
	clock_t t;
	generateRandomSortedArray(array, ARR_SIZE, &min, & max);
	// search random 100 numbers
	for(i = 0; i < 100000; i++)
	{
		target = min + rand() % (max - min);
		startTime = (double)clock();
		// do not control if we find them. just run the algorithm
		binarySearch(array, ARR_SIZE, target);
		elapsedTimeBinary += (double)clock() - startTime;
		startTime = (double)clock();
		// do not control if we find them. just run the algorithm
		linearSearch(array, ARR_SIZE, target);
		elapsedTimeLinear += (double)clock() - startTime;
	}
	
	printf("elapsed time for binary search %.10lf\n", ((double)elapsedTimeBinary) / CLOCKS_PER_SEC);
	printf("elapsed time for linear search %.10lf\n", ((double)elapsedTimeLinear) / CLOCKS_PER_SEC);
	return 0;
}

void generateRandomSortedArray(int array[], int size, int *min, int *max)
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
	*min = array[0];
	*max = array[size-1];
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


int binarySearch(int array[], int size, int target)
{
	int i;
	int low, high, middle;
	low = 0;
	high = size - 1;
	while(low <= high)
	{
		middle = (low + high) / 2;
		if(array[middle] == target)
			return middle;
		else if(array[middle] > target)
			high = middle - 1;
		else 
			low = middle + 1;
	}
	return -1;
}

int linearSearch(int array[], int size, int target)
{
	int i;
	for(i = 0; i < size; i++)
	{
		// if true, return the index
		if(array[i] == target)
			return i;
	}
	// if reached here, i know that arr[i] == target has never been true
	// so  i can return -1
	return -1;
	
}