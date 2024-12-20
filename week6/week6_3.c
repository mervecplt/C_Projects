#include <stdio.h>

int main(void)
{
	// arrays
	int z = 10;
	printf("z=%d\n", z);
	char x [6]; // i need an array of chars of length 5.
	// i can reach every of them by their indexes starting from 0
	x[0] = 'a';
	x[1] = 'h';
	x[2] = 'm';
	x[3] = 'e';
	x[4] = 't';
	x[5] = '\0';
	//printf("%s", x); // null, the termaniting char for the strings (char arrays)
	//printf("%s\n", x);
	char y [] = {'m', 'u', 'r', 'a', 't', '\0'};
	//printf("%s", y);
	
	for(int i = 0; i  < 10; i++)
	{
		x[i] =  'X';
	}
	printf("z=%d", z);
	return 0;
}