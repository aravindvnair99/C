#include<stdio.h>

void main()
{
	char c;
	printf("Enter a Roman letter to convert to decimal value:\n");
	scanf("%c", &c);
	switch(c)
	{
		case 'I':
		printf("One or 1.\n");
		break;
		case 'V':
		printf("Five or 5.\n");
		break;
		case 'L':
		printf("Fifty or 50.\n");
		break;
		case 'X':
		printf("Ten or 10.\n");
		break;
		case 'C':
		printf("Hundered or 100.\n");
		break;
		case 'D':
		printf("Five hundered or 500.\n");
		break;
		case 'M':
		printf("Thousand or 1000.\n");
		break;
		default:
		printf("Invalid roman letter.\n");
		break;
	}
}
