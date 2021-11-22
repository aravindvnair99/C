/*
Good practice in C is to separate main(), functions declarations/structs, and function definitions, into different files.
For the example, I will use MFWC.c and MFWC.h. (MFWC = "Multiple Files with C")
~ tkatemb
*/

#include <stdio.h>
#include "MFWC.h" //Include your header file for reference to definitions!

int main(void)
{
	char userName[20];

	printf("Hello, please enter your name (Max 15 Characters): \n");
	scanf("%15s", userName);

	greetingFunction(userName);

	return 0;
}
