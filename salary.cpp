// salary
/* pseudocode: 
- ask user for two inputs (salary and credit rating)
- if statement (if salary >= 20000 && credit >= 7)
    - call qualify function
- else call no qualify function
- under main function, define qualify and noqualify functions
qualify:
- print "Congratulations! You qualify for the credit card!"
noqualify:
- print "I'm sorry. You do not qualify for the credit card."
*/
#include <iostream>
using namespace std;

void qualify();
void noQualify();

int main()
{
      double salary;    // Annual salary
      int creditRating; // Credit rating
      
      // ask user for input and assign to above variables
      cout << "Enter your salary: ";
      cin >> salary;
      cout << "Enter your credit rating: ";
      cin >> creditRating;
      
      // test whether salary is above 20000 and credit rating is above 7 and call respective function
      if (salary >= 20000 && creditRating >= 7) {
          qualify();
      } else {
          noQualify();
      }
}

// define both functions
void qualify() {
    cout << "Congratulations! You qualify for the credit card!" << endl;
}

void noQualify() {
    cout << "I'm sorry. You do not qualify for the credit card." << endl;
}
