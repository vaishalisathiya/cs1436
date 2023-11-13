// circle
/* pseudocode: 
- write function prototypes
- create global constant variable for pi
- ask user for input of radius
- if statement (if radius  <= 0)
    - if radius is less than or equal to zero, print "invalid radius"
    - else call and print diameter, area, and circumference
diameter function:
- diameter = radius * 2
- calculate and return diameter
area function:
- area = pi * radius * radius
- calculate and return area
circumference function:
- circumference = 2 * pi * radius
- calculate and return circumference
*/
#include <iostream>
#include <math.h>
using namespace std;

// function prototypes
double diameter(double);
double area(double);
double circumference(double);

// global constant variable
const double PI = 3.14;

int main()
{
    // create variables
    double radius;
    
    // ask user to enter a value for the radius
    cout << "Enter a radius value: ";
    cin >> radius;
    
    // check if radius is valid
    if (radius <= 0) {
        cout << "Invalid Radius.";
    } else {
        cout << "Diameter is " << diameter(radius) << endl;
        cout << "Area is " << area(radius) << endl;
        cout << "Circumference is " << circumference(radius) << endl;
    }
}

// diameter function
double diameter(double radius) {
    // calculate and return diameter
    return 2 * radius;
}

// area function
double area(double radius) {
    // calculate and return area
    return PI * radius * radius;
}

// circumference function
double circumference(double radius) {
    // calculate and return circumference
    return 2 * PI * radius;
}
/* output: 
Enter a radius value: 2.3
Diameter is 4.6
Area is 16.6106
Circumference is 14.444
*/

