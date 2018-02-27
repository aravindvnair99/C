#include<stdio.h>
void main()
{
int a,b,p,q;
float r;
printf("Enter the length and breadth of rectangle\n");
scanf("%d%d",&a,&b);
printf("Area of Rectangle =%d \n",a*b);

printf("Enter the radius \n");
scanf("%f",&r);
printf("Area of Circle =%f \n",3.14*r*r);

printf("Enter the base and height of Triangle \n");
scanf("%d%d",&p,&q);
printf("Area of Triangle =%d \n",(p*q)/2);
}
