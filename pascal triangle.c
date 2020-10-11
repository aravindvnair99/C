#include<stdio.h>
int main()
{
	int rows,i,j,space,num=1;
	printf("Enter the number of rows \n");
	scanf("%d",&rows);
	for (i=0;i<=rows;i++)
	{
		for (space=1; space<=rows-i;space++)
		{
			printf("  ");
		}
		for (j=0;j<=i;j++)
		{
			if (j==0||i==0)
			num=1;
			else
			num=num*(i-j+1)/j;
			printf("%4d",num);
		}
		printf("\n");
	}
}
