// fair sales calculator
/* pseudocode:
- create normal and constant variables
- ask user for each specific input on how many items were sold
- add up total taxable amount and calculate tax:
    - add everything except water and multiply by .065 to find tax amount
- calculate total profit by adding taxable products, tax, and nontaxable products
- print everything with setprecision, fixed, and setw
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // create variables
    const double CHILI_DOG_PRICE = 8.5;
    const double CORN_DOG_PRICE = 7;
    const double CHIP_BAG_PRICE = 2.5;
    const double SOFT_DRINK_PRICE = 4.5;
    const double BOTTLED_WATER_PRICE = 4;
    const double TAX = 0.065;
    int chiliNum, cornNum, chipNum, drinkNum, waterNum;
    double chiliAmount, cornAmount, chipAmount, drinkAmount, waterAmount, taxable, taxAmount, nonTaxable, total;
    
    // ask user for input
    cout << "How many chili dogs were sold? ";
    cin >> chiliNum;
    cout << "How many corn dogs were sold? ";
    cin >> cornNum;
    cout << "How many bags of chips were sold? ";
    cin >> chipNum;
    cout << "How many soft drinks were sold? ";
    cin >> drinkNum;
    cout << "How many bottles of water were sold? ";
    cin >> waterNum;
    cout << endl;
    
    // calculate total profit from each item
    chiliAmount = chiliNum * CHILI_DOG_PRICE;
    cornAmount = cornNum * CORN_DOG_PRICE;
    chipAmount = chipNum * CHIP_BAG_PRICE;
    drinkAmount = drinkNum * SOFT_DRINK_PRICE;
    waterAmount = waterNum * BOTTLED_WATER_PRICE;
    
    // calculate taxable total and apply tax
    taxable = chiliAmount + cornAmount + chipAmount + drinkAmount;
    taxAmount = taxable * TAX;
    
    // assign water amount to nontaxable
    nonTaxable = waterAmount;
    
    // calculate total amount by adding taxable, tax, and nontaxable
    total = taxable + taxAmount + nonTaxable;
    
    // print all values through setprecision, fixed, and setw
    cout << fixed << setprecision(2);
    cout << setw(15) << left << "Taxable: " << "$" << setw(10) << right << taxable << endl;
    cout << setw(15) << left << "Tax amount: " << "$" << setw(10) << right << taxAmount << endl;
    cout << setw(15) << left << "Non-taxable: " << "$" << setw(10) << right << nonTaxable << endl;
    cout << setw(15) << left << "Total: " << "$" << setw(10) << right << total << endl;
}
/* output:
How many chili dogs were sold? 297
How many corn dogs were sold? 514
How many bags of chips were sold? 205
How many soft drinks were sold? 801
How many bottles of water were sold? 1036

Taxable:       $  10239.50
Tax amount:    $    665.57
Non-taxable:   $   4144.00
Total:         $  15049.07
*/
