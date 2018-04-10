/* Reverse a number using recursion */

#include<stdio.h>
int r = 0;
int reverse(int x)
{
	int k = 0;
	if(x>0)
	{
		k = x%10;
		r = (r*10)+k;
		reverse(x/10);
	}
	else
	{
		return r;
	}
}
void main()
{
	int num,rev;
	printf("Enter a number: ");
	scanf("%d",&num);
	rev = reverse(num);
	printf("The reversed number is %d",rev);
}
