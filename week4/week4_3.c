#include <stdio.h>

void moreOnConditions(void);
int main(void)
{
	moreOnConditions();
	return 0;
}

void moreOnConditions(void)
{
	/*// 0 is for false
	int a=100, b=2, c=3;
	if('x') // evaluates to true
	  printf("a\n");
	if(a<b<c) // evaluates to true
		printf("b\n");
	*/
	/* // you can omit braces {} when there is a single statement
	   // but be careful
	int x = 2;
	if(x == 3)
		if(x == 10){
			printf("a\n");
			printf("b\n");
		}
		else 
			printf("c\n");
	else 
		printf("d\n");
	
	printf("%d", x);
		*/
	/*
	// we use == to check equality
	// below will always evaluate to true unless it is x = 0
	int x = 11;
	if(x = 10)
	{
		printf("%d'dur", x);
	}
	*/
	// do not end if statement with ;
	int x = 100;
	if(x == 1);
	{
		printf("b");
	}
}