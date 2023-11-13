// driving cost
/* pseudocode: 
- define function
- main function:
    - create variables
    - pull user input into variables
    - set precision to print 2 decimal points using fixed and set precision
    - call function 3 times with 3 different values and user input
- driving cost function:
    - calculate the dollar cost per gallon = dollars per gallon * (miles driven / miles per gallon)
*/
#include <iostream>
#include <iomanip>               // For setprecision
using namespace std;

// define function
double DrivingCost(double, double, double);

int main() {
   // create variables
   double milesPerGallon, dollarsPerGallon;
   
   // pull in user input
   cin >> milesPerGallon >> dollarsPerGallon;
   
   // set precision
   cout << fixed << setprecision(2);
   
   // call function with different values
   cout << DrivingCost(milesPerGallon, dollarsPerGallon, 10) << endl;
   cout << DrivingCost(milesPerGallon, dollarsPerGallon, 50) << endl;
   cout << DrivingCost(milesPerGallon, dollarsPerGallon, 400) << endl;
}

// driving cost function
double DrivingCost(double milesPerGallon, double dollarsPerGallon, double milesDriven) {
    return dollarsPerGallon * (milesDriven / milesPerGallon);
}
