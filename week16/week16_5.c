#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRSIZE 20

void generateAnArray(int *, int);
void printArray(int *, int);
void swap(int *, int *);
void insertionSort(int *, int);
int retrieveKthSmallest(int *, int, int);
void selectionSort(int *, int, int);


int main(void)
{
	int arr[ARRSIZE], k = 4;

	generateAnArray(arr, ARRSIZE);
	printArray(arr, ARRSIZE);
	printf("%d-th smallest number in the array is %d\n", k, retrieveKthSmallest(arr, ARRSIZE, k));
	return 0;
}

void generateAnArray(int *arr, int arrSize)
{
	int i = 0;
	srand(time(NULL));
	while(i < arrSize)
	{
		arr[i] = 1 + rand() % (1000-1);
		i++;
	}
}

void printArray(int *arr, int arrSize)
{
	int i = 0;

	while(i < arrSize)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}
void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

// just read the class notes for the comments
void insertionSort(int *array, int arrSize)
{
	int key; // my right hand
	int i, j; // j is the index where the array is sorted

	// keep picking cards
	for(i = 1; i < arrSize; i++)
	{
		// get the key (this is the item we are gonna place)
		key = array[i];
		// j is the index where you will possibly place the key
		j = i - 1;

		// as long as the key is less than the currentElement
		// and j is geq 0
		while(key < array[j] && j >= 0)
		{
			array[j+1] = array[j];
			// what is next?
			j--;
		}
		array[j+1] = key;
		//printArray(array, arrSize);
	}
}


int retrieveKthSmallest(int *arr, int arrSize, int k)
{
    //insertionSort(arr, arrSize);
    selectionSort(arr, arrSize, k);

    return arr[k-1];
}

void selectionSort(int *arr, int arrSize, int k)
{
	//
	int i, j, minValIndex;
	// burada arrSize yerine k-1 ya kadar gitmek yeterli
	for(i = 0; i < k; i++)
	{
		j = i;
		minValIndex = i;

		while(j < arrSize)
		{
			if(arr[j] < arr[minValIndex])
			{
				minValIndex = j;
			}
			j++;
		}
		swap(&arr[i], &arr[minValIndex]);
		//printArray(arr, ARRSIZE);
	}
}