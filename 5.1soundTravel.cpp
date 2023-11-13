// sound travel
/* pseudocode:
- create variables
- print header with options
- ask user for medium number
- use if statement to check whether medium is valid input
- if user input is not between 1-4:
    - display error message
    - ask user to rerun code
    - quit
- if user input is between 1-4:
    - ask user for distance
    - use if statement to verify if distance is above 0
    - if user input <= 0:
        - display error message
    - if user input > 0:
        - calculate seconds using switch case
            - based on number entered, divide distance by respective material's speed
            - print final statement with seconds (4 decimcal points) and distance (2 decimal points)
        
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constant variables
    const double WOOD_SPEED = 12631.23;
    const double STEEL_SPEED = 10614.81;
    const double WATER_SPEED = 4714.57;
    const double AIR_SPEED = 1125.33;
    
    // variables
    int medium;
    double distance, seconds;
    
    // print header with \t
    cout << "\tTime for Sound to Travel through a Medium given Distance" << endl;
    cout << endl;
    cout << "1 - Wood" << endl;
    cout << "2 - Steel" << endl;
    cout << "3 - Water" << endl;
    cout << "4 - Air" << endl;
    cout << endl;
    
    // ask user for medium
    cout << "Enter the number of the medium: " << endl;
    cin >> medium;
    
    // check if medium is valid
    if (medium > 0 && medium < 5)
    {
        // ask user for distance
        cout << "Enter the distance to travel (in feet): " << endl;
        cin >> distance;
        
        // check if distance is valid
        if (distance > 0)
        {
            // calculate seconds and print statement
            switch (medium)
            {
                case 1: seconds = distance / WOOD_SPEED;
                        cout << "In wood it will take " << fixed << setprecision(4) << seconds << " seconds to travel " << setprecision(2) << distance << " feet." << endl;
                        break;
                case 2: seconds = distance / STEEL_SPEED;
                        cout << "In steel it will take " << fixed << setprecision(4) << seconds << " seconds to travel " << setprecision(2) << distance << " feet." << endl;
                        break;
                case 3: seconds = distance / WATER_SPEED;
                        cout << "In water it will take " << fixed << setprecision(4) << seconds << " seconds to travel " << setprecision(2) << distance << " feet." << endl;
                        break;
                case 4: seconds = distance / AIR_SPEED;
                        cout << "In air it will take " << fixed << setprecision(4) << seconds << " seconds to travel " << setprecision(2) << distance << " feet." << endl;
                        break;
            }
        }
        else 
        {
            cout << "Error, the distance must be greater than zero." << endl;
        }
    }
    else
    {
        cout << "Error, invalid entry!" << endl;
        cout << "Please run the program again." << endl;
    }
}
/* output: 
        Time for sound to Travel through a Medium given Distance

1 - Wood
2 - Steel
3 - Water
4 - Air

Enter the number of the medium: 3
Enter the distance to travel (in feet): 72.25
In water it will take 0.0153 seconds to travel 72.25 feet.
*/
