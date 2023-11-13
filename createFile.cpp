#include <iostream>
#include <fstream>
#include <cstdlib>     // For rand and srand
#include <ctime>       // For the time function
#include <iomanip>
using namespace std;

int main()
{
    unsigned seed = time(0);
    // Seed the random number generator.
    srand(seed);

    ofstream outputFile;
    outputFile.open("num9.txt");

    cout << "Now writing data to the file.\n";
    int count = 0, number;
    while(count < 100)
    {
        number = rand() % 50 + 1;

        // outputFile << number << " ";
        count++;
        if (count % 10 == 0)
            // Display the number and advance to the new line
            outputFile << setw(8) << number << endl;
        else
            outputFile << setw(8) << number;
    }

    // Close the file
    outputFile.close();
    cout << "\nDone.\n";
    return 0;
}