#include<stdio.h>
#include<string.h>
int main()
{
    char c[50],f[256]={0};          // since 256 ASCII characters
    int count=0;
    printf("Enter a string\n");
    scanf("%[^\n]%*c",c);
    for(int i=0;c[i]!='\0';i++)
        f[c[i]]++;
    for(int i=0;i<256;i++)
        if(f[i]!=0)
            count++;
    printf("Number of different types of characters in entered string is %d",count);
    return 0;
}
