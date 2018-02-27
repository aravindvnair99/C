#include <stdio.h>

void main()
{
	int x;
	printf("Enter the number: \n");
	scanf("%d", &x);
	if(x == 0)
		printf("Neither Even nor Odd \n");
	else
		{
			
			if(x%2==0)
				{
					printf("Even number");
					if(x%4==0)
						printf("Divisible by 4");
					else	
						printf("Not Divisible by 4");
				}
			else
				printf("Odd Number");
		}

}
