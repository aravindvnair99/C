#include <stdio.h>

int fact(int x) {
	if (x == 0)
		return 1;
	else
		return x * fact(x - 1);
}

void main() {
	int n, r;
	printf("Enter a number:\n");
	scanf("%d", &n);
	r = fact(n);
	printf("The factorial of %d is %d.\n", n, r);
}