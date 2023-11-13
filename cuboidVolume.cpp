#include <iostream>
using namespace std;

int main()
{
    int length, breadth, width, volume;
	cout << "Enter the length, breadth, and width of your cuboid: " << endl;
	cin >> length >> breadth >> width;
	volume = length * breadth * width;
    cout << "\nThe volume of your cuboid is " << volume << endl;
}