#include <stdio.h>

#define weeks 4

void main() {
	int hours, rate, pay;
	printf("Enter number of hours worked \n");
	scanf("%d", &hours);
	printf("Enter rate per hours \n");
	scanf("%d", &rate);
	pay = hours*rate*weeks;
	printf("The monthly pay of the employee is: %d",pay);
	
}