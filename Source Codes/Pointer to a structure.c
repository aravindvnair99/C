#include <stdio.h>

struct student
{
	int age;
	char name[20];
	char branch[15];
};

int main()
{
	struct student s;
	struct student *ptr;
	ptr = &s;
	printf("Enter student's first name: ");
	scanf("%10s", ptr->name);
	printf("Enter student branch: ");
	scanf(" %10s", ptr->branch);
	printf("Enter student's new branch: ");
	scanf("%10s", ptr->branch);
	printf("Student's new branch: %s\n", ptr->branch);
	return 0;
}
