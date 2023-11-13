// circle reference
/* pseduocode: 
- establish function prototypes
- create variables
- ask user for input
- check if the radius is valid using an if statement;
    -if radius <= 0, print error statement, else call circle function
circle function: 
- create cinstant doubel variable of PI
- calculate circumference: 2(PI)(radius)
- calculate diameter: 2(radius)
- calculate area: PI(radius^2)
- print all three values
*/
#include <iostream>
using namespace std;

// function prototype
void circle(double, double = 0, double = 0, double = 0);
int main() {
   // create variables
   double radius;
   
   // ask user for radius input
   cout << "Enter a radius value: ";
   cin >> radius;
   
   // check if the radius is valid
   if (radius <= 0) {
       cout << "Invalid Radius" << endl;
   } else {
       // call function to print values
       circle(radius);
   }
}

void circle(double radius, double circ, double dia, double area) {
    // create double variable
    const double PI = 3.14;
    
    // calculate circumference, diameter, and area
    circ = 2 * PI * radius;
    dia = 2 * radius;
    area = PI * radius * radius;
    
    // print values
    cout << "circumference: " << circ << endl;
    cout << "diameter: " << dia << endl;
    cout << "area: " << area << endl;
}
