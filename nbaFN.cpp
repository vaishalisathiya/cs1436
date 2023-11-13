/* pseudocde: 
- create function prototypes and variables
- ask user for input of file name
- open the file that the user inputted
- print out the header from the file
- if statement (as long as file has valid values)
    - while statement (to check if there are still values for the reader to read)
    - assign every other value starting with first read value to the name array by using index of i
    - assign every other value starting with the second read value to the score array by using index of i
    - increment i to go to next index value
    - for loop (to run through every element of the arrays)
        - print player's name and score with correct formatting: 
    - assign min, max, and average to variables by calling the respective function
    - print the average, min, and max by using the index given by the functions
    - close file
- else print error statement and close file
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

const int NUM_PLAYERS = 50;

double getAvg(int [], int);
int getMin(int [], int);
int getMax(int [], int);
int main()
{
    int pscores[NUM_PLAYERS];
    string pname[NUM_PLAYERS];
    int i = 0, minIndex, maxIndex;
    double avg;
    string fileName;
    ifstream infile;

    // ask user for file name
    cout << "Enter the file name: ";
    cin >> fileName;
    
    // file opening steps
    infile.open(fileName);
    
    string temp;
    // Skip  the header line
    getline(infile, temp);
    cout << "SNO " << temp << endl;
    
    //reading data into different arrays
    if (infile) {
        while (infile >> pname[i] >> pscores[i]) {
            i++;
        }

        // print each arrays values with correct formatting
        for (int i = 0; i < NUM_PLAYERS; i++) {
            cout << setw(4) << left << i + 1 << setw(15) << left << pname[i] << pscores[i] << endl;
        }

        // find values by calling functions with array and array length
        minIndex = getMin(pscores, NUM_PLAYERS);
        maxIndex = getMax(pscores, NUM_PLAYERS);
        avg = getAvg(pscores, NUM_PLAYERS);

        // print values
        cout << endl;
        cout << "The average score is " << avg << endl;
        cout << "Minimum score by " << pname[minIndex] << " = " << pscores[minIndex] << endl;
        cout << "Maximum score by " << pname[maxIndex] << " = " << pscores[maxIndex] << endl;

        // close the file
        infile.close();

    } else {
        // if file doesnt open, print error statement and close file
        cout << "Error opening the file" << endl;
        infile.close();
    }

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