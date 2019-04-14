#include <stdio.h>
void main()
{
	int j, t, n, i, max;
	printf("Enter the number of array elements \n");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	printf("The sorted elements are:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
