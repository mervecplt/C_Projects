#include <stdio.h>



int main()
{
	// swaping two integers
	int fBox = 10, sBox = 30, temp;
	printf("before swapping fBox %d sBox %d\n", fBox, sBox);
	// temp is for temporary 
	// you should have a backup there
	temp = fBox;
	fBox = sBox;
	sBox = temp;
	printf("after swapping fBox %d sBox %d\n", fBox, sBox);
	
	return 0;
}