#include<stdio.h>

int n;

void num(int x)
{
	if(x==0)
	{
		break;
	}
	else
	{
		printf("%d \t",x);
		x=x-1;
		num(x);
	}
}

void main()
{
	printf("Enter the upper limit \n");
	scanf("%d",&n);
	num(n);
	
}
