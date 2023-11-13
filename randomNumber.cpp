//random number

/* pseudocode
provide a seed value to calculate a random value every single time
assign a random value to two int variables
add them to calculate the sum
print all the values
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //provide a seed value
    srand((unsigned) time(0));
    
    //assign random numbers to variables
    int random1 = 43 + rand() % 45; // 43 to 87
    int random2 = 35 + rand() % 59; // 35 to 93
    
    //calculate sum
    int sum = random1 + random2;
    
    //print random numbers and sum
    cout << "Your first number is " << random1 << endl;
    cout << "Your second number is " << random2 << endl;
    cout << "The sum of " << random1 << " and " << random2 << " is " << sum << endl;
}

/* output (may vary):
Your first number is 47
Your second number is 73
The sum of 47 and 73 is 120
*/

