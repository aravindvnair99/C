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
			scanf("%d", & a[i][j]);
		}
	}
	if (r == c) {
		for (i = 0; i < r; i++) {
			for (j = i; j < c; j++) {
				if (a[i][j] == 0) {
					f = 0;
				}
			}
		}
		printf("%d\n", f);
		for (i = 1; i < r; i++) {
			for (j = 0; j < i; j++) {
				if (a[i][j] != 0) {
					f = 0;
				}
			}
		}
		printf("%d\n", f);
		if (f == 1) {
			printf("It is an upper triangular matrix\n");
		} else {
			printf("It is not an upper triangular matrix\n");
		}
	} else {
		printf("It is not a square matrix\n");
	}
}