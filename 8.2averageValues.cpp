// 8.2 average values
/* pseudocode: 
- ask user for input (filename)
- if file opens properly
    - open output file named badvalues.txt
    - if file opens properly
        - while statement (to read in every value into a variable)
            - count++ (to count total numbers in file)
            - if (num < 0 || num > 150)
                - print number in output file with 3 decimal spots
                - invalid++
            - else
                - valid++
                - total += num (to eventually calculate average)
            - calculate average of valid numbers (total / valid)
        - print all the values
        - if there were no valid values, print no valid values
        - else print average
- else print the file could not be opened
*/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // create variables
    double num, avg, total = 0;
    ifstream inputFile;
    ofstream outputFile;
    int valid = 0, invalid = 0, count = 0;
    string name;
    
    // ask user for file name
    cout << "Enter the input file name." << endl;
    cin >> name;
    cout << endl;
    
    // open file that is the same name
    inputFile.open(name);
    
    // check if the file opens properly
    if (inputFile) {
        // open output file and check if it opens properly
        outputFile.open("badvalues.txt");
        if (outputFile) {
            // read in values from input file
            while (inputFile >> num) {
                count++;
                
                // check if number is valid (and if so, print number into output file)
                if (num < 1 || num > 150) {
                    outputFile << fixed << setprecision(3);
                    outputFile << num << endl;
                    invalid++;
                } else {
                    // increment valid values and add to total
                    valid++;
                    total += num;
                }
            }
            // calculate average
            avg = total / valid;
            
            // print all the values
            cout << "Total number of values read: " << count << endl;
            cout << "Valid values read: " << valid << endl;
            cout << "Invalid values read: " << invalid << endl;
            cout << fixed << setprecision(2);
            
            // check if there were any valid values (if there were then print average)
            if (valid > 0) {
                cout << "The average of the valid numbers read = " << avg << endl;
            } else {
                cout << "The file did not contain any valid values." << endl;
            }
        }
    } else {
        // display error message
        cout << "The file \"" << name << "\" could not be opened." << endl;
        inputFile.close();
    }
    
}