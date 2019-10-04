/**
 * C program to find lower triangular matrix
 */

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
	int array[MAX_ROWS][MAX_COLS];
	int row, col, isLower;

	/* Input elements in matrix from user */
	printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
	for (row = 0; row < MAX_ROWS; row++)
	{
		for (col = 0; col < MAX_COLS; col++)
		{
			scanf("%d", &array[row][col]);
		}
	}

	/* Check whether the matrix is lower triangular matrix */
	isLower = 1;
	for (row = 0; row < MAX_ROWS; row++)
	{
		for (col = 0; col < MAX_COLS; col++)
		{
			/*
             * If elements above main diagonal(col>row)
             * is not equal to zero(array[row][col]!=0)
             */
			if (col > row && array[row][col] != 0)
			{
				isLower = 0;
			}
		}
	}

	/*
     * If matrix is lower triangular matrix
     */
	if (isLower == 1)
	{
		printf("\nMatrix is Lower triangular matrix: \n");

		/* Print elements of lower triangular matrix */
		for (row = 0; row < MAX_ROWS; row++)
		{
			for (col = 0; col < MAX_COLS; col++)
			{
				printf("%d ", array[row][col]);
			}

			printf("\n");
		}
	}
	else
	{
		printf("\nMatrix is not a Lower triangular matrix");
	}

	return 0;
}
