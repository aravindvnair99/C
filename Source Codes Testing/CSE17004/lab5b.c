#include<stdio.h>
#include<math.h>

int fact(int p)
{	
	int fac;
	fac=1;
	for(int j=1;j<=p;j++)
	{
	fac=fac*j;
	}
	return fac;
}


void sum(int q)
{	
	float sum=0.0;
	for(int i=1;i<=q;i++)
	{
		sum=sum+((pow(2,i))/fact(i+1));
	}
	printf("Sum=%f",sum);
}

void main()
{
	int n,i;
	float s;
	printf("Enter the nth term \n");
	scanf("%d",&n);
	sum(n);
	
}


