#include <stdio.h>

void countEvenToN_for(int);
void countEvenToN_while(int);
void countEvenToN_doWhile(int);

int main(void)
{
	int n;
	
	printf("list even numbers of to n");
	scanf("%d", &n);
	printf("with for: ");
	countEvenToN_for(n);
	printf("\nwith while: ");
	countEvenToN_while(n);
	printf("\nwith do while ");
	countEvenToN_doWhile(n);
	
	return 0;
}
void countEvenToN_for(int n)
{
	int i;
	// Remember anything other than 0 is true
	// Infinite loop: Will run until a break statement is encountered
	for(i=1; 1 ; i++)
	{
		if(i>n)
			break; // Exit the loop if i exceeds n
		if(i%2==1)
			continue; // Skip the rest of the loop for odd numbers
		printf("%d,",i);
	}
}

void countEvenToN_while(int n)
{
	int i=0;// Initialize the loop variable
	// Remember anything other than 0 is true
	// Infinite loop: Will run until a break statement is encountered
	while(1)
	{
		i++; // Increment i at the beginning of each iteration
		if(i>n)
			break; // Exit the loop if i exceeds n
		if(i%2==1)
			continue; // Skip the rest of the loop for odd numbers
		printf("%d,",i);
	}
}

void countEvenToN_doWhile(int n)
{
	int i=0;// Initialize the loop variable
	// Remember anything other than 0 is true
	// Infinite loop: Will run until a break statement is encountered
	do
	{
		i++; // Increment i at the beginning of each iteration
		if(i>n)
			break; // Exit the loop if i exceeds n
		if(i%2==1)
			continue; // Skip the rest of the loop for odd numbers
		printf("%d,",i);
	}while(1); // Continue looping indefinitely unless break is encountered
}