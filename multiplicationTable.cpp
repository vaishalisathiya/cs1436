// multiplication table
/* pseudocode:
- create variables
- ask user for starting and ending value
- print header
- for loop to iterate through the two values
    - set 'i' to starting value and run for loop until it equals ending value
    - for loop to print each value's multiplication set
        - iterate 12 times (for i = 1; i <= 12; i++)
        - print outer loop multiplied by inner loop
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startValue, endValue;
    cout << "Enter the start value: ";
    cin >> startValue;
    cout << "Enter the end value: ";
    cin >> endValue;
    cout  << "\n               Multiplication Table \n\n"  ;

    // Display the number title
    cout << setw(5) << "|";
    for (int i = 1; i <= 12; i++) {
        cout << setw(4) <<  i;
        
    }
    cout << endl;
    cout  << "--------------------------------------------------------\n";

    // Display the table body using nested loops
    for (int i = startValue; i <= endValue; i++) {
        cout << setw(5) << i << "|";
        // loop through 12 times
        for (int j = 1; j <= 12; j++) {
            cout << setw(4) <<  i * j;
        }
        cout << endl;
    }
}
/* output: 
Enter the start value: 1
Enter the end value: 4

               Multiplication Table 

    |   1   2   3   4   5   6   7   8   9  10  11  12
--------------------------------------------------------
    1|   1   2   3   4   5   6   7   8   9  10  11  12
    2|   2   4   6   8  10  12  14  16  18  20  22  24
    3|   3   6   9  12  15  18  21  24  27  30  33  36
    4|   4   8  12  16  20  24  28  32  36  40  44  48
*/
