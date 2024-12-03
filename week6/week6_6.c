#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void drawTriangle(int, char);
void drawTrianglev2(int, char);
void drawSquare(int, char);

int main(void)
{
	drawTriangle(6, '*');
	printf("\n");
	drawSquare(6, '*');
	printf("\n");
	drawTrianglev2(6, '*');
	return 0;

}

/*
n = 3, ch = '*'
*
**
***

*/
void drawTriangle(int n, char ch) 
{
	int i;
	for(i=0; i < n; i++)
	{
		int j;
		for(j=0; j<=i;j++)
		{
		  printf("%c", ch);
		}
		printf("\n");
	}
}
/*
n = 3, ch = '*'
***
***
***

*/

void drawSquare(int n, char ch)
{
	int i;
	for(i=0; i < n; i++)
	{
		int j;
		for(j=0; j < n;j++)
		{
		  printf("%c", ch);
		}
		printf("\n");
	}
}
/*
n = 3, ch = '*'
  *
 **
***

*/
void drawTrianglev2(int n, char ch) 
{
	int i;
	for(i=0; i < n; i++)
	{
		int j;
		for(j=0; j<n-i-1 ;j++)
		{
		  printf("%c", ' ');
		}
		for(j=0; j<i+1 ;j++)
		{
		  printf("%c", ch);
		}
		
		printf("\n");
	}
}





