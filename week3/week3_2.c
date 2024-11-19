#include <stdio.h>

int getMax(int, int, int);

int main(void)
{
	// variable decs.
	int num1, num2, num3;
	printf("enter num1 ");
	scanf("%d", &num1);
	printf("enter num2 ");
	scanf("%d", &num2);
	printf("enter num3 ");
	scanf("%d", &num3);
	// call the function to calculate the max
	int maxNumber = getMax(num1, num2, num3);
	printf("%d is the largest among %d, %d and %d\n",maxNumber, num1, num2, num3);
	
	return 0;
}


int getMax(int num1, int num2, int num3)
{
	/* //first option
	int maxNumber;
	if(num1 > num2)
	{
		if(num1 > num3)
		{
			maxNumber = num1;
		}
		else
		{
			maxNumber = num3;
		}
	}
	else 
	{
		if(num2 > num3)
		{
			maxNumber = num2;
		}
		else
		{
			maxNumber = num3;
		}
	}
	return maxNumber;
	*/
	// option 2: with multiple conditions
	int maxNumber;
	if(num1 >= num2 && num1 >= num3)
	{
		maxNumber = num1;
	}
	if(num2 >= num1 && num2 >= num3)
	{
		maxNumber = num2;
	}
	if(num3 >= num1 && num3 >= num2)
	{
		maxNumber = num3;
	}
	return maxNumber;
	
}