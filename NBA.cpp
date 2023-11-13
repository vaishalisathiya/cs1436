/* pseudocode:
- create function prototypes and variables
- ask user for input of file name
- open the file that the user inputted
- print out the header from the file
- if statement (as long as file has valid values)
    - while statement (to check if there are still values for the reader to read)
    - print each line with information from the array
    - increment i
    - close file
- else print error statement and close file
- print values by calling functions
- get min function (read in an array and its length):
    - assign minimum value as the first value in the scores array
    - create int for the index number
    - run through every element in the array using for loop
    - if any value in the array is smaller than the minimum value
        - assign the value as the new minimum value
        - assign that index number to the index variable
    - return index variable
- get max function (read in an array and its length):
    - assign maximum value as the first value in the scores array
    - create int for the index number
    - run through every element in the array using for loop
    - if any value in the array is bigger than the maximum value
        - assign the value as the new maximum value
        - assign that index number to the index variable
    - return index variable
- get avg function (read in an array and its length):
    - run through array and add each value to a total count
    - calculate average by dividing total by number of players and return that value
*/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_PLAYERS = 25;
const int NAME_COL_WIDTH = 16;
const int SCORE_WIDTH = 8;
double getAvg(int [], int);
int getMin(int [], int);
int getMax(int [], int);
int main()
{
    int pscores[NUM_PLAYERS], age[NUM_PLAYERS], steals[NUM_PLAYERS],
    fouls[NUM_PLAYERS],blocks[NUM_PLAYERS], rebounds[NUM_PLAYERS];
    string pname[NUM_PLAYERS];

    int i = 0,minIndex, maxIndex;
    string fileName;
    ifstream infile;
    double avg;

    string filename;

    // ask user for input of file name
    cout << "Enter the file name: ";
    cin >> fileName;

    // file opening steps
    infile.open(fileName);

    string temp;
    // Skip  the header line
    getline(infile, temp);
    cout << temp << endl;

    // check if file succesfully opens
    if (infile) {
        // while there is still material to read, input each next value into a different array
        while (infile >> pname[i] >> age[i] >> pscores[i] >> rebounds[i] >> steals[i] >> blocks[i] >> fouls[i]) {
            // print each line with information from the array and increment i
            //use setw(NAME_COL_WIDTH ) for players name and setw(8) for display of players details
            cout << left << setw(NAME_COL_WIDTH) << pname[i] << left << setw(SCORE_WIDTH) << age[i] << left << setw(SCORE_WIDTH) 
                << pscores[i] << left << setw(SCORE_WIDTH) << rebounds[i] << left << setw(SCORE_WIDTH) 
                << steals[i] << left << setw(SCORE_WIDTH) << blocks[i] << left << setw(SCORE_WIDTH) << fouls[i] << endl;
            i++;
        }
        infile.close();
    } else {
        // if file doesn't open, print error message and close file
        cout << "Error opening the file" << endl;
        infile.close();
    }
   
    // print values by calling functions
    cout << "\nThe average score is " << getAvg(pscores,NUM_PLAYERS) << endl;

    minIndex = getMin(pscores, NUM_PLAYERS);
    cout << "Minimum score by " << pname[minIndex] << " "
         << " = " << pscores[minIndex] << endl;

    maxIndex = getMax(pscores, NUM_PLAYERS);
    cout << "Maximum score by " << pname[maxIndex] << " "
         << " = " << pscores[maxIndex] << endl;
}

// get min function
int getMin(int arr[], int num) {
    // assign min value to first value of array
    int min = arr[0];
    int index = 0;

    // run through array and if any other value is less than the min, replace the min value
    for (int i = 1; i < num; i++) {
        if (arr[i] < min) {
            min  = arr[i];
            index = i;
        }
    }
    return index;
}

// get max function
int getMax(int arr[], int num) {
    // assign max value to first value of array
    int max = arr[0];
    int index = 0;

    // run through array and if any other value is more than the max, replace the max value
    for (int i = 1; i < num; i++) {
        if (arr[i] > max) {
            max  = arr[i];
            index = i;
        }
    }
    return index;
}

// average function
double getAvg(int arr[], int num) {
    int total = 0;
    // run through array and add each value to total
    for (int i = 0; i < num; i++) {
        total += arr[i];
    }
    // return average by dividing total by total number of players
    return total/double(num);
}
