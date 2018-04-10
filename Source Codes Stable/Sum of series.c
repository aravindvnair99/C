#include<stdio.h>
#include<math.h>

int fact(int p)
	{
		int j, fac = 1;
		for(j=1; j<=p; j++)
		{
			fac = fac * j;
		}
		return fac;	
		
	}

void answer(int x)

	{
		int i;
		float s = 0.0;
		for(i=1; i<=x; i++)
		{
			s = s + ((pow(2,i)) / fact(i+1));
		} 
		printf("The sum is %f.\n",s);
	}

void main()

	{
		int n, i;
		float sum;
		printf("Enter the series:\n");
		scanf("%d", &n);
		answer(n);
	}
