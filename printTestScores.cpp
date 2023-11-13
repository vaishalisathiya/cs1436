#include <iostream>
using namespace std;

void printGrade(double);

int main()
{
    double testScore;
    for (int i = 0; i < 5; i++) {
        cout << "Enter score: ";
        cin >> testScore;
        cout << "The grade is: ";
        printGrade(testScore);
    }
}

void printGrade(double score) {
    if (score >= 90) {
        cout << 'A' << endl;
    } else if (score >= 80) {
        cout << 'B' << endl;
    } else if (score >= 70) {
        cout << 'C' << endl;
    } else if (score >= 60) {
        cout << 'D' << endl;
    } else {
        cout << 'F' << endl;
    }
}
