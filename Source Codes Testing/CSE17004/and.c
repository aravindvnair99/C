#include<stdio.h>
void main()
{
	int a,b;
	char o;
	printf("Enter 2 numbers \n");
	scanf("%d%d",&a,&b);
	printf("Enter the operator \n");
	scanf(" %c",&o);
	switch(o)
	{
		case '+':printf("Sum =%d \n",a+b);
		break;
		case '-':printf("Difference =%d \n",a-b);
		break;
		case '*':printf("Product =%d \n",a*b);
		break;
		case '/':printf("Division =%d \n",a/b);
		default:printf("Invalid Operator \n");
		break;

	}

}

