//subtraction

/* pseudocode:
assign random varibales to num1 and num2
using if statement, check which number is bigger and calculate the difference
swap bigger number to num1 and smaller number to num2
ask user for difference
using if statement, print statement about whether they are correct or not
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //provide a seed value
    srand((unsigned) time(0));
    
    //establish variables
    int num1, num2, temp, diff, userDiff;
    
    //assign random variables and print
    num1 = rand() % 10;
    cout << "Your first random number is " << num1 << endl;
    num2 = rand() % 10;
    cout << "Your second random number is " << num2 << endl;
    
    //check which number is bigger and assign to temp
    if (num1 > num2) {
        diff = num1 - num2;
    } else {
        temp = num2;
        num2 = num1;
        num1 = temp;
        diff = num1 - num2;
    }
    
    //ask user for difference
    cout << "Enter the difference of the two numbers: ";
    cin >> userDiff;
    
    //check if difference is correct
    if (userDiff == diff) {
        cout << "Your answer is correct" << endl;
    } else {
        cout << "Your answer is wrong. The correct answer is " << diff << endl;
    }
}
/* output:
run1:
Your first random number is 6
Your second random number is 8
Enter the difference of the two numbers: 2
Your answer is correct

run2:
Your first random number is 0
Your second random number is 4
Enter the difference of the two numbers: 5
Your answer is wrong. The correct answer is 4

run3:
Your first random number is 2
Your second random number is 0
Enter the difference of the two numbers: -2
Your answer is wrong. The correct answer is 2
*/
