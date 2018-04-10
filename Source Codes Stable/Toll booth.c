#include<stdio.h>

char tr;

void car()

	{
		printf("Enter the type of trip:\n");
		printf("Enter 's' for single and 'm' for multiple:\n");
		scanf(" %c", &tr);
		switch(tr)
			{
			case 's':	printf("The cost of ticket is 55.\n");
						break;
			case 'm':
						printf("The cost is 80.\n");
						break;
			default:
						printf("Invalid input.\n");
						break;
			}	
	}

void bus_truck()

	{
		printf("Enter the type of trip:\n");
			printf("Enter 's' for single and 'm' for multiple:\n");
			scanf(" %c",&tr);
			switch(tr)
			{
				case 's':
				printf("The cost of ticket is 170.\n");
				break;
				case 'm':
				printf("The cost is 255.\n");
				break;
				default:
				printf("Invalid input.\n");
				break;
			}
	}

void contain()

	{
		printf("Enter the type of trip:\n");
			printf("Enter 's' for single and 'm' for multiple:\n");
			scanf(" %c",&tr);
			switch(tr)
			{
				case 's':	printf("The cost of ticket is 255");
							break;
				case 'm':	printf("The cost is 385");
							break;
				default:	printf("Invalid input.\n");
							break;
			}
	}

void LCV()
{
	printf("Enter the type of trip \n");
		printf("Enter s for single \n m for multiple");
		scanf(" %c",&tr);
		switch(tr)
		{
			case 's':
			printf("The cost of ticket is 85");
			break;
			case 'm':
			printf("The cost is 125");
			break;
			default:
			printf("Invalid input.\n");
			break;
		}
}

void main()
{
	char k, tr;
	printf("Enter the type of vehicle: \n");
	printf("Enter c for car.\n");
	printf("Enter b for bus.\n");
	printf("Enter t for truck.\n");
	printf("Enter T for containment truck.\n");
	printf("Enter L for LCV.\n");
	scanf("%c",&k);
	switch(k)
	{
		case 'c':	car();
					break;
		case 't':
		case 'b':	bus_truck();
					break;
		case 'T':	contain();
					break;
		case 'L':	LCV();
					break;
		default:	printf("Invalid input.\n");
					break;
	}
}
