#include <iostream>
using namespace std;

int main()
{
    double p, tax;
    cout << "Enter purchase amount: " << endl;
    cin >> p;
    tax = p * 0.06;
    cout << "Tax is: " << tax << endl;
    cout << "Sales tax in percentage: " << static_cast<int>(tax * 100)/100.0 << endl;
    cout << "Sales tax in percentage: " << (int)(tax * 100)/100.0 << endl;
    
}
