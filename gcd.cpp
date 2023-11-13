// greatest common divisor
/* pseudocode:
- ask the user to input two integers
- use a while loop to idntify which numbers are a divisor
- while k is less than either integer
    - if both numbers can be divided by k, assign k to gcd
    - increment k by 1
- print the full statement along with gcd
*/
#include <iostream>
using namespace std;

int main()
{
  // Prompt the user to enter two integers
  cout << "Enter first integer: ";
  int n1;
  cin >> n1;

  cout << "Enter second integer: ";
  int n2;
  cin >> n2;

  int gcd = 1;
  int k = 2;
  
 // use a while loop to identify which numbers can be a divisor
   while (k < n1 || k < n2)
   {
       if (n1 % k == 0 && n2 % k == 0)
       {
           gcd = k;
       }
       k++;
   }

  cout << "The greatest common divisor for " << n1 << " and "
       << n2 << " is " << gcd << endl;

  return 0;
}

/* output: 
Enter first integer: 24
Enter second integer: 36
The greatest common divisor for 24 and 36 is 12
*/
