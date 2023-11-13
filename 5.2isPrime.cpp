// is prime
/* pseudocode:
- create variables
- prompt user to enter number
- check if the number is between 2 and 1000
- if number is not between 2 and 1000
    - print error message
- if number is between 2 and 1000
    - if number is equal to any of the first 11 prime numbers
        - print number is prime
    - if number is divisible by any of the first 11 prime numbers (use modulo)
        - print which numbers they are divisible by using for loop
    - if number is not divisible by any of the first 11 prime numbers
        - print number is prime
*/
#include <iostream>

using namespace std;

int main()
{
    // create variables
    int num;
    
    // ask user for input
    cout << "Enter a positive whole number in the range 2 through 1000: " << endl;
    cin >> num;
    
    // check if user input is valid
    if (num < 2 || num > 1000)
    {
        // display error message
        cout << "Error! " << num << " is outside the range 2 through 1000." << endl;
    }
    else
    {
        // check if num is equal to any of the first 11 prime numbers
        if (num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 19 || num == 23 || num == 29 || num == 31)
        {
            cout << num << " is prime." << endl;
        }
        else 
        {
            // check if number is divisible by any of the first 11 prime numbers
            if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 11 == 0 || num % 13 == 0 || num % 17 == 0 || num % 19 == 0 || num % 23 == 0 || num % 29 == 0 || num % 31 == 0)
            {
                cout << num << " is divisible by:" << endl;
                
                // identify which prime numbers are divisors of num
                if (num % 2 == 0)
                {
                    cout << 2 << endl;
                }
                if (num % 3 == 0)
                {
                    cout << 3 << endl;
                }
                if (num % 5 == 0)
                {
                    cout << 5 << endl;
                }
                if (num % 7 == 0)
                {
                    cout << 7 << endl;
                }
                if (num % 11 == 0)
                {
                    cout << 11 << endl;
                }
                if (num % 13 == 0)
                {
                    cout << 13 << endl;
                }
                if (num % 17 == 0)
                {
                    cout << 17 << endl;
                }
                if (num % 19 == 0)
                {
                    cout << 19 << endl;
                }
                if (num % 23 == 0)
                {
                    cout << 23 << endl;
                }
                if (num % 29 == 0)
                {
                    cout << 29 << endl;
                }
                if (num % 31 == 0)
                {
                    cout << 31 << endl;
                }
            }
            else
            {
                cout << num << " is prime." << endl;
            }
        }
    }
}
/* output: 
Enter a positive whole number in the range 2 through 1000: 
345

345 is divisible by:
3
5
23
*/
