#include <stdio.h>

int getMax(int, int);

int main(void)
{
	// variable decs.
	int num1, num2;
	printf("enter num1 ");
	scanf("%d", &num1);
	printf("enter num2 ");
	scanf("%d", &num2);
	// call the function to calculate the max
	int maxNumber = getMax(num1, num2);
	printf("%d is the largest among %d and %d\n",maxNumber, num1, num2);
	
	return 0;
}


int getMax(int num1, int num2)
{
	/*int maxNumber;
	if(num1 > num2)
	{
		maxNumber = num1;
	}
	else
	{
		maxNumber = num2;
	}
	return maxNumber;
	*/
	/*
	// second option
	if(num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}*/
	// third option with ternary operator
	/*
	int maxNumber = num1 > num2 ? num1 : num2;
	return maxNumber;	
	*/
	// fourth option
	return num1 > num2 ? num1 : num2;
}