#include <stdio.h>

int main()
{
	//will convert the given seconds
	// to hours minutes seconds 

	// my variables
	int remainingSeconds, seconds, minutes, hours;
	// ask for the seconds (message for the user)
	printf("enter seconds to convert: ");
	// read the input from the user
	scanf("%d", &seconds);
	
	// on the board.
	// i should get the hours out of seconds
	// an hour is a 3600 seconds
	// notice that boths sides are integers
	hours = seconds / 3600;
	// get the remaining seconds
	remainingSeconds = seconds - hours * 3600; //remainingSeconds = seconds % 3600; 
	// now, calculate minutes
	minutes = seconds / 60;
	// get the remaining seconds
	remainingSeconds = seconds % 60; //remainingSeconds = seconds - minutes * 60;
	// print out the result
	printf("%d second(s): %d hour(s) %d minute(s) and %d second(s)", seconds, hours, minutes, remainingSeconds);
	
	return 0;
}
