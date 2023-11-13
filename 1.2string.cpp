//lab 1.2

/*pseudocode:
- prompt user for phrase input
- use getline and assign to variable
- use .length() to assign phrase length to variable
- use .at() to identify char at a certain index
- print everything at each step
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
   // establish variables
   string phrase;
   int length;
   char firstChar, lastChar;
   
   //prompt user for input
   cout << "Enter a phrase" << endl;
   getline(cin, phrase);
   
   //print phrase
   cout << "Entered phrase: " << phrase << endl;
   
   //assign length and print
   length = phrase.length();
   cout << "Phrase length: " << length << endl;
   
   //assign chars and print
   firstChar = phrase.at(0);
   lastChar = phrase.at(length - 1);
   cout << "The first character of the phrase: " << firstChar << endl;
   cout << "The last character of the phrase: " << lastChar << endl;
}
/*output:
Enter a phrase
every good boy does fine.
Entered phrase: every good boy does fine.
Phrase length: 25
The first character of the phrase: e
The last character of the phrase: .
*/
