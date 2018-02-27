#include<stdio.h>
void main()
{
	int a;
	printf("Enter the NUmber : \n");
	scanf("%d",&a);
	if(a%3==0)
	{
		printf("%d is divisible by 3 \n",a);
	}
	else
	{
		printf("%d is not divisible by 3 \n",a);
	}
}
