// Check for upper triangular matrix.

#include <stdio.h>

void main() {
	int r, c, f = 1;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	printf("\nEnter the number of columns: ");
	scanf("%d", &c);
	int a[r][c], i, j;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			printf("\nEnter the array element for %d, %d: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	if (r == c) {
		for (i = 0; i < r; i++) {
			for (j = i; j < c; j++) {
				if (a[i][j] == 0)
					f = 0;
			}
		}
		for (i = 1; i < r; i++) {
			for (j = 0; j < i; j++) {
				if (a[i][j] != 0)
					f = 0;
			}
		}
		printf("\nThe array is:\n\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
			        printf("%d \t", a[i][j]);
			}
			printf("\n");
		}
		if (f == 1) {
			printf("\nIt is an upper triangular matrix.\n");
		} else {
			printf("\nIt is not an upper triangular matrix.\n");
		}
	} else {
		printf("It is not a square matrix.\n");
	}
}