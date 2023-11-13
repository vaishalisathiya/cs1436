// This program counts the numberr of characters,
// words, and lines in the input file test.dat
/* pseudocode:
- while loop (get input from file for each character)
- numChars++ so that it counts every single character
- count the number of words:
    - create a boolean to see if x is a character
    - if x is a space or tab then contains should be false
    - if it is not then change contains to true and numWords++
    - this way no matter how long the word is, contains will not change value until it hits a non alphabet character
- count the number of lines/sentences
    - if character is a '.', '\n', '?', or '!', numLines++
- subtract number of words from number of character
- print all the information
*/
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream input_file;
    char x;
    long numChars = -1;
    long numLines = 1;
    long numWords = -1;
    bool contains = false;

    input_file.open("info.txt");
    while (input_file.get(x))
    {
        // count total values in file (change to correct number of characters later in the code)
        numChars++;
        
        // count number of words
        if (x == ' ' || x == '\t') {
            contains = false;
        } else if (!contains) {
            contains = true;
            numWords++;
        }
        
        // count number of lines
        if (x == '.' || x == '\n' || x == '?' || x == '!') {
            numLines++;
        }
    } // end of while loop
    
    // anything that isn't a space or tab should be a character so subtract from total values
    numChars -= numWords;

     // print statements
     cout << "The total number of characters = " << numChars << endl;
     cout << "The total num of word = " << numWords <<endl;
     cout << "The total number of lines = " << numLines <<endl;
}
/* output: 
The total number of characters = 951
The total num of word = 177
The total number of lines = 11
*/