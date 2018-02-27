#include<stdio.h>

void main()
	{
		int a, b, c;
		printf("Enter three numbers:\n");
		scanf("%d %d %d", &a, &b, &c);
		if(a>b && a>c)
			{
				printf("The greatest number is: %d.\n", a);
			}
		if(b>c && b>a)
			{
				printf("The greatest number is: %d.\n", b);
			}
		if(c>b && c>a)
			{
				printf("The greatest number is: %d.\n", c);
			}
		if(a<b && a<c)
			{
				printf("The smallest number is: %d.\n", a);
			}
		if(b<c && b<a)
			{
				printf("The smallest number is: %d.\n", b);
			}
		if(c<b && c<a)
			{
				printf("The smallest number is: %d.\n", c);
			}
		
	}
