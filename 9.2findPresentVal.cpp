// find present val
/* pseudocode:
- define functions
- main function:
    - create variables
    - assign read future value function to variable to ask user for future value
    - print value
    - assign read interest function to variable to ask user for annual interest rate 
    - print interest * 100
    - assign read years function to variable to ask user for number of years of investment 
    - print years
    - assign present value to variable
    - call display results function to print all the values
- read future value function:
    - do: 
        - ask user for input future value
        - if statement: if value < 0, print error statement
    - while value < 0 (to keep asking user for input until it is valid)
    - return future value
- read interest function:
    - do: 
        - ask user for input annual interest rate
        - if statement: if interest < 0, print error statement
    - while interest < 0 (to keep asking user for input until it is valid)
    - return interest / 100 (for number value of the percentage)
- read years function:
    - do: 
        - ask user for input number of years
        - if statement: if years <= 0, print error statement
    - while years <= 0 (to keep asking user for input until it is valid)
    - return years
- present value function:
    - calculate present value: future value / ((1 + interest rate) ^ years)
    - return present value
- display results function:
    - print each value using fixed and set precision
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// define functions
double readFutureValue();
double readInterest();
int readYears();
double presentValue(double, double, int);
void displayResults(double, double, double, int);

int main()
{
    // create and assign variables
    double futureVal = readFutureValue();
    double interest = readInterest();
    int years = readYears();
    double presentVal = presentValue(futureVal, interest, years);
    
    // display results using function
    displayResults(presentVal, futureVal, interest, years);
}

// future value
double readFutureValue() {
    // declare variable
    double futureVal;
    
    // ask user to input number of years until input is valid
    do {
        cout << "Enter the future value of the investment: ";
        cin >> futureVal;
        
        // check if input is valid and print error message if not
        if (futureVal < 0) {
            cout << "The future value must be greater than zero." << endl;
        }
    } while (futureVal < 0);
    
    // return value
    return futureVal;
}

// annual interest rate
double readInterest() {
    // declare variable
    double interest;
    
    // ask user to input number of years until input is valid
    do {
        cout << "Enter the annual interest rate: ";
        cin >> interest;
        
        // check if input is valid and print error message if not
        if (interest < 0) {
            cout << "The annual interest rate must be greater than zero." << endl;
        }
    } while (interest < 0);
    
    // return annual interest rate
    return interest / 100;
}

// read years
int readYears() {
    // declare variable
    int years;
    
    // ask user to input number of years until input is valid
    do {
        cout << "Enter the whole number of years of the investment: ";
        cin >> years;
        
        // check if input is valid and print error message if not
        if (years <= 0) {
            cout << "The number of years must be greater than zero." << endl;
        }
    } while (years <= 0);
    
    // return years
    return years;
}

// present value
double presentValue (double futureVal, double interest, int years){
    // return present value using equation given by zylabs: P = F / ((1 + r) ^ n)
    return futureVal / pow((1 + interest), years);
}

// display results
void displayResults (double presentVal, double futureVal, double interest, int years){
    cout << endl;
    cout << fixed << setprecision(2);
    cout << "Present value: $" << presentVal << endl;
    cout << "Future value: $" << futureVal << endl;
    cout << "Annual interest rate: " << fixed << setprecision(3) << interest * 100 << "%" << endl;
    cout << "Years: " << years << endl;
}

