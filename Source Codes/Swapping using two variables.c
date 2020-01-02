#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two no.s");
    scanf("%d%d",&x,&y);
    x=x+y-(y=x);
    printf("After swapping no.s are %d and %d ",x,y);
}

