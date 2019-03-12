#include <stdio.h>
#define pf printf
#define sf scanf

void main() {
	int a;
	pf("Enter a number");
	sf("%d",&a);
	pf("Number is %d ", a);
}
