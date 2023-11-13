// vacation days
/* pseduocode:
- ask user for input
- calculate how many days they will receive
    - if years < 3, each year has 10 days each
    - if years = 3, 15 days
    - if years > 3 and < 6, 15 + 2 for each year
    - if years >= 6, 1 extra day for each year
- print
*/

#include <iostream>

using namespace std;

int main()
{
    // variables
    int years, days;
    
    //ask user for input
    cout << "Enter # of years of service: ";
    cin >> years;
    
    //calculate # of vacation days
    if (years < 3)
    {
        days = 10;
    }
    else if (years == 3)
    {
        days = 15;
    }
    else if ((years > 3) && (years <= 6))
    {
        days = 15 + ((years - 3) * 2);
    }
    else if (years > 6)
    {
        days = 21 + (years - 6);
    }
    
    //print
    cout << "# of vacation days: " << days << endl;
}
/* output:
Enter # of years of service: 7
# of vacation days: 22
*/
