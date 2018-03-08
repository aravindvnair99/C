#include<stdio.h>
void main()
{
	int r,c,k=0,f=0;
	printf("Enter the number of rows\n");
	scanf("%d",&r);
	printf("Enter the number of columns\n");
	scanf("%d",&c);
	int a[r][c],i,j;
	printf("Enter the array elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i==j)
				{
					if(a[i][j]>0||a[i][j]<0)
					{
						k=k+1;	
					}
				}
				if(i!=j)
				{
					if(a[i][j]=0)
					{
						f=f+1;
					}
					else
					{
						break;
					}
				}
			}
		}
	}
	else
	{
		printf("It is not a square matrix\n");
	}
	printf("k=%d",k);
	printf("f=%d",f);
	if(k==r && f==r)
	{
		printf("It is a diagonal matrix\n");
	}
	else
	{
		printf("It is not a diagonal matrix\n");
	}
}
		
	
					
