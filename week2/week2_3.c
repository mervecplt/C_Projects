#include <stdio.h>

int main()
{
	// swaping two integers without a third var.
	// can only be applied with integers
	int fBox = 30, sBox = 2;
	printf("before swapping fBox %d sBox %d\n", fBox, sBox);
	// temp is for temporary 
	// you should have a backup there
	// fBox = sBox - fBox;
	// sBox = sBox - fBox;
	// fBox = fBox + sBox;
	
	fBox = sBox * fBox;
	sBox = fBox / sBox;
	fBox = fBox / sBox;
	
	printf("after swapping fBox %d sBox %d\n", fBox, sBox);
	
	return 0;
}