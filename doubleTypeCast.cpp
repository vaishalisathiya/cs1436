#include <iostream>
using namespace std;

int main()
{
    int x, y, z, avg1, total;
    double avg2;
    cout << "Enter 3 values: " << endl;
    cin >> x >> y >> z;
    total = x + y + z;
    avg1 = (double)total/3;
    cout << "Your average is: " << avg1 << endl;
    avg1 = total/3;
    cout << "Your average is: " << avg1 << endl;
    avg2 = (double)total/3;
    cout << "Your average is: " << avg2 << endl;
    avg2 = total/3;
    cout << "Your average is: " << avg2 << endl;
}
