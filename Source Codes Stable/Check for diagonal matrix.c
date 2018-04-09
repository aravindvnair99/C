// To find if a matrix is diagonal or not

#include <stdio.h>
	void main() {
		int r, c, f = 1;
		printf("Enter the number of rows:\n");
		scanf("%d", &r);
		printf("Enter the number of columns:\n");
		scanf("%d", &c);
		int a[r][c], i, j;
		printf("Enter the array elements:\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				printf("Enter the array element for %d, %d:\n", i, j);
				scanf("%d", &a[i][j]);
			}
		}
		printf("The array is:\n");
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}
		if (r == c) {
			for (i = 0; i < r; i++) {
				for (j = 0; j < c; j++) {
					if (i == j) {
						if (a[i][j] == 0)
							f = 0;
					} else {
						if (a[i][j] != 0)
							f = 0;
					}
				}
			}
			if (f == 1) {
				printf("It is a diagonal matrix.\n");
			} else {
				printf("It is not a diagonal matrix.\n");
			}
		} else {
			printf("It is not a square matrix. Only square matrix have the possibility of being a diagonal matrix.\n");
		}
	}