/* pseudocode:
- create variables: num, pos, neg, values, total, average;
- do while statement (do the following and then check if num does not equal 0)
    - ask user for input
    - values++ (to cout number of numbers user enters)
    - total += num (to sum up all the numbers)
    - if statement (if num > 0) to check if it is positive
        - pos++ (to count number of positive values)
    - else (if it is not positive, then it is negative)
        - neg++ (to count number of negative numbers)
- calculate average by doing average = total / values (but make sure to type cast one of the values so that average is a double)
- print all the values
*/
#include <iostream>
using namespace std;

int main() {
    // create variables
    int num, pos, neg, values = 0, total = 0;
    double average;

    //ask user for input
    cout << "Enter numbers and end with a zero";
    

    // do while statement to ask user first
    do {
        // receive user input
        cin >> num;
        values++;
        total += num;

        // check if the number is positive or negative
        if (num > 0) {
            pos++;
        } else {
            neg++;
        }
    } while (num != 0);
    values--;

    // calculate average
    average = total / double(values);

    // print all the values
    cout << "The number of positives is " << pos << endl;
    cout << "The number of negatoves is " << neg << endl;
    cout << "The total is " << total << endl;
    cout << "The average is " << average << endl;
}
