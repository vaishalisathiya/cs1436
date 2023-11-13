// falling distance
/* pseudocode: 
- define functions and global constant variables
- main function:
    - call get seconds function to get the number of seconds in a do while loop:
        - do: - call the function
              - check if the entry is valid (if its below 0, print error message)
        - while: seconds is less than 0
    - call distance functions and print values with correct amount of deciaml points
- get seconds function:
    - ask user for input
    - return input
- find earth distance fucntion:
    - equation for distance is .5 * acceleration * seconds^2
    - return this equation with the values substituted with EARTH_ACCELERATION
- find moon distance function:
    - equation for distance is .5 * acceleration * seconds^2
    - return this equation with the values substituted with MOON_ACCELERATION
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// define functions
double getSeconds();
double findEarthFallDist(double);
double findMoonFallDist(double);

// global constant variables
const double EARTH_ACCELERATION = 9.81;
const double MOON_ACCELERATION = 1.625;

int main()
{
    // assign seconds to get seconds function
    double seconds = getSeconds();
    cout << endl;
    // print distance with set precision 
    cout << "The object traveled " << fixed << setprecision(3) << findEarthFallDist(seconds) << " meters in " << fixed << setprecision(1) << seconds << " seconds on Earth." << endl;
    cout << "The object traveled " << fixed << setprecision(3) << findMoonFallDist(seconds) << " meters in " << fixed << setprecision(1) << seconds << " seconds on the Moon." << endl;
}

// get seconds function
double getSeconds() {
    double seconds;
    
    // ask user for input until valid input is given
    do {
        cout << "Please enter the time of the fall (in seconds): ";
        cin >> seconds;
        // verify if time is valid
        if (seconds < 0) {
            cout << "\nThe time must be at least zero." << endl;
        }
    } while (seconds < 0);
    
    // return seconds
    return seconds;
}

double findEarthFallDist(double seconds) {
    // return earth distance using equation .5 * gravity * seconds^2
    return .5 * EARTH_ACCELERATION * pow(seconds, 2);
}

double findMoonFallDist(double seconds) {
    // return moon distance using equation .5 * gravity * seconds^2
    return .5 * MOON_ACCELERATION * pow(seconds, 2);
}
