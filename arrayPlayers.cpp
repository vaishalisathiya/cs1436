#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_PLAYERS = 5;
    int pscores[NUM_PLAYERS] = {0};
    
    int num, score;
    cout << "Enter the [player#][score]: ";
    cin >> num;
    
    while(num >= 0 && num < 5) {
        cin >> score;
        pscores[num] += score;
        cout << "Enter the [player#][score]: ";
        cin >> num;
    }
    
    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << i << setw(16) << pscores[i] << endl;
    }
}

