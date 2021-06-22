#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Maximum(int a[], int f, int l)
{
	int mid;
	int m1, m2;
	if(f==l)
		return a[f];
	else
	{
		mid=(f+l)/2;
		m1=Maximum(a,f,mid);
		m2=Maximum(a,mid+1,l);
		if (m1>m2)
			return m1;
		else
			return m2;
	}
}
int Minimum(int a[], int f, int l)
{
	int mid;
	int m1, m2;
	if(f==l)
		return a[f];
	else
	{
		mid=(f+l)/2;
		m1=Minimum(a,f,mid);
		m2=Minimum(a,mid+1,l);
		if (m1<m2)
			return m1;
		else
			return m2;
	}
}
int check(char x[])
{
	int l=strlen(x);
	int i;
	int f=1;
	for(i=0;i<l && f==1;i++)
	{
		if(!isdigit(x[i]))
			f=0;
	}
	return f;
}
void main()
{
	int n, *a, i;
	char x[100];
	int max, min;
	while(1)
	{
		printf("Enter the size of the array=> ");
		scanf("%d",&n);
		fflush(stdin);
		if(n>0)
			break;
		else
		{
			printf("Invalid Input\n");
		}
	}
	printf("Enter the datas in the Array\n");
	for(i=0;i<n;i++)
	{
		while(1)
		{
			scanf("%100s",&x);
			fflush(stdin);
			if(check(x)==1)
				break;
			else
			{
				printf("Invalid Input\n");
			}
		}
		int d=atoi(x);
		a[i]=d;
	}
	max=Maximum(a,0,n-1);
	min=Minimum(a,0,n-1);
	printf("Maximum=>%d Minimum=>%d",max,min);
}
