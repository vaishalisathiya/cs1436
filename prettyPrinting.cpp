/* A program to demonstrate the use of the stream manipulators to format output.
   The program displays student names and GPA's in tabular form
*/

/* pseudocode
first data set:
print original data

second data set:
print headings and names with setwidth of name column width
format gpa number to have 2 decimal points with fixed and set precision (2)
print gpa with gpa column width

third data set:
print first name and last name in two different "columns" using set width
continue formatting for the rest of the names
print each gpa value with set width
*/

#include <iostream>
#include <iomanip>
#define NAME_COL_WIDTH 40
#define FNAME_COL_WIDTH 20
#define LNAME_COL_WIDTH 20
#define GPA_COL_WIDTH 4

using namespace std;

int main() {
    // Display headings
    cout << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << "GPA";
    cout << endl;

    // Display the data in the table under the headings
    
    // ROW 1
    cout << "Ables, Jack";
    cout << '\t';
    cout << 3.1;
    cout << endl;

    // ROW 2
    cout << "Westermann, Celeste";
    cout << '\t';
    cout << 2.0;
    cout << endl;

    // ROW 3
    cout << "Johnson, Vonda";
    cout << '\t';
    cout << 3.67;
    cout << endl;
    cout << endl;

    // Use stream manipulators to format
    cout << "-----------------------------------------------------------------------\n";
    
    //second set of data:
    cout << fixed << setprecision(2);
    
    //display heading with gpa in seperate coloumn
    cout << left << setw(NAME_COL_WIDTH) << "LAST NAME, FIRST NAME";
    cout << '\t';
    cout << right << setw(GPA_COL_WIDTH) << "GPA";
    
    //row 1
    cout << "\n" << left << setw(NAME_COL_WIDTH) << "Ables, Jack";
    cout << '\t';
    cout << 3.1;

    //row 2
    cout << "\n" << left << setw(NAME_COL_WIDTH) << "Westermann, Celeste";
    cout << '\t';
    cout << 2.0;

    //row 3
    cout << "\n" << left << setw(NAME_COL_WIDTH) << "Johnson, Vonda";
    cout << '\t';
    cout << 3.67;
    
    cout << endl;
    cout << endl;
    cout << "-----------------------------------------------------------------------\n";
    
    //third set of data:
    
    //display heading with gpa in seperate coloumn
    cout << left << setw(LNAME_COL_WIDTH) << "LAST NAME";
    cout << left << setw(FNAME_COL_WIDTH) << "FIRST NAME";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << "GPA";
    
    //row 1
    cout << "\n" << left << setw(LNAME_COL_WIDTH) << "Ables";
    cout << left << setw(FNAME_COL_WIDTH) << "Jack";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << 3.1;

    //row 2
    cout << "\n" << left << setw(LNAME_COL_WIDTH) << "Westermann";
    cout << left << setw(FNAME_COL_WIDTH) << "Celeste";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << 2.0;

    //row 3
    cout << "\n" << left << setw(LNAME_COL_WIDTH) << "Johnson";
    cout << left << setw(FNAME_COL_WIDTH) << "Vonda";
    cout << '\t';
    cout << setw(GPA_COL_WIDTH) << 3.67;
    
}
/*output:
LAST NAME, FIRST NAME   GPA
Ables, Jack     3.1
Westermann, Celeste     2
Johnson, Vonda  3.67

-----------------------------------------------------------------------
LAST NAME, FIRST NAME                            GPA
Ables, Jack                                     3.10
Westermann, Celeste                             2.00
Johnson, Vonda                                  3.67

-----------------------------------------------------------------------
LAST NAME           FIRST NAME                  GPA 
Ables               Jack                        3.10
Westermann          Celeste                     2.00
Johnson             Vonda                       3.67
*/

