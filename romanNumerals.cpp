#include <iostream>

using namespace std;

int main()
{
    // variables
    int num;
    
    // ask user for input
    cout << "Enter an integer value between 1 and 10: ";
    cin >> num;
    
    // print statement
    cout << "The roman numeral for " << num << " is ";
    
    // display roman numeral
    switch(num) {
        case 1: cout << "I" << endl;
            break;
        case 2: cout << "II" << endl;
            break;
        case 3: cout << "III" << endl;
            break;
        case 4: cout << "IV" << endl;
            break;
        case 5: cout << "V" << endl;
            break;
        case 6: cout << "VI" << endl;
            break;
        case 7: cout << "VII" << endl;
            break;
        case 8: cout << "VIII" << endl;
            break;
        case 9: cout << "IX" << endl;
            break;
        case 10: cout << "X" << endl;
            break;
        default: cout << "This is not a value between 1 and 10" << endl;
        
    }
}

