/* pseudocode: 
- create function prototypes and variables
- call get order function to get order information from user
- call spools in stock function to foind how many spools are in stock
- assign spool charges function to spool charges variable
- if stock = 0:
    - print no spools in stock
- else:
    - print header
    - calculate back order by subtracting spools ordered and spools in stock
    - if stock < ordered:
        - print back order
    - print spools ready to ship
    - print charges for ready to ship spools by calling spool charges function 
    - if discount is 0, do not print "including 0% discount"
    - print shipping and handling by multiplying shippingCharge and ready to ship
    - print total charges by calling total charges function
    - print thank you

- get order function: 
    - ask user for number of spools
    - while spools are negative
        - ask user to re enter number of spools
    - ask user for discount percentage
    - while discount is negative
        - ask user to re enter discount percentage
    - ask user whether they have a custom shipping fee
    - while input is not y or n
        - ask user to re enter y or n
    - if shipping is y
        - ask user to enter the custom shipping fee amount
        - while shipping fee is negative
            - ask user to re enter shipping fee
    - else
        - assign custom shipping fee as 15

- calculate spool charges function:
    - divide discount by 100 to find numerical value
    - multiply spools and 134.95 for price of spools
    - multiply the above charges with 1 - discount to apply discount and return that value

- spools in stock function:
    - ask user for number of spools in stock
    - while stock is negative
        - ask user to re enter spools in stock
    - return stock

- total charges function:
    - parameters should be total shipping charge and spool charge
    - add both and return
*/
#include <iostream>
#include <iomanip>
using namespace std;

void getOrder(int&, double&, char&, double&);
double calculateSpoolCharges(int, double);
int spoolsInStock();
double totalCharges(double, double);

int main() {
    // create variables
    int spools, stock, backOrder, readyToShip;
    double discount, spoolCharges, shippingCharge, totalShipping, totalCharge;
    char shipping;

    // call get order function to ask user for order information
    getOrder(spools, discount, shipping, shippingCharge);

    // call spools in stock function to get number of spools in stock
    stock = spoolsInStock();

    // check if there are spools in stock
    if (stock == 0) {
        cout << "Sorry, there are no spools in stock, ready to ship." << endl;
    } else {
        cout << "\t\tOrder Summary" << endl;
        cout << "==============================" << endl;

        // calculate back order and print if necessary
        backOrder = spools - stock;
        if (stock < spools) {
            cout << backOrder << " spools are on back order." << endl;
            readyToShip = spools - backOrder;
        } else {
            readyToShip = spools;
        }

        // print spools ready to ship
        cout << readyToShip << " spools are ready to ship." << endl;

        // call spools charges function
        cout << fixed << setprecision(2);
        spoolCharges = calculateSpoolCharges(readyToShip, discount);
        cout << "The charges for " << readyToShip << " spools ";
        if (discount > 0) {
            cout << "(including a " << fixed << setprecision(1) << discount << "% discount)";
        } 
        cout << ": $" << fixed << setprecision(2) << spoolCharges << endl;

        // print shipping and handling
        totalShipping = double(shippingCharge) * readyToShip;
        cout << "Shipping and handling for " << readyToShip << " spools: $" << totalShipping << endl;

        // call total charges
        totalCharge = totalCharges(spoolCharges, totalShipping);
        cout << "The total charges (incl. shipping & handling): $" << totalCharge << endl;

        // print thank you
        cout << endl;
        cout << "Thank you, please shop again." << endl;
    }
}

// get order function
void getOrder(int& spools, double& discount, char& shipping, double& shippingCharge) {
    // ask user for input of spools
    cout << "Please enter the number of spools ordered: ";
    cin >> spools;
    // keep asking user for valid entry
    while (spools <= 0) {
        cout << "Spools must be at least one." << endl;;
        cin >> spools;
    }
    // ask user for input for discount
    cout << "Enter the discount percentage for the customer: ";
    cin >> discount;
    // keep asking user for valid entry
    while (discount < 0) {
        cout << "The percentage cannot be negative." << endl;;
        cin >> discount;
    }
    // ask user whether they have custom shipping charges
    cout << "Does the order include custom shipping and handling charges? [Enter Y for Yes or N for No]: ";
    cin >> shipping;
    // keep asking user for valid entry
    while (!(shipping == 'Y' || shipping == 'y' || shipping == 'N' || shipping == 'n')) {
        cout << "Error, invalid response. The response should be Y for Yes or N for No." << endl;
        cout << "Does the order include custom shipping and handling charges? [Enter Y for Yes or N for No]: " << endl;
        cin >> shipping;
    }
    // if customer has custom charge, ask them to input charge
    if (shipping == 'Y' || shipping == 'y') {
        cout << "Enter the shipping and handling charge: ";
        cin >> shippingCharge;
        // keep asking user for valid entry
        while (shippingCharge < 0) {
            cout << "Error, invalid charges entered. Shipping and handling cannot be negative." << endl;
            cout << "Enter the shipping and handling charge: ";
            cin >> shippingCharge;
        }
    // else shipping charge is 15
    } else {
        shippingCharge = 15;
    }
}

// calculate spool charges function:
double calculateSpoolCharges(int spools, double discount) {
    // turn discount into an actual number value
    discount /= 100;
    // calculate charges of spools
    double charges = spools * 134.95;
    // calculate total spool charges with disount applied
    return charges * (1 - discount);
}

// spools in stock function:
int spoolsInStock() {
    int stock;
    // ask user to enter spools in stock
    cout << "Enter the number of spools in stock: " << endl;
    cin >> stock;
    // keep asking user for valid entry
    while (stock < 0) {
        cout << "The number of spools cannot be negative." << endl;
        cout << "Enter the number of spools in stock: " << endl;
        cin >> stock;
    }
    return stock;
}

// total charges function:
double totalCharges(double shipping, double spool) {
    return shipping + spool;
}