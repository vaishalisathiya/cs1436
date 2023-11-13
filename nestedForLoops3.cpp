// nested for loops 3
/* pseudocode:
- iterate a loop 5 times, but increase the value of i
- for loop (for int i = 1; i <= 5; i++)
   - iterate through another loop for as many times as it takes to get from j to i - j so you can print ' '
   - for loop (for int j = 0; j < 5 - i; j++)
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
   for (int i = 1; i <= 5; i++) {
      // second for loop to iterate through number of spaces in that row
      for (int j = 0; j < 5 - i; j++) {
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
    *
   **
  ***
 ****
*****
*/
