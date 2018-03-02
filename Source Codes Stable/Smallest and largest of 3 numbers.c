#include<stdio.h>

void main()
    {
         int a,b,c;
         printf("Enter 3 numbers:\n");
         scanf("%d %d %d", &a, &b, &c);
         if(a>b && a>c)
            printf("Largest number is a = %d\n", a);
         else if(b>a && b>c)
            printf("Largest number is b = %d\n", b);
         else
            printf("Largest number is c = %d\n", c);
         if(a<b && a<c)
            printf("Smallest number is a = %d\n", a);
         else if(b<a && b<c)
            printf("Smallest number is b = %d\n", b);
         else
            printf("Smallest number is c = %d\n", c);
    }
