#include <iostream>
using namespace std;

char getGrade(double);

int main()
{
    double score;
    for (int i = 0; i < 5; i++) {
        cout << "Enter score: ";
        cin >> score;
        cout << "The grade is: " << getGrade(score) << endl;
        char grade = getGrade(score);
        cout << "The grade is: " << grade << endl;
    }
}

char getGrade(double score) {
    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}


