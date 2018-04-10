#include <stdio.h>

void main() {
	int x;
	printf("Enter the number:\n");
	scanf("%d", &x);
	if (x == 0)
		printf("Neither even nor odd.\n");
	else {
		if (x % 2 == 0) {
			printf("Even number.\n");
			if (x % 4 == 0)
				printf("Divisible by 4.\n");
			else
				printf("Not exactly divisible by 4.\n");
		} else
			printf("Odd number and not exactly divisible by 4.\n");
	}
}