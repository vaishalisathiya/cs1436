//lab 1.3

/*pseudocode:
- define two variables of type int and one of type double
- assign 8 to one of the int
- prompt user for whole number and assign to other int
- calculate and display sum by assigning to double variable
- calculate and display product by assigning to double variable
- calculate and display quotient by assigning to double variable
- calculate and display remainder by assigning to double variable
*/

#include <iostream>
using namespace std;

int main() {
   //define two varibles of int and one double
   int num1, num2;
   double num3;
   
   //assign 8 to one of the int
   num1 = 8;
   
   //prompt user for a number and assign to num2
   cout << "Enter a whole number: ";
   cin >> num2;
   
   //calculate and display sum, store result in double
   num3 = num1 + num2;
   cout << "sum = " << num3 << endl;
   
   //display product and advance to next line, store result in double
   num3 = num1 * num2;
   cout << "product = " << num3 << endl;
   
   //find and display integer quotient and advance to next line, store result in double
   num3 = num2 / num1;
   cout << "quotient = " << num3 << endl;
   
   //find and display integer remainder and advance to next line, store result in double
   num3 = num2 % num1;
   cout << "remainder = " << num3 << endl;
}
/*output:
Enter a whole number: 16
sum = 24
product = 128
quotient = 2
remainder = 0
*/
