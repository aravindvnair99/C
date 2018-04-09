/* 	Read n employees' details like name, employee id and Basic salary using structure
    and then print the entered values. (Use array of structures)
    EMPLOYEE GROSS SALARY CALCULATION:  Extend the employee structure program
    in practice question to  calculate  Gross salary (Basic +HRA+DA) for every
    employee according to given conditions:
  
    Basic Salary >= 10000 : HRA = 20% of Basic, DA = 80% of Basic
    Basic Salary >= 20000 : HRA = 25% of Basic DA = 90% of Basic
    Basic Salary >= 30000 : HRA = 30% of Basic, DA = 95% of Basic
*/

#include <stdio.h>

struct employee {
    char name[50];
    int id;
    long int basic;
    float hra;
    float da;
    long int gross;
};

void main()
    {   
        int n;
        printf("Enter the number of employees: ");
        scanf("%d", &n);
        struct employee emp[n];
        for (int i=0;i<n;i++)
            {
                printf("\nEnter employee name: ");
                scanf(" %[^\n]s", emp[i].name);
                printf("Enter employee ID: ");
                scanf("%d", &emp[i].id);
                printf("Enter the salary: ");
                scanf("%ld", &emp[i].basic);
                if (emp[i].basic >= 10000 && emp[i].basic < 20000)
                    {
                        emp[i].hra = 0.2 * emp[i].basic;
                        emp[i].da = 0.8 * emp[i].basic;
                    }
                else if (emp[i].basic >= 20000 && emp[i].basic < 30000)
                    {
                        emp[i].hra = 0.25 * emp[i].basic;
                        emp[i].da = 0.9 * emp[i].basic;
                    }
                else if (emp[i].basic >= 30000)
                    {
                        emp[i].hra = 0.3 * emp[i].basic;
                        emp[i].da = 0.95 * emp[i].basic;
                    }
                emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
            }
        for(int i=0; i<n; i++)
            {
                printf("\nEmployee name: %s", emp[i].name);
                printf("\nEmployee ID: %d", emp[i].id);
                printf("\nGross: %ld\n", emp[i].gross);
            }
    }