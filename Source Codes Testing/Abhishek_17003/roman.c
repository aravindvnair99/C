#include<stdio.h>
void main()
{
	char c;
	printf("Enter I for one \n");
	printf("Enter V for five \n");
	printf("Enter X for ten \n");
	printf("Enter L for fifty \n");
	printf("Enter C for hundered \n");
	printf("Enter M for thousand \n");
	printf("Enter D for five hundered \n");
	scanf("%c",&c);
	switch(c)
	{
		case 'I':
		printf("One \n");
		break;
		case 'V':
		printf("Five \n");
		break;
		case 'L':
		printf("Fifty \n");
		break;
		case 'X':
		printf("Ten \n");
		break;
		case 'C':
		printf("Hundered \n");
		break;
		case 'D':
		printf("Five hundered \n");
		break;
		case 'M':
		printf("Thousand \n");
		break;
		default:
		printf("Enter a proper Letter");
		break;
		
	}
}

