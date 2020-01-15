/*
	 * C Program to Input a String & Store their Ascii Values in an Integer Array & Print the Array
	 */

#include <stdio.h>
void main()
{

	char string[10];
	int n, count = 0;

	printf("Enter the no of characters present in an array \n ");
	scanf("%d", &n);

	printf(" Enter the string of %d characters \n", n);
	scanf("%10s", string);

	while (count < n)
	{
		printf(" %c = %d\n", string[count], string[count]);
		++count;
	}
}
