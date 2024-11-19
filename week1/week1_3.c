#include <stdio.h>

int main()
{
	// read three integers from the user,
	// and display their average as a floating point number
	int firstNumber, secondNumber, thirdNumber;
	float avg; // will keep the average 
	
	// some info for the user
	printf("take the avg. of three ints.\nso i need the first: ");
	// reading the first user input into my variable called firstNumber
	scanf("%d", &firstNumber);
	// second number
	printf("the second number: ");
	// reading the second user input into my variable called secondNumber
	scanf("%d", &secondNumber);
	// third number
	printf("the third number: ");
	// reading the third user input into my variable called thirdNumber
	scanf("%d", &thirdNumber);
	
	// IMPORTANT
	// firstNumber, secondNumber and thirdNumber are all integers
	// dividing them by 3 produces an integer result. 
	// so, we cast the result of the sum by using (float) to float before the division
	avg = (float)(firstNumber + secondNumber + thirdNumber) / 3;
	// print the results to the screen with formatting.
	// each placeholder takes their values from the corresponding variable on the right hand side.
	// %d -> integers
	// %f -> floats.
	printf("the average of %d, %d, and %d is %f", firstNumber, secondNumber, thirdNumber, avg);
	return 0;
}