#include <stdio.h>

int fib(int x) {
	if (x == 0 || x == 1)
		return x;
	else
		return (fib(x - 1) + fib(x - 2));
}

void main() {
	int next, n, i;
	printf("Enter the limit:\n");
	scanf("%d", &n);
	printf("The series is:\n");
	for (i = 0; i <= n; i++) {
		next = fib(i);
		printf("%d\t", next);
	}
}