#include <stdio.h>

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}

int main(){
	int a, b, result;
	printf("Enter the two numbers to find their GCD: ");
	scanf("%d %d", &a, &b);
	result = gcd(a, b);
	printf("The GCD of %d and %d is %d.\n", a, b, result);
}