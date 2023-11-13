// nested for loops
/* pseudocode:
- iterate a loop 5 times, but decrease the value of i
- for loop (for int i = 5; i > 0; i--)
   - iterate through another loop the number of times as i so that you can print * that many times
   - for loop (for int j = 0; j < i; j++)
       - print '*'
   - cout << endl (to go to next line)
*/
#include <iostream>
using namespace std;

int main() {
    // iterate a loop 5 times with the value of i decreasing
    for (int i = 5; i > 0; i--) {
        // second for loop to iterate through number of stars in that row
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
/* output: 
*****
****
***
**
*
*/
