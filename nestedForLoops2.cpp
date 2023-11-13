// nested for loops 2
/* pseudocode:
- iterate a loop 5 times, but decrease the value of i
- for loop (for int i = 5; i > 0; i--)
   - iterate through another loop for as many times as it takes to get from j to i so you can print ' '
   - for loop (for int j = 5; j > i; j--)
      - print ' '
   - iterate through another loop for the number of times as i so that you can print * that many times
   - for loop (for int k = 0; k < i; k++)
      - print '*'
   - cout << endl (to go to next line)
*/
#include <iostream>
using namespace std;

int main() {
   // iterate a loop 5 times with the value of i decreasing
   for (int i = 5; i > 0; i--) {
      // second for loop to iterate through number of spaces in that row
      for (int j = 5; j > i; j--) {
         cout << " ";
      }
      
      // third for loop to iterate through number of stars in that row
      for (int k = 0; k < i; k++) {
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
