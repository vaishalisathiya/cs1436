// repeat additions
/* pseudocode:
- use a for loop to ask exactly 10 questions
    - assign 2 random values to 2 integers (one should be within 50 and one within 100)
    - ask user what the sum of both numbers are
    - using if statement check whether user input is correct
        - if user input is correct
            - add one to correct amount of questions
        - if user input is incorrect
            - print "wrong amount"
            - print correct answer
- print total correct answers
*/
#include <iostream>

using namespace std;

int main()
{
    // seed value
    srand(time(0));
    
    // variables
    int rand1, rand2, answer, correct;
    
    // loop 10 times
    for (int i = 10; i > 0; i--)
    {
        // assign random numbers
        rand1 = (rand() % 50) + 1;
        rand2 = (rand() % 100) + 1;
        
        // ask user to add numbers
        cout << "What is " << rand1 << " + " << rand2 << "? ";
        cin >> answer;
        
        // use if statement for different outputs based off user's answer
        if (answer == (rand1 + rand2))
        {
            correct++;
        }
        else
        {
            cout << "Wrong answer.\nYour correct answer is " << (rand1 + rand2) << endl;
            cout << endl;
        }
    }
    
    // print total correct answers
    cout << "You have answered " << correct << " questions correctly" << endl;
    
}
/* output: 
What is 38 + 17? 55
What is 13 + 28? 41
What is 16 + 89? 95
Wrong answer.
Your correct answer is 105

What is 47 + 78? 125
What is 24 + 84? 108
What is 45 + 27? 62
Wrong answer.
Your correct answer is 72

What is 36 + 16? 52
What is 5 + 32? 37
What is 20 + 32? 52
What is 31 + 74? 105
You have answered 8 questions correctly
*/

