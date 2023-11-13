/**
   This program demonstrates a solution to the
   Pennies for Pay programming challenge.
*/
/* pseudocode:
- create variables
- ask user for number of days
- use a while loop to keep asking the user for a valid input:
    - while days worked <= 0, ask user to input something > 0
- display the header using setw
- initialize days and pennies to 1
- use a for loop to print number of pennies:
    - for int i = days, i <= daysWorked, i++
        - print day number and penny number
        - for every iteration of the loop, double pennies
        - add penny amount to total pennies
- print total penny amount / 100 (for cost in cents)
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      // variables
      int daysWorked, pennies, totalPennies, day;

      // Get the maximum number of days.
      cout << "For how many days will you work? ";
      cin >> daysWorked;

      // Validate the input.
      while (daysWorked <= 0)
      {
        cout << "The number of days must be at least 1.\n"
             << "Enter the number of days: ";
        cin >> daysWorked;
      }

      // Initialize the day counter to day 1 and pennies to 1.
      day = 1;
      pennies = 1;
      totalPennies = 0;
      
      // Display the report header.
      cout << left << setw(6) << "\nDay" << setw(15) << "Pennies Earned" << endl;

      // Display the income report.
     for (int i = day; i <= daysWorked; i++)
     {
         cout << left << setw(6) << i << setw(15) << pennies << endl;
         totalPennies += pennies;
         pennies *= 2;
     }

      // Display the total pay.
      cout << "\nTotal pay: $" << double(totalPennies / 100.0) << endl;
}
/* output: 
For how many days will you work? -1
The number of days must be at least 1.
Enter the number of days: 5

Day  Pennies Earned 
1     1              
2     2              
3     4              
4     8              
5     16             

Total pay: $0.31
*/
