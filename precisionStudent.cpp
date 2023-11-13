//precision student
/* pseudocode
assign values to x, y, z, c, and d
print each value with said formatting
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 28.45678;
    double y = 42.98;
    double z = 123456.78915;
    double c = 123.4,  d = 12;
    
    // print x and y
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    
    // with precision 1
    cout << setprecision(1);
    cout << "\nWith precision 1: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    
    // with precision 2
    cout << setprecision(2);
    cout << "\nWith precision 2: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    
    // with precision 3
    cout << setprecision(3);
    cout << "\nWith precision 3: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    
    // with precision 4
    cout << setprecision(4);
    cout << "\nWith precision 4: " << endl;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    
    // with precision 5 and setw(8)
    cout << setprecision(5);
    cout << "\nWith precision 5 and setw(8): " << endl;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;
    
    // print c and d
    cout << "\nC is " << c << endl;
    cout << "D is " << d << endl;
    
    // with precision 5 and setw(8)
    cout << "\nWith precision 5 and setw(8): " << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;
    
    // with precision 5, showpoint, and setw(8)
    cout << showpoint;
    cout << "\nWith precision 5, showpoint, and setw(8): " << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;
    
    // with precision 5, noshowpoint, and setw(8)
    cout << noshowpoint;
    cout << "\nWith precision 5, noshowpoint, and setw(8): " << endl;
    cout << "C is " << setw(8) << c << endl;
    cout << "D is " << setw(8) << d << endl;
    
    // with precision 2, fixed, and setw(8)
    cout << setprecision(2);
    cout << fixed;
    cout << "\nWith precision 2, fixed, and setw(8): " << endl;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;
    
    // with precision 5 and showpoint
    cout << setprecision(5);
    cout << showpoint;
    cout << "\nWith precision 5 and showpoint: " << endl;
    cout << "C is " << c << endl;
    cout << "D is " << d << endl;
    
    // with precision 3, fixed, setw(4), and left justified
    cout << setprecision(3);
    cout << fixed;
    cout << "\nWith precision 3, fixed, setw(4), and left justified: " << endl;
    cout << "X is " << left << setw(4) << x << endl;
    cout << "Y is " << left << setw(4) << y << endl;
    cout << "Z is " << left << setw(4) << z << endl;
    
    // with precision 3, fixed, and left justified
    cout << "\nWith precision 3, fixed, and left justified: " << endl;
    cout << "X is " << left << x << endl;
    cout << "Y is " << left << y << endl;
    cout << "Z is " << left << z << endl;
    
    // with precision 3, setw(8), fixed, and right justified
    cout << "\nWith precision 3, setw(8), fixed, and right justified: " << endl;
    cout << "X is " << right << setw(8) << x << endl;
    cout << "Y is " << right << setw(8) << y << endl;
    cout << "Z is " << right << setw(8) << z << endl;
}

/* output:
X is 28.4568
Y is 42.98

With precision 1: 
X is 3e+01
Y is 4e+01

With precision 2: 
X is 28
Y is 43

With precision 3: 
X is 28.5
Y is 43

With precision 4: 
X is 28.46
Y is 42.98

With precision 5 and setw(8): 
X is   28.457
Y is    42.98
Z is 1.2346e+05

C is 123.4
D is 12

With precision 5 and setw(8): 
C is    123.4
D is       12

With precision 5, showpoint, and setw(8): 
C is   123.40
D is   12.000

With precision 5, noshowpoint, and setw(8): 
C is    123.4
D is       12

With precision 2, fixed, and setw(8): 
X is    28.46
Y is    42.98
Z is 123456.79

With precision 5 and showpoint: 
C is 123.40000
D is 12.00000

With precision 3, fixed, setw(4), and left justified: 
X is 28.457
Y is 42.980
Z is 123456.789

With precision 3, fixed, and left justified: 
X is 28.457
Y is 42.980
Z is 123456.789

With precision 3, setw(8), fixed, and right justified: 
X is   28.457
Y is   42.980
Z is 123456.789
*/

