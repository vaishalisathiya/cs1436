//Calculating male and female percentage

/*
Pseudocode
write your Pseudocode here
- prompt user for number of male and female students
- add total number of students
- calculate and print percentages
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //create variables
   int male, female, total;
   double maleP, femaleP;
   
   //prompt user for number of students
   cout << "Enter the number of male students: ";
   cin >> male;
   cout << "Enter the number of female students: ";
   cin >> female;
   
   //calculate total and print
   total = male + female;
   cout << "For the " << total << " students in the class the male and female percentages are: " << endl;
   
   //calculate percentages and manipulate
   maleP = (double(male) / total) * 100;
   femaleP = (double(female) / total) * 100;
   cout << "Male: " << noshowpoint << maleP << "%" << endl;
   cout << "Female: " << noshowpoint << femaleP << "%" << endl;
}
/* output:
Enter the number of male students: 25
Enter the number of female students: 17
For the 42 students in the class the male and female percentages are: 
Male: 59.5238%
Female: 40.4762%
*/
