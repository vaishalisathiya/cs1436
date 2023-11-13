// coin flipping
/* pseudocode: 
- assign seed value
- create variables
- do while loop (to keep running until user inputs n to stop loop)
    - assign either 0 or 1 to flip
    - if statement:
        - if flip is 0, print heads and heads++
        - if flip is 1, print tails and tails++
    - ask user if they want to flip again
    - while loop to keep asking user for correct input (if input is not y or n)
        - print error message
        - ask user if they want to flip again
    - add to loop to count number of times user flips coin
- calculate percentage of heads and tails by dividing respective counter from loops counter (heads / loop)
- print statements by using variables and iomanip (to print correct number of decimal spots)
*/
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{
    // assign seed value for random assignment
    unsigned int seed;
    cin >> seed;
    srand(seed);
    
    // assign variables
    int flip, heads = 0, tails = 0, loop = 0;
    char runLoop = 'Y';
    double headsPercent, tailsPercent;
    
    // do while statement
    do {
        // assign value of flip to 0 or 1
        flip = rand() % 2;
        
        // if statement to print heads or tails
        if (flip == 0) {
            cout << "Flip = Heads" << endl;
            heads++;
        } else {
            cout << "Flip = Tails" << endl;
            tails++;
        }
        
        // ask user if they want to flip again
        cout << "Would you like to flip again?\nEnter Y for Yes or N for No: ";
        cin >> runLoop;
        
        // if input is invalid, print error message and keep asking user
        while (!(runLoop == 'Y' || runLoop == 'y' || runLoop == 'N' || runLoop == 'n')) {
            cout << endl;
            cout << "Error, " << runLoop << " is not a valid response." << endl;
            cout << "Would you like to flip again?\nEnter Y for Yes or N for No: ";
            cin >> runLoop;
        }
        
        // add to loop counter to coount how many times user flips
        loop++;
    } while (runLoop == 'Y' || runLoop == 'y'); // comditional - only run while runLoop is yes
    
    // calculate percentages by dividing from number of loops (assign double to one of the values)
    headsPercent = (double(heads) / loop) * 100;
    tailsPercent = (double(tails) / loop) * 100;
    
    // print statements
    cout << endl;
    cout << fixed << setprecision(2);
    cout << heads << " of the " << loop << " flips were Heads or " << headsPercent << "% were Heads." << endl;
    cout << tails << " of the " << loop << " flips were Tails or " << tailsPercent << "% were Tails." << endl;
}

