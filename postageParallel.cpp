// postage parallel
/* pseudocode: 
- ask user for their letter weight input
- for statement (run through all elements in the array)
    - if user letter weight is less than the letter weight of respective index:
        - assign that index number to j
        - change foundweight to true
        - break out of loop
- check if weight was found (foundWeight variable)
- if true:
    - print cost by calling postageCosts[] with j variable to match index
- if false:
    - print letter is too heavy
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
    const int NUM_ELEMENTS = 14;
    // Weights in ounces
    double letterWeights[14] = { 1.0, 2.0, 3.0, 3.5, 4.0, 5.0, 6.0,
                                7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0 };
    // Costs in cents (usps.com 2017)
    int postageCosts[14] = { 49, 70, 91, 112, 161, 182, 203,
                            224, 245, 266, 287, 308, 329, 350 };
    double userLetterWeight;
    bool foundWeight = false;
    int j;
    
    // ask user for input
    cout << "Please enter your letter weight: ";
    cin >> userLetterWeight;

    // run through all elements in array
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        // check if user input is a part of the array
        if (userLetterWeight <= letterWeights[i]) {
            j = i;
            foundWeight = true;
            break;
        }
    }
    
    // check if weight was found
    if (foundWeight) {
        // if weight is found, print the costs for that weight - write code for this
        cout << "Postage for USPS first class mail is " << postageCosts[j] << " cents\n";
    } else {
        // if weight is not found, print the following message - - write code for this
        cout << "Letter is too heavy for USPS first class mail.\n";
    }
    
}
