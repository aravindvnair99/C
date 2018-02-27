#include<stdio.h>
void main()
{
	int a,b;
	char o;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("Enter an operand \n");
	scanf(" %c",&o);
	switch(o)
	{
		case '+':printf("The sum of %d and %d is %d",a,b,a+b);
		break;
		case '-':printf("The subtraction of %d and %d is %d",a,b,a-b);
		break;
		case '*':printf("The multiplication of %d and %d is %d",a,b,a*b);
		break;
		case '/':printf("The division of %d and %d is %d",a,b,a/b);
		break;
		default:printf("Wrong input");
		break;
	}
}
