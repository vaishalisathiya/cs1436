// hospital overloaded function
/* pseudocode:
- function prototypes
- create variables
- ask user for input whether they are in patient or outpatient
- assign input to variable type
- while (type != I || i || O || o)
    - ask user to re enter input
    - reassign input
- if (type = I || i)
    - ask user for days in hospital
    - while (days < 0)
        - ask user to re enter days
    - ask user for daily room rate
    - while (rate <= 0)
        - ask user to re enter rate
    - ask user for medication charges
    - while (medication charges <= 0)
        - ask user to re enter medication charges
    - ask user for service charges
    - while (service charges <= 0)
        - ask user to re enter service charges
    - print total charges by calling charges function with all the parameters
- else 
    - ask user for medication charges
    - while (medication charges <= 0)
        - ask user to re enter medication charges
    - ask user for service charges
    - while (service charges <= 0)
        - ask user to re enter service charges
    - print total charges by calling charges function with all the parameters
- inpatient function: charges(days, rate, medicationCharges, serviceCharges)
    - return (days * rate) + medicationCharges + serviceCharges
- outpatient function: charges(medicationCharges, serviceCharges)
    - return medicationCharges + serviceCharges
*/
#include <iostream>
using namespace std;

double charges(int, double, double, double);
double charges(double, double);

int main()
{
    // create variables
    char type;
    int days;
    double rate, medicationCharges, serviceCharges;
    
    // ask user for patient type input
    cout << "This program will compute patient hospital charges." << endl;
    cout << "What was the patient type?" << endl;
    cout << "In-patient or Out-patient? (I or O) ";
    cin >> type;
    
    // while statement to verify if type is valid
    while (!(type == 'I' || type == 'i' || type == 'O' || type == 'o')) {
        // re enter patient type
        cout << "Please enter I or O: ";
        cin >> type;
    }
    
    // ask different information based on in patient or out patient
    if (type == 'I' || type == 'i') {
        // ask user for number of days at hospital
        cout << "Number of days in the hospital: ";
        cin >> days;
        
        // while statement to verify if days number is valid
        while (days < 0) {
            // re enter number of days
            cout << "Days in hospital must be zero or more. Please re-enter: ";
            cin >> days;
        }
        
        // ask user for daily rate
        cout << "Daily room rate: $";
        cin >> rate;
        
        // while statement to verify if daily rate is valid
        while (rate <= 0) {
            // re enter daily rate
            cout << "Room rate must be above zero. Please re-enter: $";
            cin >> rate;
        }
        
        // ask user for medication charges
        cout << "Medication charges: $";
        cin >> medicationCharges;
        
        // while statement to verify if medication charges is valid
        while (medicationCharges <= 0) {
            // re enter medication charges
            cout << "Medication charges must be above zero. Please re-enter: $";
            cin >> medicationCharges;
        }
        
        // ask user for lab fees and other service charges
        cout << "Lab fees and other service charges: $";
        cin >> serviceCharges;
        
        // while statement to verify if service charges is valid
        while (serviceCharges <= 0) {
            // re enter service charges
            cout << "Service charges must be above zero. Please re-enter: $";
            cin >> serviceCharges;
        }
        
        // print total charges by callling charges function
        cout << endl;
        cout << "The total charges are $" << charges(days, rate, medicationCharges, serviceCharges) << endl;
    } else {
        // ask user for medication charges
        cout << "Medication charges: $";
        cin >> medicationCharges;
        
        // while statement to verify if medication charges is valid
        while (medicationCharges <= 0) {
            // re enter medication charges
            cout << "Medication charges must be above zero. Please re-enter: $";
            cin >> medicationCharges;
        }
        
        // ask user for lab fees and other service charges
        cout << "Lab fees and other service charges: $";
        cin >> serviceCharges;
        
        // while statement to verify if service charges is valid
        while (serviceCharges <= 0) {
            // re enter service charges
            cout << "Service charges must be above zero. Please re-enter: $";
            cin >> serviceCharges;
        }
        
        // print total charges by callling charges function
        cout << endl;
        cout << "The total charges are $" << charges(medicationCharges, serviceCharges) << endl;
    }
}

// inpatient charges:
double charges(int days, double rate, double medicationCharges, double serviceCharges) {
    return (days * rate) + medicationCharges + serviceCharges;
}

// outpatient charges:
double charges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}
/* output: 
This program will compute patient hospital charges.
What was the patient type?
In-patient or Out-patient? (I or O) k
Please enter I or O: m
Please enter I or O: M
Please enter I or O: I
Number of days in the hospital: -3
Days in hospital must be zero or more. Please re-enter: 0
Daily room rate: $-34
Room rate must be above zero. Please re-enter: $0
Room rate must be above zero. Please re-enter: $450.35
Medication charges: $0
Medication charges must be above zero. Please re-enter: $-23
Medication charges must be above zero. Please re-enter: $45.68
Lab fees and other service charges: $2056.75

The total charges are $2102.43
*/
