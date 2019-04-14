#include <stdio.h>

void main()
{
	int n, i, flag = 0;
	printf("\nEnter a positive integer: ");
	scanf("%d", &n);

	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (n == 1)
	{
		printf("1 is neither a prime nor a composite number.");
	}
	else
	{
		if (flag == 0)
			printf("%d is a prime number.\n\n", n);
		else
			printf("%d is not a prime number.\n\n", n);
	}
}
