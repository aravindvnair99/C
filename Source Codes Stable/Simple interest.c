#include<stdio.h>
void main()
{
	int p;
	float r,t,si;
	printf("Input the principle amount: \n");
	scanf("%d",&p);
	printf("Input the time: \n");
	scanf("%f",&t);
	printf("Input the rate of interest: \n");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("The principle amount is %d \n",p);
	printf("The time is %f \n",t);
	printf("The rate of interest is %f \n",r);
	printf("The computed Simple Interest is %f \n",si);
}      
