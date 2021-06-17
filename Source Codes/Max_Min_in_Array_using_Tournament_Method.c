#include<stdio.h>
#inlcude<stdlib.h>
int maximum(int a[], int f, int l)
{
	int mid=0;
	int m1, m2;
	if(f==l)
	{
		return a[f];
	}
	else
	{
		mid=(f+l)/2;
		m1=maximum(a,f,mid);
		m2=maximum(a,mid+1,l);
		if(m1>m2)
			return m1;
		else
			return m2;
	}
}
void main()
{
	int n, *a, i;
	int max=0;
	int min=0;
	printf("Enter the Size of the array=> ");
	scanf("%d",&n);
	fflush(stdin);
	a=(int*)malloc(sizeof(int)*n);
	printf("Enter the Elements in the Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		fflush(stdin);
	}
	max=maximum(a,0,n-1);
	printf("Maximum=> %d\nMinimum=> %d",max,min);
}
