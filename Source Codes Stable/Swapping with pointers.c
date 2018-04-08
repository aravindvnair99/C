#include <stdio.h>
void swap(int *px, int *py)
{
	*px = *px + *py;
	*py = *px - *py;
	*px = *px - *py;
}
void main()
{
	int a, b, *pa, *pb;
	printf("Enter two numbers: \n");
	scanf("%d %d", &a, &b);
	pa = &a;
	pb = &b;
	printf("Before swapping, a is %d and b is %d.\n", a, b);
	swap(pa,pb);
	printf("After swapping, a is %d and b is %d.\n", a, b);
}
