// lab 2.1
/* pseudocode:
- create variables for pi, degrees, and radians
- calculate sin, cos, and tan
- print
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // create variables
    const double PI = acos(-1);
    double degree, radians, cosDegree, sinDegree, tanDegree;
    
    // ask user for input and calculate radians
    cout << "Enter an angle's degree value: ";
    cin >> degree;
    radians = degree * (PI / 180);
    
    // calculate each value (cos, sin, tan) of the degree
    cosDegree = cos(radians);
    sinDegree = sin(radians);
    tanDegree = tan(radians);
    
    //print
    cout << "The cosine of " << radians << " radians, " << degree << " degrees, is approximately " << cosDegree << "." << endl;
    cout << "The sine of " << radians << " radians, " << degree << " degrees, is approximately " << sinDegree << "." << endl;
    cout << "The tangent of " << radians << " radians, " << degree << " degrees, is approximately " << tanDegree << "." << endl;
}
/* input: 25; output: 
Enter an angle's degree value: 25
The cosine of 0.436332 radians, 25 degrees, is aproximately 0.906308.
The sin of 0.436332 radians, 25 degrees, is aproximately 0.422618.
The tangent of 0.436332 radians, 25 degrees, is aproximately 0.466308.
*/
