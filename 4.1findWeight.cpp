// find weight
/* pseudocode: 
- create variables
- ask user for input
- use if statement to verify if input is valid (above 0)
    - if input is below 0, print error valid
    - else continue with conversion
- calculate newtons on earth, moon, mercury, and venus by calculating by respective acceleration:
    - earth newtons = kg * 9.807
    - moon newtons = kg * 1.62
    - mercury newtons = kg * 3.7
    - venus newtons = kg * 8.87
- print all values using setw, setprecision, showpoint, fixed, and any direction justification
    - if newtons of earth is below 20, then print "the object is light"
    - if newtons of earth is above 1250, then print "the object is heavy"
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // create variables
    const double EARTH_ACC = 9.807;
    const double MOON_ACC = 1.62;
    const double MERCURY_ACC = 3.7;
    const double VENUS_ACC = 8.87;
    double kg, earthNewt, moonNewt, mercuryNewt, venusNewt;
    
    // ask user for input
    cout << "Please enter the mass of an object in kilograms: ";
    cin >> kg;
    cout << endl;
    
    // verify if input is valid
    if (kg <= 0)
    {
        cout << "Error, invalid mass entered." << endl;
        cout << "The entered mass must be greater than 0." << endl;
    }
    else
    {
        // calculate each newton value
        earthNewt = kg * EARTH_ACC;
        moonNewt = kg * MOON_ACC;
        mercuryNewt = kg * MERCURY_ACC;
        venusNewt = kg * VENUS_ACC;
        
        // use setprecision, fixed, and showpoint to print numbers
        cout << fixed << setprecision(3) << showpoint;
        
        // print all information using manipulators
        cout << endl;
        cout << setw(16) << left << "Planet/Satellite" << "\t" << setw(14) << right << "Weight (N)" << endl;
        cout << endl;
        cout << setw(16) << left << "Earth" << "\t" << setw(14) << right << earthNewt;
        
        // print if object is light or heavy
        if (earthNewt < 20)
        {
            cout << "\tThe object is light" << endl;
        } 
        else if (earthNewt > 1250)
        {
            cout << "\tThe object is heavy" << endl;
        }
        else 
        {
            cout << "\n";
        }
        
        // continue printing information using manipulators
        cout << setw(16) << left << "Moon"  << "\t"<< setw(14) << right << moonNewt << endl;
        cout << setw(16) << left << "Mercury" <<  "\t" << setw(14) << right << mercuryNewt << endl;
        cout << setw(16) << left << "Venus" <<  "\t" << setw(14) << right << venusNewt << endl;
    }
}
/* output: 
Planet/Satellite            Weight (N)

Earth                         1520.085  The object is heavy
Moon                           251.100
Mercury                        573.500
Venus                         1374.850
*/
