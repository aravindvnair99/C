#include<stdio.h>
void main()
{
	int sum=0,n,i,max;
	printf("Enter the number of array elements \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The maximum number is %d",max);
}
