#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, a, b, c;
    cout << "enter your polynomial values ax^2 + bx + c: " << endl;
    cin >> a >> b >> c;
    x1 = (-b + (sqrt(pow(b,2) - (4*a*c))))/2*a;
    x2 = (-b - (sqrt(pow(b,2) - (4*a*c))))/2*a;
    cout << "the roots of your equation are " << x1 << " and " << x2 << endl;
}