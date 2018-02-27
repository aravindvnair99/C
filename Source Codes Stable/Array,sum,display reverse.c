#include<stdio.h>
void main()
{
	int sum=0,n,i;
	printf("Enter the number of array elements \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
		sum=sum+a[i];
	}
	printf("\n Sum of array elements is %d \n",sum);
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
	
