#include <stdio.h>

void main()
{
   int *ptr, n;
   n = 123;
   /* address of n is assigned to ptr */
   ptr = &n;
   /* display n's value using ptr variable */
   printf("Value of n is: %d\n", *ptr);
   printf("Address of n is: %d\n", ptr);
}
