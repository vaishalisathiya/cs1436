// tuition
/* pseudocode:
- create variables
- ask user for input
- use while loop to keep asking user for valid input (if input is not valid)
- for loop (iterate 10 times)
    - multiply tuition by 1.05 (for increase rate)
    - print tuition amount for that year
- for loop (iterate 4 times)
    - multiple tuition by 1.05 each time
    - add to sum
- print sum of tuition for next 4 years
*/
#include <iostream>
using namespace std;

int main()
{
    // create variables
    double tuition, sum;
    
    //ask user for tuition amount
    cout << "Enter tuition amount: ";
    cin >> tuition;
    
    // keep asking user for input until input is valid
    while (tuition < 1)
    {
        cout << "Enter a valid tuition amount: ";
        cin >> tuition;
    }
    
    // Tuition calculation for every year
    for (int i = 1; i <= 10; i++)
    {
        // multiply tuition by increase rate
        tuition *= 1.05;
        cout << "Tuition after " << i << " years is " << tuition << endl;
    }

    // Tuition calculation from 11th to 14th year
    for (int i = 1; i <= 4; i++)
    {
        // multiply tuition by increase rate
        tuition *= 1.05;
        
        // add tuition to sum
        sum += tuition;
    }
    
    cout << "The four-year tuition after 10 years is " << sum << endl;
}
/* output: 
Enter tuition amount: -4
Enter a valid tuition amount: 10000
Tuition after 1 years is 10500
Tuition after 2 years is 11025
Tuition after 3 years is 11576.2
Tuition after 4 years is 12155.1
Tuition after 5 years is 12762.8
Tuition after 6 years is 13401
Tuition after 7 years is 14071
Tuition after 8 years is 14774.6
Tuition after 9 years is 15513.3
Tuition after 10 years is 16288.9
The four-year tuition after 10 years will be $73717.8
*/
