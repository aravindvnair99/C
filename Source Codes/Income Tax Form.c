/* 
   TembasFuneral
   Income Tax Program
*/

//Libraries
#include <stdio.h>
#include <stdbool.h>
//Function Declarations
int CalcAGI(int wages, int interest, int unemployment);

int GetDeduction(int marriageStatus);

int GetTaxable(int AGI, int Deduction);

int CalcTax(int status, int taxableIncome);

void CalcTaxDue(int federalTaxAmount, int withheld);
//Main
int main(void) 
{
    //User gen variables
    int userWages;
    int userTaxableInt;
    int userUnempComp;
    int userMarriage;
    int userTaxWith;

    //Prompt for wages, TI, and UC
    printf("Please enter wages, taxable interest, and unemployment compensation: \n");
    scanf("%6d", &userWages);
    scanf("%6d", &userTaxableInt);
    scanf("%6d", &userUnempComp);
    //Prompt for marriage status
    printf("Please enter status (0 dependent, 1 single, 2 married): \n");
    scanf("%2d", &userMarriage);
    //Error check for marriage status
    if (userMarriage != 0 && userMarriage != 1 && userMarriage != 2) 
    {
        printf("Error: Must input status 0 (dependent), 1 (single), or 2 (married).\n");
        return 0;
    }
    //Prompt for taxes withheld
    printf("Please enter taxes withheld: \n");
    scanf("%6d", &userTaxWith);
    //Error check for taxes withheld
    if (userTaxWith < 0) 
    {
        printf("Error: taxes withheld cannont be less than 0.\n");
        return 0;
    }

    //Function generated variables
    int AGI = CalcAGI(userWages, userTaxableInt, userUnempComp);
    int deduction = GetDeduction(userMarriage);
    int taxableIncome = GetTaxable(AGI, deduction);
    int federalTax = CalcTax(userMarriage, taxableIncome);
    //Output
    printf("AGI: $%d\n", AGI);
    printf("Deduction: $%d\n", deduction);
    printf("Taxable Income: $%d\n", taxableIncome);
    printf("Federal Tax: $%d\n", federalTax);
    CalcTaxDue(federalTax, userTaxWith);
    //Tax withheld function call and declaration

    return 0;
}
//Function Definitions
int CalcAGI(int wages, int interest, int unemployment) 
{
    int sum = (wages + interest + unemployment);
    return sum;
}

int GetDeduction(int marriageStatus) 
{
    int deduction;
    //Determines deduction by marriage status conditional
    if (marriageStatus == 0) 
    {
        deduction = 6000;
    }
    else if (marriageStatus == 1) 
    {
        deduction = 12000;
    }
    if (marriageStatus == 2) 
    {
        deduction = 24000;
    }
    return deduction;
}

int GetTaxable(int AGI, int Deduction) 
{
    int taxableInc;
    //Determines how much income is taxable
    taxableInc = AGI - Deduction;
    if (taxableInc < 0) 
    {
        taxableInc = 0;
    }
    return taxableInc;
}

int CalcTax(int status, int taxableIncome) 
{
    int federalTax = NULL;
    //Conditionals determine tax bracket dependent on marriage status and taxable income
    //If single/dependent
    if (status == 0 || status == 1) 
    {
        if (taxableIncome <= 10000) 
        {
            federalTax = (taxableIncome * 0.10);
        }
        else if (taxableIncome <= 40000) 
        {
            federalTax = 1000 + ((taxableIncome - 10000) * 0.12);
        }
        else if (taxableIncome <= 85000) 
        {
            federalTax = 4600 + ((taxableIncome - 40000) * 0.22);
        }
        else 
        {
            federalTax = 14500 + ((taxableIncome - 85000) * 0.24);
        }
    }
    // If married
    else if (status == 2) 
    {
        if (taxableIncome <= 20000) 
        {
            federalTax = (taxableIncome * 0.10);
        }
        else if (taxableIncome <= 80000) 
        {
            federalTax = 2000 + ((taxableIncome - 20000) * 0.12);
        }
        else 
        {
            federalTax = 9200 + ((taxableIncome - 80000) * 0.22);
        }
    }
    return federalTax;
}

void CalcTaxDue(int federalTaxAmount, int withheld) 
{
    int calculation; 
    int status;
    //Does calculation to determine if user owes money or is compensated [status 0 = owed; status 1 = owes]
    calculation = (federalTaxAmount - withheld);
    if (calculation < 0) 
    {
        status = 0;
        calculation = calculation - (calculation * 2);
    }
    else 
    {
        status = 1;
    }
    if (status == 0) 
    {
        printf("Tax Refund: $%d\n", calculation);
    }
    else if (status == 1) 
    {
        printf("Taxes Owed: $%d\n", calculation);
    }
}
