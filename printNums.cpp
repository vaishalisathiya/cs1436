//print every number from a to b
#include <iostream>

using namespace std;

int main()
{
    int min, max;
    
    cout << "Enter your minimum number: ";
    cin >> min;
    cout << "Enter your maximum number: ";
    cin >>max;
    
    for (int i = min; i <= max; i++)
    {
        cout << i;
    }
}
