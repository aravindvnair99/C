#include<stdio.h>
int sum(int n,int c)
{
   c+=n%10;
   if(n==0)return c;
   else return sum(n/10,c);
}
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Sum of digits of that number is %d\n",sum(n,0));
}
