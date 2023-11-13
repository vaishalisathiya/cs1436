//lab 1.1

/*pseudocode:
- follow each set of commented out lines
- prompt user for name and assign to name1
- concatenate name1 with "Hello there" and print
- use getline to access rest of prompted phrase and assign to name2
- print
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
   string name1, name2;
   
   // Add statements below to:
   // Prompt the user to enter their name and use the stream extraction operator to read the name entered and put it in name1
   // and then print name1 and advance to the next line.
   cout << "Enter your name: " << endl;
   cin >> name1;
   cout << name1 << endl;
   
   // Add statements below to:
   // Use the concatenation operator to create a new string containing the characters from the phrase
   // "Hello there " followed by the characters in name11, assign the new string to name1 and then print name1 
   // and advance to the next line
   string newString = "Hello there " + name1;
   name1 = newString;
   cout << name1 << endl;
   
   // Add statements below to:
   // Use the getline function to read any characters left in buffer after first read and put them in name2
   // and then print name2 and advance to the nextline
   getline(cin, name2);
   cout << name2 << endl;
   
   // Add statements below to:
   // Use the concatenation operator to create a new string containing the characters in name1 followed by the
   // the characters in name2 and store the new string in name1
   // Print name1 and advance to the nextline.
   newString = name1 + name2;
   name1 = newString;
   cout << name1 << endl;
   
   return 0;
}
/*output:
Enter your name: 
vaishali sathiya
vaishali
Hello there vaishali
 sathiya
Hello there vaishali sathiya
*/
