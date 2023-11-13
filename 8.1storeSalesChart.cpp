// store sales charts
/* pseudocode: 
- write function prototypes
- prompt for the input file name 
- read in the file name
- open the input file for this file name
- if the file opens successfully
     - open the output file ("saleschart.txt")
     - if the file opens successfully
        - check if file contains any values using empty function (eplained later)
            - if file contains values, print header
            - else keep empty
        - while (readFile record (store number and sales for store))
               - process record read
               - if store number is out of range (num < 1 || num > 99), print error message
               - if store data is below (data < 0), print store skipped
               - if both values are correct (num > 0 && num < 100 && data >= 0)
                    - print store number with setw(2)
                    - print stars using while loop (while data > 4999)
                        - print a star
                        - decrease data by 5000
          - end while
          - close the input and output files
     - otherwise, display a message if the output file does not open, close the input file
- otherwise, display a message if the input file does not open 

empty function:
- open file using name provided when calling the function
- check if file opens properly
    - put first number in file into num
    - if num != 0, return false (because that means there was a non zero value in the file)
    - else return true
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// function prototypes
bool empty(string);

int main()
{
    // create variables
    string name;
    ifstream inputFile;
    ofstream outputFile;
    unsigned int storeNum = 0;
    long int storeData = 0;
    
    // prompt user for file name
    cout << "Please enter the input file name." << endl;
    cin >> name;
    
    // read file name and open input file
    inputFile.open(name);
    
    // check if file opens properly
    if (inputFile) {
        // open output file
        outputFile.open("saleschart.txt");
        
        // check if output file opens properly
        if (outputFile) {
            // check if file has any values inside
            if (!(empty(name))) {
                outputFile << "SALES BAR CHART" << endl;
                outputFile << "(Each * equals 5,000 dollars)" << endl;
            }
            
            // read in values and input to ints
            while (inputFile >> storeNum >> storeData) {
                // if store number is out of range, print error message
                if (storeNum < 1 || storeNum > 99) {
                    cout << storeNum << " is not in the range 1 through 99." << endl;
                }
                
                // if store data is less than 0, skip store
                if (storeData < 0) {
                    cout << "Skipped store #" << storeNum << "." << endl;
                } 
                
                // if all data is valid, print values in correct format into the output file
                if ((storeNum > 0 && storeNum < 100) && storeData >= 0) {
                    outputFile << "Store " << setw(2) << storeNum << ": ";
                    while (storeData > 4999) {
                    outputFile << "*";
                    storeData -= 5000; // to reduce value and avoid runtime error
                    }
                    outputFile << endl;
                }
                
            }
            // close input and output files
            inputFile.close();
            outputFile.close();
        } else {
            cout << "Output file does not open." << endl;
            inputFile.close();
        }
    } else {
        // display error message
        cout << "Error opening the file." << endl;
        cout << "\"" << name << "\" could not be opened." << endl;;
        inputFile.close();
    }
}

// function to check if a file is empty
bool empty(string file) {
    
    ifstream inputFile;
    int num = 0;
    
    // open file
    inputFile.open(file);
    
    // check if file opens properly
    if (inputFile) {
        // put the first number into an int
        inputFile >> num;
        
        // if there exists a value, return false for not empty, else return true
        if (num != 0) {
            return false;
        } else {
            return true;
        }
    }
}