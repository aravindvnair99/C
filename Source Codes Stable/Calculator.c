#include <stdio.h>

void main()
	{
		int a, b;
		char op;
		printf("Enter two numbers:\n");
		scanf("%d %d", &a, &b);
		printf("Enter an operand:\n");
		scanf(" %c", &op);
		switch(op)
			{
				case '+':	printf("The sum of %d and %d is %d.\n", a, b, a + b);
							break;
				case '-': 	printf("The subtraction of %d and %d is %d.\n", a, b, a - b);
							break;
				case '*': 	printf("The multiplication of %d and %d is %d.\n", a, b, a * b);
							break;
				case '/': 	printf("The quotient of %d and %d is %d.\n", a, b, a / b);
							break;
				case '%': 	printf("The remainder of %d and %d is %d.\n", a, b, a % b);
							break;
				default: 	printf("Invalid operand.\n");
							break;
			}
	}
