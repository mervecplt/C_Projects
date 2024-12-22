#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void matMult(const int [][20], const int [][20], int [][20], int, int, int, int);
void randomlyAssign(int [][20], int, int);
void printArray(int [][20], int, int);


int main(void)
{

    // multi-dimensional
	int matA [20][20], matB[20][20], matC[20][20];
	int rowA, colA, rowB, colB;
	
	srand(time(NULL));
	
	printf("row A: ");
	scanf("%d", &rowA);
	printf("col A: ");
	scanf("%d", &colA);
	printf("row B: ");
	scanf("%d", &rowB);
	printf("col A: ");
	scanf("%d", &colB);
	
	randomlyAssign(matA, rowA, colA);
	printf("\nA\n");
	printArray(matA, rowA, colA);
	printf("\nB\n");
	randomlyAssign(matB, rowB, colB);
	printArray(matB, rowB, colB);
	printf("\nC\n");
	matMult(matA, matB, matC, rowA, colA, rowB, colB);
	printArray(matC, rowA, colB);
	
	
	return 0;
}


void randomlyAssign(int mat [][20], int rows, int cols)
{
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j=0; j < cols; j++)
		{
			mat[i][j] = rand() % 100;
		}
	}
}

void printArray(int mat [][20], int rows, int cols)
{
	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j=0; j < cols; j++)
		{
			printf(" %d ", mat[i][j]);
		}
		printf("\n");
	}
}



void matMult(const int A [][20], const int B [][20], int C [][20], int rowA, int colA, int rowB, int colB)
{
	if(colA != rowB)
	{
		printf("colA != rowB");
		return;
	}
	int i, j, k;
	// clear C because it may have some previous values
	for(i=0; i < rowA; i++)
		for(j=0; j < colB; j++)
			C[i][j] = 0;
	
	for(i=0; i < rowA; i++)
	{
		for(j=0; j < colB; j++)
		{
			// C[i][j] calculation
			// notice that rowB == colA returns true
			for(k=0;k < colA; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}













