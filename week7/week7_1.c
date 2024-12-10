#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void drawTriangle(int, char);
void drawTrianglev2(int, char);
void drawSquare(int, char);
void drawTrianglev3(int, char);

int main(void)
{
    // Call drawTriangle to print a left-aligned triangle of height 6 using '*'
	drawTriangle(6, '*');
	printf("\n");
    // Call drawSquare to print a square of size 6x6 using '*'
	drawSquare(6, '*');
	printf("\n");
    // Call drawTrianglev2 to print a right-aligned triangle of height 6 using '*'
	drawTrianglev2(6, '*');
	drawTrianglev3(5, '*');
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
	for(i=0; i < n; i++)// Outer loop controls the rows
	{
		int j;
		for(j=0; j<=i;j++)// Inner loop controls the number of characters per row
		{
		  printf("%c", ch);// Print the character ch
		}
		printf("\n");// Move to the next line after completing a row
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
	for(i=0; i < n; i++)// Outer loop controls the rows
	{
		int j;
		for(j=0; j < n;j++)// Inner loop controls the columns
		{
		  printf("%c", ch);// Print the character ch
        }
        printf("\n"); // Move to the next line after completing a row
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
	for(i=0; i < n; i++)// Outer loop controls the rows
	{
		int j;
		// Print spaces to align the triangle to the right
		for(j=0; j<n-i-1 ;j++)
		{
		  printf("%c", ' ');// Print spaces
		}
        // Print the characters ch to form the triangle		
		for(j=0; j<i+1 ;j++)
		{
		  printf("%c", ch); // Print the character ch
		}
		printf("\n");// Move to the next line after completing a row
	}
}

/*
n=3, ch='*'
  *
 ***
*****
*/
void drawTrianglev3(int n, char ch)
{
	int i; // this is my variable to count up to n-i-1
	for(i = 0; i < n; i++) // "i" will tell me which row I am at
	{
		int j; // j will tell me which column I am at
		for(j = 0; j < n - i - 1; j++)
		{
			printf("%c", ' ');
		}
		for(j = 0; j < 2*i+1; j++)
		{
			printf("%c", ch);
		}
		// i am done with i-th row 
		// so put a newline to go to the next line (next i)
		printf("\n");
	}
}



