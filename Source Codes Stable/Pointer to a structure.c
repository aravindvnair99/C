#include<stdio.h>

struct student
{
    char name[50];
    char branch[15];
};

int main()
{
    int n, i;
    struct student s[n];
    struct student *ptr;
    ptr = &s[i];
    printf("Enter student's first name: ");
    scanf("%s", ptr->name);
    printf("Enter student branch: ");
    scanf("%s", ptr->branch);
    printf("Enter student's new branch: ");
    scanf("%s", ptr->branch);
    printf("Student's new branch: %s\n", ptr->branch);
    return 0;
}
