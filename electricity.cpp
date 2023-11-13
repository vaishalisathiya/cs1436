//Calculating electricity Usage

/*
Pseudocode
- Calculate the total for Bulb usage,  Fan usage and AC usage in KWH
- Calculate total usage by adding the total for Bulb usage,  Fan usage and AC usage
- Calculate the percentage of each usage wrt total usage 
- Calculate electricity bill in dollars.  Remember the price is specified in cents

pseudocode:
- create variables including constant variables\
- prompt user for all information
- calculate power taken by each appliance
- calculate and print total KWH
- calculate and print percentages
- calculate and print electricity bill
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    //create variables
    const int BULB_KW = 60;
    const int FAN_KW = 40;
    int numBulb, numAc, numFan, totalWatts;
    float bulbOn, acOn, fanOn, perUnitPrice, bulbWatts, acWatts, fanWatts, totalKWH;
    double bulbPercent, acPercent, fanPercent, elecBill;
    
    // prompt user for number of light bulbs
    cout << "# of light bulbs: ";
    cin >> numBulb;
    
    //prompt user for number of hours bulb is on
    cout << "Average # of hours each bulb is ON in a day: ";
    cin >> bulbOn;
    
    //calculate bulb KWH
    bulbWatts = (numBulb * bulbOn * BULB_KW * 30);
    
    //prompt user for ac units power
    cout << "AC unit's power: ";
    cin >> numAc;
    
    //prompt user for number of hours ac is on
    cout << "Typical # of hours AC unit is ON in a day: ";
    cin >> acOn;
    
    //calculate ac KWH
    acWatts = (numAc * acOn * 30);
    
    //prompt user for number of fans
    cout << "# of fans: ";
    cin >> numFan;
    
    //prompt user for number of hours fan is on
    cout << "Average # of hours each Fan is ON in a day: ";
    cin >> fanOn;
    
    //calculate fan KWH
    fanWatts = (numFan * fanOn * FAN_KW * 30);
    
    //prompt user for price of electricity
    cout << "Per-unit price of electricity: ";
    cin >> perUnitPrice;
    cout << endl;
    
    //calculate total KWH
    totalWatts = bulbWatts + acWatts + fanWatts;
    totalKWH = ceil(totalWatts) / 1000;
    cout << "Total electricity usage: " << ceil(totalKWH) << " KWH" << endl;
    
    //calculate percentages and print
    cout << fixed << setprecision(1);
    bulbPercent = (double(bulbWatts)/totalWatts) * 100;
    acPercent = (double(acWatts)/totalWatts) * 100;
    fanPercent = (double(fanWatts)/totalWatts) * 100;
    cout << "Bulbs: " << bulbPercent << "% " << "AC: " << acPercent << "% " << "FANs: " << fanPercent << "%" << endl;
    
    //calculate electricity bill and print
    elecBill = (round((totalWatts * perUnitPrice)) / 100000);
    cout << setprecision(2);
    cout << "Electricity bill for the month: $  " << elecBill << endl;
    
    
}
/* output:
# of light bulbs: 8
Average # of hours each bulb is ON in a day: 3.4
AC unit's power: 800
Typical # of hours AC unit is ON in a day: 8
# of fans: 5
Average # of hours each Fan is ON in a day: 0.5
Per-unit price of electricity: 10.2

Total electricity usage: 244 KWH
Bulbs: 20.1% AC: 78.7% FANs: 1.2%
Electricity bill for the month: $  24.88
*/
