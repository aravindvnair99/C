// To make a 2D array in table format by taking user input and printing.

#include <stdio.h>

int main()
{
	int** array, i, j, r, c;
	printf("Enter the number of rows:");
	scanf("%d", &r);
	printf("\n");
	printf("Enter the number of columns:");
	scanf("%d", &c);
	printf("\n");
	array = (int**)malloc(sizeof(int) * r);
	for (i = 0; i < r; i++)
	{
		array[i] = (int*)malloc(sizeof(int) * c);
		for (j = 0; j < c; j++)
		{
			printf("Enter the array element for %d, %d:\n", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	printf("The array is:\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
}
