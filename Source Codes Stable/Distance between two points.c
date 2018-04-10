// Distance between two points

#include <stdio.h>
#include <math.h>

struct point {
	int x, int y;
};

void main() {
	struct point p, q;
	int distance;
	printf("Enter x coordinate for point P: ");
	scanf("%d", &p.x);
	printf("Enter y coordinate for point P: ");
	scanf("%d", &p.y);
	printf("Enter x coordinate for point Q: ");
	scanf("%d", &q.x);
	printf("Enter y coordinate for point Q: ");
	scanf("%d", &q.y);
	distance = sqrt((pow(q.x-p.x,2) + pow(q.y-p.y,2)));
	printf("Distance is %d.\n", distance);
}