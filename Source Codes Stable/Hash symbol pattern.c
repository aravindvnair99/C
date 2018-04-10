#include <stdio.h>

void main() {
	int i, j, n;
	printf("Enter number of lines:\n");
	scanf("%d", &n);
	for (i = 0; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("#\t");
		}
		printf("\n");
	}
}