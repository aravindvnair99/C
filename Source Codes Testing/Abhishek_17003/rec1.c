#include<stdio.h>
void ans(int x)
{
	int i=1;
	while(x!=0)
	{
		printf("%d",i);
		ans(x-1);
		i=i++;
	}
}
void main()
{
	int n;
	printf("Enter the limit");
	scanf("%d",&n);
	ans(n);
}
