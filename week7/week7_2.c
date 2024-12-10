#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Define a constant for the number of students
#define NSTUDENTS 100
#define BUCKET_NUMBERS 10

void randomlyFill(float [], int);
void printArray(float [], int );
float getMax(float [], int);
void drawHistrogram(float [], int);

int main(void)
{
	// Declare an array of floats to store grades for NSTUDENTS students
	float grades[NSTUDENTS] ;//= {20., 20.001, 0., 0.01, 100.0};	
    // Fill the grades array with random values between 0 and 100
	randomlyFill(grades, NSTUDENTS);
	// Print the grades array
	printArray(grades, NSTUDENTS);
	// Find and print the maximum grade in the array
	//float maximum = getMax(grades, NSTUDENTS);
	//printf("maximum grade %f\n", maximum);
	
	drawHistrogram(grades, NSTUDENTS);
	return 0;

}

// Fills the grades array with random float values in the range 0 to 100
// When an array is passed to a function, what is actually passed is a pointer to the first element of the array. 
// This means the function operates directly on the original array.
// Any modifications made to the grades array inside the randomlyFill function will directly change the contents of the grades array 
// in the calling function.
void randomlyFill(float grades [], int arraySize)
{
	int i, upperBound = 101, lowerBound=0;
    // Seed the random number generator with the current time
	srand(time(NULL));
    // Fill each element of the array with a random grade
	for(i=0; i < arraySize; i++)
	{
		//grades[i] = rand() % 101;// Random integer between 0 and 100
        // Alternative methods to generate random floats:
		grades[i] = 100 * (float)rand() / RAND_MAX;
		//grades[i] = lowerBound + rand() % (upperBound - lowerBound);
	}
}

// Prints each element of the grades array with its index
void printArray(float grades [], int arraySize)
{
	int i;
    // Loop through each element of the array and print it
	for(i=0; i < arraySize; i++)
	{
		printf("%d. grade is %f\n", i+1, grades[i]);
	}
}

// Finds and returns the maximum grade in the array
float getMax(float grades[], int arraySize)
{
	int i;
	float maximum = grades[0];// Initialize maximum with the first element of the array

    // Loop through the array starting from the second element
	for(i=1; i < arraySize; i++)
	{
		// Update maximum if the current grade is greater
		if(maximum < grades[i])
		{
			maximum = grades[i];
		}
	}
	return maximum;// Return the highest grade
}

// we will draw a histogram of the grades
void drawHistrogram(float grades [], int arraySize)
{
	// check if the BUCKET_NUMBERS is a factor of 100
	if(100 % BUCKET_NUMBERS != 0)
	{
		printf("invalid BUCKET_NUMBERS");
		exit(0);
	}
	//float frequencies[BUCKET_NUMBERS] = {0.};
	// frequencies is float because we will use getMax function
	// which requires a float array
	float frequencies[BUCKET_NUMBERS]; 
	int i;
	// calculate how many different grades can go into each bucket
	int numberOfGradesInEachBucket = 100 / BUCKET_NUMBERS;
	// initialize the frequencies
	for(i=0; i < BUCKET_NUMBERS; i++)
	{
		frequencies[i] = 0.0;
	}
	// calculate freqs
	for(i = 0; i < arraySize; i++)
	{
		// find out the index
		int index = (int)grades[i] / numberOfGradesInEachBucket;
		// check the boundaries
		if(fabs(index * numberOfGradesInEachBucket - grades[i]) < pow(10, -6))
		{
			// index can go below -1. 
			// if grade is 0, we should keep index as 0
			index = index == 0 ? index : index - 1;
		}
		// increment the frequency
		frequencies[index] += 1;
	}
	// get maxFreq to underline the frequency bar
	float maxFreq = getMax(frequencies, BUCKET_NUMBERS);
	for(i = 0; i < BUCKET_NUMBERS; i++)
	{
		int j;
		printf("%2d - %3d |", i * numberOfGradesInEachBucket, (i+1)*numberOfGradesInEachBucket);
		for(j = 0; j < frequencies[i]; j++)
		{
			printf("*");
		}
		printf("\n%10c", '+');
		// underline
		for(j = 0; j < (int)maxFreq; j++)
		{
			printf("-");
		}
		printf("\n");
	}	
}


