// club rebate
/* pseudocode:
- ask user for input
- display message if under 1000
- add .1 to refund rate for every 1000
- cap refund rate to 4
- calculate refund amount
- print
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount, refundAmount;
    double refundRate = 2.0;
    
    // ask user for input
    cout << "Enter the total amount: $";
    cin >> amount;
    
    //display error message
    if (amount < 1000)
    {
        cout << "Sorry, minimum $1000 is required to qualify for a refund." << endl;
    } 
    else
    {
        // find out how much refund rate
        if ((amount - 1000) > 0)
        {
            refundRate += (int((amount - 1000) / 1000) * 0.1);
            
            //cap refund rate at 4
            if (refundRate > 4.0)
            {
                refundRate = 4.0;
            }
        }
        cout << fixed << setprecision(1);
        cout << "Your refund rate: " << refundRate << "%" << endl;
        
        // calculate refund amount
        refundAmount = (amount * refundRate) / 100;
        cout << fixed << setprecision(2);
        cout << "Your refund amount: $" << refundAmount << endl;
    }
}
/* output:
Enter the total amount: $2123.50
Your refund rate: 2.1%
Your refund amount: $44.59
*/
