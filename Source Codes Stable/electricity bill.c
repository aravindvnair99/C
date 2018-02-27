#include<stdio.h>
void main()
{
	float units,cost;
	printf("Enter the number of units used ");
	scanf("%f",&units);
	if(units<=50)
	{
		cost=units*0.50;
	}
	else if(units>50 && units<=150)
	{
		cost=((units-50)*0.75)+(50*0.50);
	}
	else if(units>150 && units<=250)
	{
		cost=((units-200)*1.2)+(150*0.75)+(50*0.50);
	}
	else
	{
		cost=units*1.5;
	}
	printf("The cost is: %f",cost);
	
}

