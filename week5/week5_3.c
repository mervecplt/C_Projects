#include <stdio.h>

void printEvenNumsFor(int); // Prints even numbers up to n using a for loop
void printEvenNumsWhile(int n);     // Prints even numbers up to n using a while loop
void printEvenNumsDoWhile(int n);   // Prints even numbers up to n using a do-while loop
void printEvenNumsWhilev2(int n);   // Prints even numbers up to n using a different while loop

int main(void)
{
	int n;
	printf("enter a number to see even numbers up to it");
	scanf("%d", &n);
	printf("with for: ");
	printEvenNumsFor(n);
	printf("\nwith while: ");
	printEvenNumsWhile(n);
	printf("\nwith while v2: ");
	printEvenNumsWhilev2(n);

	printf("\nwith do while ");
	printEvenNumsDoWhile(n);
	return 0;
}

void printEvenNumsFor(int n)
{
	int i;
	// The for loop consists of three parts:
    // 1. Initialization: Set the starting value of i
    // 2. Condition: Check if i is less than n
    // 3. Increment: Update i after each iteration
	for(i=1; i < n; ++i)
	{
		// loop body
		if(i % 2 == 0)
			printf("%d,", i);	
	}
}

void printEvenNumsWhile(int n)
{
	int i;
	
	i = 1;// Initialize the counter variable
	// The while loop keeps executing as long as the condition is true
	while(i<n)
	{
		// loop body
		if(i%2==0)
			printf("%d,", i);
		//Increment i by 1 
		//(alternative: i++, ++i, i += 1)
		i = i + 1; ////i++; ++i; i+=1;  
	}
}

void printEvenNumsDoWhile(int n)
{
	int i;
	i = 1; // Initialize the counter variable
	// The do-while loop always executes the block at least once
	do
	{
		// loop body
		if(i%2==0)
			printf("%d,", i);	
		i++;// Increment i by 1
	}while(i<n);// Check the condition after each iteration. NOTICE THE SEMICOLON
}


void printEvenNumsWhilev2(int n)
{
	int i;
	// while 
	// init
	// while
	//repeat
	i = 2;// Start from 2 (the first even number)
	while(i<n)
	{
		// loop body
		printf("%d,", i);
		// Increment i by 2 (alternative: i += 2)
		i = i + 2; 
		//i+=2; 
	}
}


