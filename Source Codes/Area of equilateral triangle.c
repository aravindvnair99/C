#include<stdio.h>
#include<math.h>
int main()
{
	int s;
	float a;
	printf("Enter side length of equilateral triangle ");
	scanf("%d",&s);
	a=(sqrt(3)*s*s)/4;
	printf("Area of triangle is %.2f",a);
	return 0;
}
