// lottery
/* pseudocode:
- generate random number
- ask user for input
- identify if user input matches random number in different formats
- calculate prize money and print
*/
#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

int main()
{
    // assign seed value
    srand(time(0));
    
    // variables:
    int userNum, randomNum, prize, a, b, x, y, temp;
    
    //generate randome number
    randomNum = (rand() % 90) + 10;
    
    // ask user for input
    cout << "Enter your guess: ";
    cin >> userNum;
    
    // separate each number in the two digit number for random number
    a = randomNum % 10;
    b = randomNum / 10;
    if (a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    
    // separate each number in the two digit number for user number
    x = userNum % 10;
    y = userNum / 10;
    if (x < y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    
    // compare user's input and random number and asign prize
    if (userNum == randomNum) {
        prize = 10000;
    } 
    else if ((a == x) && (b == y))
    {
        prize = 3000;
    }
    else if ((a == x) || (b == y))
    {
        prize = 1000;
    }
    else
    {
        prize = 0;
    }
    
    // print
    cout << "The lottery number was " << randomNum << endl;
    cout << "Your prize money is $" << prize << endl;
}
/* output:
Enter your guess: 39
The lottery number was 35
Your prize money is $1000
*/
