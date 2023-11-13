// convert seconds
/* pseudocode:
- create variables
- ask user for input
- check if input is above 0
    - if input is below 0, print error message and stop conversion
    - else continue conversion
- calculate number of days, hours, minutes, and seconds using modulo
- print whichever values are not equal to 0 using if statements
*/
#include <iostream>

using namespace std;

int main()
{
    // create variables
    const long SEC_IN_DAY = 86400;
    const long SEC_IN_HOUR = 3600;
    const long SEC_IN_MIN = 60;
    long totalSeconds, days, hours, minutes, seconds;
    
    // ask user for input
    cout << "Enter a time in seconds: ";
    cin >> totalSeconds;
    cout << endl;
    
    // verify if input is valid
    if (totalSeconds <= 0)
    {
        cout << "Error! The seconds must be greater than zero." << endl;
    }
    else 
    {
        seconds = totalSeconds;
        
        // calculate number of days and put remaining seconds back into variable
        days = seconds / SEC_IN_DAY;
        seconds %= SEC_IN_DAY;
        
        // calculate number of hours and put remaining seconds back into variable
        hours = seconds / SEC_IN_HOUR;
        seconds %= SEC_IN_HOUR;
        
        // calculate number of minutes and put remaining seconds back into variable
        minutes = seconds / SEC_IN_MIN;
        seconds %= SEC_IN_MIN;
        
        // use if statements to print each value
        cout << endl;
        cout << totalSeconds << " seconds is:" << endl;
        if (days > 0)
        {
            cout << "\t" << days << " days." << endl;
        }
        if (hours > 0)
        {
            cout << "\t" << hours << " hours." << endl;
        }
        if (minutes > 0)
        {
            cout << "\t" << minutes << " minutes." << endl;
        }
        cout << "\t" << seconds << " seconds." << endl;
    }
}
/* output: 
Enter a time in seconds: 68459

68459 seconds is:
    19 hours.
    59 seconds.
*/
