#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NSTUDENTS 100

void randomlyFill(float [], int);
void printArray(float [], int );
float getMax(float [], int);


int main(void)
{
	float grades[NSTUDENTS];	
	randomlyFill(grades, NSTUDENTS);
	printArray(grades, NSTUDENTS);
	float maximum = getMax(grades, NSTUDENTS);
	printf("maximum grade %f\n", maximum);
	return 0;

}

void randomlyFill(float grades [], int arraySize)
{
	int i, upperBound = 101, lowerBound=0;
	srand(time(NULL));
	for(i=0; i < arraySize; i++)
	{
		grades[i] = rand() % 101;
		//grades[i] = 100 * (float)rand() / RAND_MAX;
		//grades[i] = lowerBound + rand() % (upperBound - lowerBound);
	}
}

void printArray(float grades [], int arraySize)
{
	int i;
	for(i=0; i < arraySize; i++)
	{
		printf("%d. grade is %f\n", i+1, grades[i]);
	}
}

float getMax(float grades[], int arraySize)
{
	int i;
	float maximum = grades[0];

	for(i=1; i < arraySize; i++)
	{
		if(maximum < grades[i])
		{
			maximum = grades[i];
		}
	}
	return maximum;
}

