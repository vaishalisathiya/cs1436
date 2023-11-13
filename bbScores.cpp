// basketball scores
/* pseduocode:
- create arrays (one for player names and one for scores)
- do:
    - ask user for input
    - assign first value to index of player (to use in scores array)
        - if first value is -1, break;
        - else assign second value to scoreNum;
    - while statement (to check if score is valid input)
        - while (scoreNum > 3)
            - print error statement and bring in user input ot scoreNum again
    - add second value to the index of first value
- while (user input != -1)
- print values using for loop
    - cout << player[i] << " " << score[i]
*/
#include <iostream>
using namespace std;

int main()
{
    // create arrays and variables
    const int SIZE = 5;
    string players[SIZE] = {"Barkley", "Jordan", "Curry", "Lebron", "Hakeem"};
    int scores[SIZE] = {0, 0, 0, 0, 0};
    int playerNum, scoreNum;
    
    // do while loop to ask user for input until they input -1
    do {
        // ask user for input and assign to variables
        cout << "Enter [player number] [score]: ";
        cin >> playerNum;
        
        // check if playerNum is valid
        if (playerNum == -1) {
            break;
        } else {
            cin >> scoreNum;
        }
        
        // check if scoreNum is valid
        while (scoreNum > 3) {
            cout << "The score has to be 1, 2 or 3" << endl;
            cin >> scoreNum;
        }
        
        // add score to respective index
        scores[playerNum] += scoreNum;
    } while (playerNum != -1);
    
    cout << endl;
    cout << "The scores of the players are " << endl;
    
    // for loop to run through each element and print values
    for (int i = 0; i < SIZE; i++) {
        cout << players[i] << " " << scores[i] << endl;
    }
}
