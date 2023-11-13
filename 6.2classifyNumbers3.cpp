// classify numbers 3
/* pseudocode:
- create variables
- for loop to run the code 10 times
    - ask user for input
    - if user input > 0
        - posNum++
        - sum += user input
    - else if user input < 0
        - negNum++
        - product *= user input
    - else
        - zero++
- print total number of negative, positive, and zeroes
- print sum and product
*/
#include <iostream>

using namespace std;

int main()
{
    // create variables
    int user = 0, posNum = 0, negNum = 0, zero = 0;
    int sum = 0;
    int product = 1;
    
    // for loop to iterate 10 times
    for (int i = 1; i <= 10; i++) {
        // ask user for input
        cout << "Enter whole number " << i << ": ";
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
    }
    
    // print total number of positives, negatives, and zeroes
    cout << "\nOf the 10 numbers entered:" << endl;
    cout << "\t" << zero << " were 0's." << endl;
    cout << "\t" << negNum << " were negative." << endl;
    cout << "\t" << posNum << " were positive." << endl;
    cout << endl;
    
    // print product and sum
    cout << "The product of the negative numbers was " << product << "." << endl;
    cout << "The sum of the positive numbers was " << sum << "." << endl;
}
/* output:
Enter whole number 1: 18
Enter whole number 2: -4
Enter whole number 3: -6
Enter whole number 4: -7
Enter whole number 5: 19
Enter whole number 6: 0
Enter whole number 7: 0
Enter whole number 8: 2
Enter whole number 9: -2
Enter whole number 10: -6

Of the 10 numbers entered:
        2 were 0's.
        5 were negative.
        3 were positive.

The product of the negative numbers was -2016.
The sum of the positive numbers was 39.
*/

