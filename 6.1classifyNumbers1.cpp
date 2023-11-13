// classify numbers
/* pseudocode: 
- create variables
- ask user for initial input
- while user input is not 0
    - keep asking user for input
    - if input is positive:
        - posNum++
        - sum += input
    - else 
        - negNum++
        - product *= input
- if posNum = 1
    - print 1 pos number and what it is
- else if posNum > 1
    - print number of positive numbers and the sum
- else print no positive numbers were entered
- if negNum = 1
    - print 1 neg number and the what it is
else if negNum > 1
    - print number of positive numbers and the sum
- else print no positive numbers were entered
*/
#include <iostream>
using namespace std;

int main()
{
    // variables
    int user = 0, posNum = 0, negNum = 0;
    int sum = 0;
    int product = 1;
    
    // ask user for initial input
    cout << "Enter a whole number [enter 0 to end input]: ";
    cin >> user;
    
    // while loop to keep asking user for numbers until they enter 0
    while (user != 0) {
        // check whether input is pos or neg and 
        if (user > 0) {
            posNum++;
            sum += user;
        } else if (user < 0) {
            negNum++;
            product *= user;
        }
        
        // ask user again
        cout << "Enter another whole number [enter 0 to end input]: ";
        cin >> user;
    }
    cout << endl;
    
    // print statements based off number of positive numbers
    if (posNum == 1) {
        cout << "1 positive number was entered. It was a " << sum << "." << endl;
    } else if (posNum > 1) {
        cout << posNum << " positive numbers were entered. Their sum was " << sum << "." << endl;
    } else {
        cout << "No positive numbers were entered." << endl;
    }
    cout << endl;
    
    // print statements based off number of negative numbers
    if (negNum == 1) {
        cout << "1 negative number was entered. It was a " << product << "." << endl;
    } else if (negNum > 1) {
        cout << negNum << " negative numbers were entered. Their product was " << product << "." << endl;
    } else {
        cout << "No negative numbers were entered." << endl;
    }
}
/* output: 
Enter a whole number [enter 0 to end input]: -6
Enter another whole number [enter 0 to end input]: -5
Enter another whole number [enter 0 to end input]: -9
Enter another whole number [enter 0 to end input]: 8
Enter another whole number [enter 0 to end input]: 75
Enter another whole number [enter 0 to end input]: 10
Enter another whole number [enter 0 to end input]: 1
Enter another whole number [enter 0 to end input]: 0

4 positive numbers were entered. Their sum was 94.

3 negative numbers were entered. Their product was -270.
*/


