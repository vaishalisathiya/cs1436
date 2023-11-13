#include <iostream>
using namespace std;

int main()
{
    double f, c1, c2, c3;
    cout << "Enter your fahrenheit value: " << endl;
    cin >> f;
    c1 = (5 / 9) * (f - 32);
    cout << "Your celcius value 1 is: " << c1 << endl;
    c2 = 5.0 / 9 * f - 32;
    cout << "Your celcius value 2 is: " << c2 << endl;
    c3 = (5.0 / 9) * (f - 32);
    cout << "Your celcius value 3 is: " << c3 << endl;
    
}