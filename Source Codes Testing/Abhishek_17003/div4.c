#include <stdio.h>

void main()
{
	int n;
	printf("Enter a number \n");
	scanf("%d",&n);
	if(n%2==0)
	{
		if(n%4==0)
		{
			printf("The number is divisible by 4 \n");
		}
		else
		{
			printf("The number is divisible by 2 but not by 4 \n");
		}
	}
	else
	{
		printf("%d is a odd number \n",n);
	}
	
}
	
