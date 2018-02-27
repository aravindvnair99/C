#include<stdio.h>
void main()
{
float b;
float a = 1;
void my_test() 
{
  float b = 77;
  printf("float=%f\n",a);
  printf("flaot=%f\n",b);
}
void setup() 
{
  float b = 2;
  printf("float=%f\n",a);
  printf("float=%f\n",b);
  my_test();
  printf("float=%f\n",b);
}
}
