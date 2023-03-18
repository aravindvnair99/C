#include <stdio.h>

// Function prototypes
int calcAGI(int wages, int interest, int unemployment);
int getDeduction(int marriageStatus);
int getTaxable(int AGI, int deduction);
int calcTax(int status, int taxableIncome);
int calcTaxDue(int federalTaxAmount, int withheld)
{
	 return withheld - federalTaxAmount;
}
int main() {
    // User input variables
    int userWages, userTaxableInt, userUnempComp, userMarriage, userTaxWith;
    // Prompt for user input
    printf("Please enter wages, taxable interest, and unemployment compensation: \n");
    scanf("%d %d %d", &userWages, &userTaxableInt, &userUnempComp);
    printf("Please enter status (0 dependent, 1 single, 2 married): \n");
    scanf("%d", &userMarriage);
    printf("Please enter taxes withheld: \n");
    scanf("%d", &userTaxWith);

    // Calculate AGI, deduction, taxable income, and federal tax
    int AGI = calcAGI(userWages, userTaxableInt, userUnempComp);
    int deduction = getDeduction(userMarriage);
    int taxableIncome = getTaxable(AGI, deduction);
    int federalTax = calcTax(userMarriage, taxableIncome);
    // Print out calculations
    printf("AGI: $%d\n", AGI);
    printf("Deduction: $%d\n", deduction);
    printf("Taxable Income: $%d\n", taxableIncome);
    printf("Federal Tax: $%d\n", federalTax);

    // Calculate tax due or refund
    int taxDue = calcTaxDue(federalTax, userTaxWith);

    // Print out tax due or refund
    if (taxDue < 0) {
        printf("You are entitled to a refund of $%d.\n", -taxDue);
    } else if (taxDue > 0) {
        printf("You owe $%d in taxes.\n", taxDue);
    } else {
        printf("You have no tax due or refund.\n");
    }

 return  0;
 }

// Function definitions
int calcAGI(int wages, int interest, int unemployment) {
    return wages + interest + unemployment;
}

int getDeduction(int marriageStatus) {
    int deduction = 0;
    switch (marriageStatus) {
        case 0:
            deduction = 6000;
            break;
        case 1:
            deduction = 12000;
            break;
        case 2:
            deduction = 24000;
            break;
        default:
            printf("Error: Must input status 0 (dependent), 1 (single), or 2 (married).\n");
            break;
    }
    return deduction;
}

int getTaxable(int AGI, int deduction) {
    int taxableIncome = AGI - deduction;
    if (taxableIncome < 0) {
        taxableIncome = 0;
    }
    return taxableIncome;
}

int calcTax(int status, int taxableIncome)
{


    int federalTax = 0;
    if (status == 0 || status == 1) {
	
        if (taxableIncome <= 10000) {
            federalTax = taxableIncome * 0.10;
        } else if (taxableIncome <= 40000) {
            federalTax = 1000 + (taxableIncome - 10000) * 0.12;
        } else if (taxableIncome <= 85000) {
            federalTax = 460;}
        }
    }
