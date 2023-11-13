// overloading functions
/* pseudocode:
- call function prototypes
- bring user input into all the variables (ints and doubles)
- print values called into functions
- max of two ints:
    - if a > b then return a else return b
- max of two doubles:
    - if a > b then return a else return b
- max of three doubles:
    - if a > b and c, return a, else if b > a and c, return b, else return c
*/
#include <iostream>
using namespace std;

// function prototypes
int max(int, int);
double max(double, double);
double max(double, double, double);

int main()
{
    // create variables
    int num1, num2, max1;
    double num3, num4, num5, max2;
    
    // bring user input into variables
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    
    // print out function return values
    cout << max(num1, num2) << endl;
    cout << max(num3, num4, num5) << endl;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double max(double a, double b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

double max(double a, double b, double c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
