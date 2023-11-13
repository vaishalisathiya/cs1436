#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (((num % 5) == 0) && ((num % 6) == 0)) 
    {
        cout << num << " is divisible by 5 and 6" << endl;
    }
    else
    {
        cout << num << " is not divisible by both 5 and 6" << endl;
    }
    if (((num % 5) == 0) || ((num % 6) == 0)) 
    {
        cout << num << " is divisible by 5 or 6" << endl;
    }
    if (((num % 5) == 0) ^ ((num % 6) == 0)) 
    {
        cout << num << " is divisible by 5 or 6, but not both" << endl;
    }
}
