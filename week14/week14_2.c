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
    int  array[ARR_SIZE];
	int min , max;

	generateRandomSortedArray(array, size, &min, &max);

    printf("ilk 20 değer girin");
	printArray(array,20);

	binarySearch(array, size, target){

		int targetBinary = 5000;
    int binaryResult = binarySearch(array, ARR_SIZE, targetBinary);
    if (binaryResult != -1)
        printf("Binary Search: Found %d at index %d\n", targetBinary, binaryResult);
    else
        printf("Binary Search: %d not found\n", targetBinary);

	}

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
    
    int min = 0 , max = size - 1; 
   
    while(min <= max){

		int mid = min + (min - max)/2;

        if(array[mid] == target){
            return mid;
        }
        if(array[mid] > target){
            max = mid -1;
        }
        else{
           
			min = mid + 1;

        }
    }
    return -1;

    
}

int linearSearch(int array[], int size, int target)
{
    int i;
        for(i = 0; i < size; i++){
            if(array[i] == target){
                return i;
            }

            
        }
        return -1;
}