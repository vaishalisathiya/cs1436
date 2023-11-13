// rock scissors paper
/* pseudocode:
- generate random number: 0, 1, or 2 (for scissors, rock, and paper)
- ask user for input
- print invalid statement if input is not between 0 and 2
- else play game:
    - use stacked switch case to compare each possible scenario:
        - switch through copmuter's value
        - switch through user's inputs and compare with computer's value
        - print computer's move, user' move, and who won
        -break after each case
    - break after each case
*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // variables:
    int user, comp;
    
    // assign seed value and assign random value to computer's value
    srand(time(0));
    comp = rand() % 3;
    
    //ask user for valid input
    cout << "Choose one of the following:" << endl;
    cout << "scissor(0), rock(1), paper(2): ";
    cin >> user;
    
    //check if input is valid
    if (user > 2)
    {
        cout << "Enter a number between 0 and 2" << endl;
    }
    else
    {
        switch (comp) 
        {
            case 0: switch (user) 
                    {
                        case 0: cout << "The computer is scissor. You are scissor too. It is a draw!"  << endl;
                                break;
                        case 1: cout << "The computer is scissor. You are rock. You won!"  << endl;
                                break;
                        case 2: cout << "The computer is scissor. You are paper. You lost!"  << endl;
                                break;
                    }
                    break;
            case 1: switch (user) 
                    {
                        case 0: cout << "The computer is rock. You are scissor. You lost!"  << endl;
                                break;
                        case 1: cout << "The computer is rock. You are rock too. It is a draw!"  << endl;
                                break;
                        case 2: cout << "The computer is rock. You are paper. You won!"  << endl;
                                break;
                    }
                    break;
            case 2: switch (user) 
                    {
                        case 0: cout << "The computer is paper. You are scissor. You won!"  << endl;
                                break;
                        case 1: cout << "The computer is paper. You are rock. You lost!"  << endl;
                                break;
                        case 2: cout << "The computer is paper. You are paper too. It is a draw!"  << endl;
                                break;
                    }
                    break;
        }
    }
    
}
/* output:
Choose one of the following:
scissor(0), rock(1), paper(2): 0
The computer is paper. You are scissor. You won!

Choose one of the following:
scissor(0), rock(1), paper(2): 1
The computer is paper. You are rock. You lost!

Choose one of the following:
scissor(0), rock(1), paper(2): 2
The computer is paper. You are paper too. It is a draw!

Choose one of the following:
scissor(0), rock(1), paper(2): 3
Enter a number between 0 and 2
*/
