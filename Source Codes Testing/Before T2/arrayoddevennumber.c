#include<stdio.h>
void main()
{
	int n,*pa,i,max,min,f=0,g=0;
	printf("Enter array size\n");;
	scanf("%d",&n);
	int a[n],even[n],odd[n];
	pa=&a[0];
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(pa+i));
	}
	int j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(*(pa+i)%2==0)
		{
			even[j]=*(pa+i);
			j++;
			f=f+1;
		}
		if(*(pa+i)%2!=0)
		{
			odd[j]=*(pa+i);
			k++;
			g=g+1;
		}
	}
	printf("The even numbers are\n");
	for(i=0;i<f;i++)
	{
		printf("%d \t",even[i]);
	}
	printf("\nThe odd numbers are\n");
	for(i=0;i<g;i++)
	{
		printf("%d \t",odd[i]);
	}
}
	
