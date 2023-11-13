// random card picker

/* pseudocode:
- assign seed value
- create variable
- get random number
- using modulo, find which card rank and print
    - to determine rank, if (number % 13 == 0), it is an ace
    - == 10, is jack
    - == 11, is queen
    - == 12, is king
- using divide, find which card suit and print
    
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // assign seed value and constant
    srand(time(0));
    const int NUMBER_OF_CARDS = 52;
    cout << "Your random card is ";
    
    
    // create variable
    int card;
    
    // get random number
    card = rand() % NUMBER_OF_CARDS;
    
    // using modulo, find rank
    if (card % 13 == 0)
    {
        cout << "Ace of ";
    }
    else if (card % 13 == 10)
    {
        cout << "Jack of ";
    }
    else if (card % 13 == 11)
    {
        cout << "Queen of ";
    }
    else if (card % 13 == 12)
    {
        cout << "King of ";
    }
    else
    {
        cout << ((card % 13) + 1) << " of ";
    }
    
    //using divide, find suit
    if (card / 13 == 0)
    {
        cout << "Spades" << endl;
    }
    else if (card / 13 == 1)
    {
        cout << "Hearts" << endl;
    }
    else if (card / 13 == 2)
    {
        cout << "Diamonds" << endl;
    }
    else
    {
        cout << "Clubs" << endl;
    }
}
/* output:
Your random card is 2 of Diamonds
*/

