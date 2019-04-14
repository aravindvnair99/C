#include <stdio.h>
void main()
{
	int ele, n, i, pos = -1;
	printf("Enter the number of integer array elements: \n");
	scanf("%d", &n);
	int a[n];
	printf("Enter %d array elements: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the element to be searched: \n");
	scanf("%d", &ele);
	for (i = 0; i < n; i++)
	{
		if (a[i] == ele)
			pos = i;
	}
	if (pos == -1)
		printf("%d is not present in this array.\n", ele);
	else
		printf("%d is present at %d.\n", ele, pos);
}
