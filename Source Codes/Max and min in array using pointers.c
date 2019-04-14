#include <stdio.h>

void main()
{
	int n, *pa, i, max, min;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n];
	pa = &a[0];
	printf("Enter array elements:\n");
	for (i = 0; i < n; i++)
		scanf("%d", (pa + i));
	max = *pa;
	min = *pa;
	for (i = 0; i < n; i++)
	{
		if (*(pa + i) > max)
			max = *(pa + i);
		if (*(pa + i) < min)
			min = *(pa + i);
	}
	printf("The minimum number is %d.\n", min);
	printf("The maximum number is %d.\n", max);
}
