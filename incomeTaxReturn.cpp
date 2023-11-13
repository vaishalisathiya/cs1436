// income tax form
/* pseudocode:
- calculate agi:
    - return the absolute value of wages + interest + unemployment
- get deduction:
    - use switch case statement to switch between possible input values:
        - switch status:
            - case 0: return 6000
            - case 1: return 12000
            - case 2: return 24000
            - default return 6000
- calculate taxable: 
    - return agi - deduction but if that is a negative value then return 0
- calculate tax: 
    - if status is 2:
        - if taxable income is between 1 and 20000:
            - return 10% of income
        - if taxable income is between 20001 and 80000: 
            - reutrn 2000 + 12% of income - 20000
        - if taxable income is over 80000:
            - return 9200 + 22% of income - 80000
    - else:
        - if taxable income is between 1 and 10000:
            - return 10% of income
        - if taxable income is between 10001 and 40000:
            - return 1000 + 12% of income - 10000
        - if taxable income is between 40001 and 85000:
            - return 4600 + 22% of income - 40000
        - if taxable income is over 85000:
            - return 14500 + 24% of income - 85000
- calculate tax due: 
    - return tax - withheld
- main function:
    - print all the values
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Calculate AGI and repair any negative values
int CalcAGI(int wages, int interest, int unemployment) {
   /* Complete the function and update the return statement */
   return abs(wages) + abs(interest) + abs(unemployment);
}

// Calculate deduction depending on single, dependent or married
int GetDeduction(int status) {
   /* Complete the function and update the return statement */
   // switch statement to return values
   switch (status) {
       case 0: return 6000;
               break;
       case 1: return 12000;
               break;
       case 2: return 24000;
               break;
       default: return 6000;
   }
}

// Calculate taxable but not allow negative results
int CalcTaxable(int agi, int deduction) {
   /* Complete the function and update the return statement */
   int taxable = agi - deduction;
   
   // check if taxable is below 0
   if (taxable < 0) {
       return 0;
   } else {
       return taxable;
   }
}

// Calculate tax for single or dependent
int CalcTax(int status, int taxable) {
   /* Complete the function and update the return statement */
   double tax, income = double(taxable);
   
   // return values based on status and range of taxable income
   if (status == 2) {
       if (taxable <= 20000) {
           tax = income * .1;
           return round(tax);
       } else if (taxable <= 80000) {
           tax = 2000 + ((income - 20000) * .12);
           return round(tax); 
       } else {
           tax = 9200 + ((income - 80000) * .22);
           return round(tax); 
       }
   } else {
      if (taxable <= 10000) {
           tax = income * .1;
           return round(tax);
       } else if (taxable <= 40000) {
           tax = 1000 + ((income - 10000) * .12);
           return round(tax); 
       } else if (taxable <= 85000) {
           tax = 4600 + ((income - 40000) * .22);
           return round(tax); 
       } else {
           tax = 14500 + ((income - 85000) * .24);
           return round(tax); 
       }
       
   }
}

// Calculate tax due and check for negative withheld
int CalcTaxDue(int tax, int withheld) {
   /* Complete the function and update the return statement */
   return tax - withheld;
}

int main() {
   int wages, interest, unemployment, status, withheld;
   int tax, agi, due, deduction, taxable;

   // Step #1: Input information
   cin >> wages >> interest >> unemployment >> status >> withheld;
   
   // Step #2: Calculate AGI
   agi = CalcAGI(wages, interest, unemployment);
   cout << "AGI: $" << agi << endl;
   
   // calculate deduction
   deduction = GetDeduction(status);
   cout << "Deduction: $" << deduction << endl;
   
   // calculate taxable
   taxable = CalcTaxable(agi, deduction);
   cout << "Taxable income: $" << taxable << endl;
   
   // calculate federal tax
   tax = CalcTax(status, taxable);
   cout << "Federal tax: $" << tax << endl;
   
   // calculate tax due
   due = CalcTaxDue(tax, withheld);
   cout << "Tax due: $" << due << endl;
   
   return 0;
}

