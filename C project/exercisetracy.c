#include <stdio.h>

int main() {
   float basic_salary, house_allowance, medical_allowance, commuter_allowance, gross_salary, taxable_income, net_salary;
   int is_married;
   const float TAX_RATE_1 = 0.15;
   const float TAX_RATE_2 = 0.20;
   const float TAX_RATE_3 = 0.25;
   const float SINGLE_TAX_RELIEF = 650;
   const float MARRIED_TAX_RELIEF = 1100;

   // Input employee information
   printf("Enter basic salary: ");
   scanf("%f", &basic_salary);

   printf("Enter house allowance: ");
   scanf("%f", &house_allowance);

   printf("Enter medical allowance: ");
   scanf("%f", &medical_allowance);

   printf("Enter commuter allowance: ");
   scanf("%f", &commuter_allowance);

   printf("Are you married? Enter 1 for yes, 0 for no: ");
   scanf("%d", &is_married);

   // Calculate gross salary
   gross_salary = basic_salary + house_allowance + medical_allowance + commuter_allowance;

   // Calculate taxable income and tax charged
   if (is_married == 1) {
      taxable_income = gross_salary - MARRIED_TAX_RELIEF;
    } 
    else {
      taxable_income = gross_salary - SINGLE_TAX_RELIEF;
    }

    if (taxable_income < 5000) {
      net_salary = gross_salary;
    }
    else if (taxable_income > 5000 && taxable_income <= 10000) {
      net_salary = gross_salary - (taxable_income - 24000) * TAX_RATE_2;
    } 
    else if (taxable_income > 10000 && taxable_income <= 20000) {
      net_salary = gross_salary - (taxable_income - 40667) * TAX_RATE_3 - 1667;
    } 
    else {
      net_salary = gross_salary - (taxable_income - 57167) * TAX_RATE_3 - 4167;
   }

   // Output net salary
   printf("Net salary: Ksh %.2f\n", net_salary);

   return 0;
}
