// classify numbers 2
/* pseudocode: 
- create variables
- do while loop (to ask user first):
    - ask user for input
    - based on input, check if it is positive, negative, or 0 by using >, <, and == and add to respective count
    - ask user if they want to run loop again
    - while loop to keep asking user if they want to add another whole number (if their input was wrong)
        - print error statement
        - ask user once again if they want to add another whole number
    - increment loop value so that "whole number #" changes as well
- print positive, negative, and 0 count based off of how much each variable is
*/
#include <iostream>
using namespace std;

int main()
{
    // variables
    int user, posNum=0, negNum=0, zero=0;
    int sum = 0;
    int product = 1;
    int loop = 1;
    char runLoop = 'Y';
    
    do {
        // ask user for input
        cout << "Enter whole number " << loop << ": ";
        cin >> user;
        
        // verify if number is positive, negative, or zero
        if (user > 0) {
            posNum++;
            sum += user;
        } else if (user < 0) {
            negNum++;
            product *= user;
        } else {
            zero++;
        }
        
        // ask user for another input
        cout << "Would you like to enter another number?\nEnter Y for Yes or N for No: ";
        cin >> runLoop;
        while (!(runLoop == 'Y' || runLoop == 'y' || runLoop == 'N' || runLoop == 'n')) {
            cout << "Error, " << runLoop << " is not a valid response." << endl;
            cout << "Would you like to enter another number?\nEnter Y for Yes or N for No: ";
            cin >> runLoop;
        }
        loop++;
    } while (runLoop == 'Y' || runLoop == 'y');
    cout << endl;
    
    // print statements based off number of positive numbers
    if (posNum == 1) {
        cout << "One positive value was entered. It was a " << sum << "." << endl;
    } else if (posNum > 1) {
        cout << posNum << " positive values were entered. Their sum was " << sum << "." << endl;
    } else {
        cout << "No positive values were entered." << endl;
    }
    
    // print statements based off number of negative numbers
    if (negNum == 1) {
        cout << "One negative value was entered. It was a " << product << "." << endl;
    } else if (negNum > 1) {
        cout << negNum << " negative values were entered. Their product was " << product << "." << endl;
    } else {
        cout << "No negative values were entered." << endl;
    }
    
    // print number of zeros
    if (zero == 1) {
        cout << "One zero was entered." << endl;
    } else if (zero > 1) {
        cout << zero << " zeroes were entered." << endl;
    } else {
        cout << "No zeroes were entered." << endl;
    }
}
/* output: 
Enter whole number 1: 4
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 2: -6
Would you like to enter another number?
Enter Y for Yes or N for No: u
Error, u is not a valid response.
Would you like to enter another number?
Enter Y for Yes or N for No: p
Error, p is not a valid response.
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 3: 7
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 4: 9
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 5: -2
Would you like to enter another number?
Enter Y for Yes or N for No: y
Enter whole number 6: 0
Would you like to enter another number?
Enter Y for Yes or N for No: n

3 positive values were entered. Their sum was 20.
2 negative values were entered. Their product was 12.
One zero was entered.
*/


