// lab 2.2
/* pseudocode:
- ask user for input of both lengths
- use pythagorean theorem to calculate length of cross
- add total lengths to find flat total length
- multiply lengths by 1.07 to add sag
- add final lengths with sag
- print all information
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // variables
    double oppLength, perpLength, diagLength, totalLength, oppLag, perpLag, diagLag, totalLag;
    
    //ask user for input
    cout << "Enter the length of the opposite side for the patio: ";
    cin >> oppLength;
    cout << "Enter the length of the perpendicular side for the patio: ";
    cin >> perpLength;
    
    //calculate diagonal length using pythagorean theorem
    diagLength = sqrt((pow(oppLength,2))+(pow(perpLength,2)));
    
    //find total length needed
    totalLength = oppLength + (perpLength * 2) + (diagLength * 2);
    cout << "Total length calculated = " << totalLength << " feet." << endl;
    
    //multiply variables to find length with sag
    oppLag = oppLength * 1.07;
    cout << "The length of the run opposite the house including sag = " << oppLag << " feet." << endl;
    perpLag = perpLength * 1.07;
    cout << "The length of the two perpendicular runs including sag = " << perpLag << " feet each." << endl;
    diagLag = diagLength * 1.07;
    cout << "The length of the two diagonal runs including sag = " << diagLag << " feet each." << endl;
    
    //find total length with lag
    totalLag = oppLag + (perpLag * 2) + (diagLag * 2);
    cout << "The total length of the strands needed including sag = " << totalLag << " feet." << endl;
}
/* output:
Enter the length of the opposite side: 16.75
Enter the length of the perpendicular side: 12
Total length calculated = 81.9598 feet.
The length of the run opposite the house including sag = 17.9225 feet.
The length of the two perpendicular runs including sag = 12.84 feet each.
The length of the two diagonal runs including sag = 22.0473 feet each.
The total length of the strands needed including sag = 87.697 feet.
*/
