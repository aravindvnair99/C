/* Write a program to print the odd numbers and even numbers of an array separately using pointers */

#include <stdio.h>

void main() {
	int n, *pa, i, max, min, f=0, g=0;
	printf("Enter array size: ");
	scanf("%d", &n);
	int a[n], even[n], odd[n];
	pa = &a[0];
	printf("Enter array elements: ");
	for(i=0; i<n; i++) {
		scanf("%d", (pa+i));
	}
	int j=0, k=0;
	for(i=0; i<n; i++) {
		if(*(pa+i)%2 == 0) {
			even[j] = *(pa+i);
			j++;
			f++;
		}
		if(*(pa+i)%2 != 0) {
			odd[k] = *(pa+i);
			k++;
			g++;
		}
	}
	printf("\nThe even numbers are:\n\n");
	for(i=0; i<f; i++)
	{
		printf("%d\t", even[i]);
	}
	printf("\n\nThe odd numbers are:\n\n");
	for(i=0; i<g; i++)
	{
		printf("%d\t",odd[i]);
	}
}