// assignment 8
/* pseudocode: 
- create variables
- ask user for file name and open the file with the user input
- if statement (if it has something in it)
    - while loop (while the file has values, input it into number)
        - if statement (if the loop (count) has run 20 times, break out of it)
        - increase the count variable
        - if statement (if number is less than the already existant min value, assign number to min)
        - if statement (if number is more than the already existant max value, assign number to max)
        - add up total by add number to the total value each time the loop runs
- else display error message and close file
- close input file
- calculate the average by dividing the total by 20 (or count)
- print the count, average, min, and max
- ask user for output file name (which will open a file in that name)
- display each value into that text file
- close the output file
*/

#include <iostream>
#include <fstream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    // create variables
    ifstream inputFile;
    ofstream outputFile;
    string filename, output;
    int number, total = 0, count = 0, min = INT_MAX, max = INT_MIN;
    double average;

    /*
        Following are typical values in a compiler where integers
        are stored using 32 bits.

        Value of INT_MAX is +2147483647.
        Value of INT_MIN is -2147483648.
    */
   
    // ask user for input file name
    cout << "Enter the file name: ";
    cin >> filename;
    cout << endl;
   
    // open input file
    inputFile.open(filename);
   
    // check if file opens properly
    if (inputFile) {
        // input each number from file to variable
        while (inputFile >> number) {
            // break loop if greater than 20
            if (count >= 20) {
                break;
            }
            count++;
            
            // check for max and min
            if (number < min) {
                min = number;
            }
            if (number > max) {
                max = number;
            }
            
            // add up total
            total += number;
        }
    } else {
        // display error message
        cout << "Error opening the file." << endl;
        inputFile.close();
    }
    // close input file
    inputFile.close();
    
    // calculate average
    average = double(total) / count;
   
    // print values
    cout << "count is : " << count << endl;
    cout << "average is : " << average << endl;
    cout << "min is     : " << min << endl;
    cout << "max is     : " << max << endl;
    
    // ask for output file name
    cout << "Enter output file name: ";
    cin >> output;
    
    // open output file
    outputFile.open(output);
    
    // display text in output file
    outputFile << "count is : " << count << endl;
    outputFile << "average is : " << average << endl;
    outputFile << "min is     : " << min << endl;
    outputFile << "max is     : " << max << endl;
    
    // close output file
    outputFile.close();
}