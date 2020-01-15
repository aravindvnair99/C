#include <stdio.h>
#include <stdlib.h>

struct dob
{
	int date, month, year;
};

struct stud
{
	int sem;
	char name[20];
	struct dob birth;
};

void main()
{
	int n, i;
	char check;
	printf("\nEnter number of students: ");
	scanf("%d", &n);
	struct stud s[n];
	struct dob birth[n];
	for (i = 1; i <= n; i++)
	{
		printf("\nEnter name of student %d: ", i);
		scanf("%10s", s[i].name);
		printf("Enter semester of student %d: ", i);
		scanf("%d", &s[i].sem);
		printf("Enter day of birth of student %d: ", i);
		scanf("%d", &s[i].birth.date);
		printf("Enter month of birth of student %d: ", i);
		scanf("%d", &s[i].birth.month);
		printf("Enter year of birth of student %d: ", i);
		scanf("%d", &s[i].birth.year);
	}
retrieve:
	printf("\nEnter number of student to retrieve details: ");
	scanf("%d", &i);
	printf("\nName: %10s", s[i].name);
	printf("\nSemester: %d", s[i].sem);
	printf("\nD.O.B.: %d-%d-%d\n", s[i].birth.date, s[i].birth.month, s[i].birth.year);
	printf("\nRetrieve more details?\n\nPress any key and enter to continue and 'n' or 'q' to exit.\n");
	scanf(" %c", &check);
	if (check == 'n' || check == 'q')
		exit(0);
	else
		goto retrieve;
}
