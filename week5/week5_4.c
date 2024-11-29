#include <stdio.h>

int factorialFor(int);
int factorialWhile(int);
int factorialDoWhile(int);

int main(void)
{
	int n, result;
	printf("enter a number to see its factorial");
	scanf("%d", &n);
	printf("with for: ");
	result = factorialFor(n);
	printf("%d! = %d", n, result);
	printf("\nwith while: ");
	result = factorialWhile(n);
	printf("%d! = %d", n, result);
	printf("\nwith do while ");
	result = factorialDoWhile(n);
	printf("%d! = %d", n, result);
	return 0;
}
int factorialFor(int n)
{
	int result = 1, i; // Initialize result to 1, why?
	// Use a for loop to iterate from 1 to n
    // Multiply result by each number in the range
	for(i=1; i <= n; i++)
	{
		// loop body
		// Equivalent to result = result * i
		result *= i; // result = result * i;
	}
	return result;
}

int factorialWhile(int n)
{
	int result = 1, i;// Initialize result to 1, why?
    i = 1;      // Start the counter at 1
	while(i<=n)
	{
		// i++ increment after (post-increment)
		result = result * i++; // Multiply result by i and then increment i
	}
	return result;
}

int factorialDoWhile(int n)
{
	int result = 1, i;// Initialize result to 1, why?
    i = 0;      // Start the counter at 0
	// The do-while loop always executes the block at least once
	do{
		// ++i increment before (pre-increment)
		result = result * ++i; // Pre-increment i and multiply it with result
	}while(i<n);
	return result;
}


