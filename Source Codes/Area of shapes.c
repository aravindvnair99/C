// To calculate area of circle, rectangle and triangle.

#include <stdio.h>

void main()
{
	int a, b, r, ba, h;
	printf("Enter radius of circle:\n");
	scanf("%d", &r);
	printf("Enter width and breadth of rectangle:\n");
	scanf("%d%d", &a, &b);
	printf("Enter the base and height of the triangle:\n");
	scanf("%d %d", &ba, &h);
	printf("The area of circle with radius %d is = %f\n", r, 3.14 * r * r);
	printf("The area of rectangle with width %d and breadth %d is = %d\n", a, b, a * b);
	printf("The area of triangle with height %d and base is %d = %f\n", h, ba, 0.5 * ba * h);
}
