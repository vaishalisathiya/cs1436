// currency converter
/* pseudocode:
- create constant and normal variables
- ask user for input in usd
- use constants to calculate conversion values:
    - 1 usd = 1.35 cad
    - 1 usd = 18.36 mxn
    - 1 usd = 0.829 gbp
- print converted currency using setprecision, setwidth, and fixed
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // create variables
    const double CANADIAN_DOLLAR = 1.35;
    const double MEXICAN_PESO = 18.36;
    const double GB_POUND = 0.829;
    double usd, cad, mxn, gbp;
    
    // ask user for input in usd
    cout << "Enter an amount in US dollars: ";
    cin >> usd;
    
    //convert usd to cad, mxn, and gbp
    cad = usd * CANADIAN_DOLLAR;
    mxn = usd * MEXICAN_PESO;
    gbp = usd * GB_POUND;
    
    //use setprecision and fixed to only print 2 decimal values
    cout << fixed << setprecision(2);
    
    //print values using setwidth
    cout << endl;
    cout << setw(12) << "Dollars" << "\t" << setw(12) << "CAD" << "\t" << setw(12) << "Pesos" << "\t" << setw(12) << "GBP" << endl;
    cout << setw(12) << usd << "\t" << setw(12) << cad << "\t" << setw(12) << mxn << "\t" << setw(12) << gbp << endl;
}
/* output:
Enter an amount in US dollars: 59.27

     Dollars             CAD           Pesos             GBP
       59.27           80.01         1088.20           49.13
*/
