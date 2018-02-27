#include<stdio.h>
char tr;
void car()
{
printf("Single trip or Multiple trip? \n");
		scanf(" %c",&tr);
		switch(tr)
		{
		case 's':printf("The Fare is 55\n");
		break;
		case 'm':printf("The Fare is 80\n");
		break;
		default:printf("Wrong input \n");		
		}
		
}

void bus_truck()
{
printf("Single trip or Multiple trip? \n");
		scanf(" %c",&tr);
		switch(tr)
		{
		case 's':printf("The Fare is 170\n");
		break;
		case 'm':printf("The Fare is 255\n");
		break;
		default:printf("Wrong input \n");		
		}
		
}



void container()
{
printf("Single trip or Multiple trip? \n");
		scanf(" %c",&tr);
		switch(tr)
		{
		case 's':printf("The Fare is 255\n");
		break;
		case 'm':printf("The Fare is 385\n");
		break;
		default:printf("Wrong input \n");		
		}
		
}


void lcv()
{
printf("Single trip or Multiple trip? \n");
		scanf(" %c",&tr);
		switch(tr)
		{
		case 's':printf("The Fare is 85\n");
		break;
		case 'm':printf("The Fare is 125\n");
		break;
		default:printf("Wrong input \n");		
		}
		
}


void main()
{
	char ch;
	printf("Enter the type of Vehicle \n");
	printf("Enter c for car \n");
	printf("Enter b for bus \n");
	printf("Enter t for truck \n");
	printf("Enter T for container \n");
	printf("Enter l for LVC \n");
	scanf(" %c",&ch);
	
	switch(ch)
	{
	case 'c':car();
		break;
	case 'b':bus_truck();
		break;
	case 't':bus_truck();
		break;
	case 'T':container();
		break;
	case 'l':lcv();
		break;
	default:printf("Wrong input \n");
	}
}

