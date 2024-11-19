#include <stdio.h>


int main()
{
	
	// these slashes are for commenting
	// THE BELOW IS FOR SINGLE LINE COMMENTING
	// you should start wiht // when you need comments
	// whenever you need to go to a new line you should retype //
	
	// WHENEVER YOU NEED MULTIPLE LINE FOR COMMENTS, USE /*
	/*
		you can go free here
		
			or even come here type whatever you want 
		
		any comment you put after // or  /* will be ignored by the compiler 

		
		any code you typed here will be skipped too.
		printf("hello world!");
	
	the below ends the multi-line comments
	*/
	
	// first, i need define my variable, age
	// data_type var_name; ->Syntax
	int age; // by doing this, i defined a variable called age whose data type is integer (whole numbers)
	
	// printf is a function that displays the given input on the monitor.
	printf("your age/yasiniz: ");
	// "%d" means that i am expecting an integer from the user
	// &age -> this tells in which variable i am going to keep it.
	// & signifies the address of the age. 
	scanf("%d", &age); // f -> format
	//now, print it back to the user
	// %d sstates that the output will include something integer,
	// age after , supplies that integer as a variable holding the value
	printf("your age is %d", age);
	
	return 0;
}