#include <stdio.h>

int getAbs(int);

int main(void)
{
	// call-by-value
	int x = -10;
	int y = getAbs(x);
	printf("x after the getAbs function call %d and y is %d", x, y);
	return 0;

}

int getAbs(int x)
{
   if(x < 0)
	 x = -x;
   printf("x in the getABs funciton is %d\n", x);
   return x;
}