/*  To generate electricity bill based on units consumed.

	Units       Description       Cost per unit
	 <50        First 50 units        0.50
	50-150      Next 100 units        0.75
	150-250     Next 100 units        1.2
	 >250       Remaining units       1.5
*/

#include <stdio.h>

void main() {
	float units, cost;
	printf("Enter the number of units consumed:\n");
	scanf("%f", &units);
	if (units <= 50) {
		cost = units * 0.50;
	} else if (units > 50 && units <= 150) {
		cost = ((units - 50) * 0.75) + (50 * 0.50);
	} else if (units > 150 && units <= 250) {
		cost = ((units - 150) * 1.2) + (100 * 0.75) + (50 * 0.50);
	} else {
		cost = units * 1.5;
	}
	printf("The cost is: %f\n", cost);
}