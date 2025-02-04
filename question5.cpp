// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 5
//
// Program Doc
//
//
// Date written: 01/12/2024
//
// HEADER (or INCLUDE) FILE(s) required by the program is/are included
#include <iostream>
#include <cmath>
#include <ctime>

// NAMESPACE(s) to be used by the program is/are specified
using namespace std;

// The func print a triangle of numbers.
int question5()
{
    // VARIABLES to be used by the program are declared
    int n = 0;

    // INPUT   - getting the input data to be processed by the program
    cout << "Enter a one digit number:" << endl;
    cin >> n;
    while (n >= 10 || n <= 0) { // Checking if the number is valid.
        cout << "ERROR" << endl; // if not print ERROR and ask for a new number.
        cin >> n;
    }

    // COMPUTE - processing the input data
    for (int i = 0; i < n; i++) { // Loop for the rows.
        for (int j = 0; j < n; j++) { // Loop for the columns.
            if (j < i) { // In case need to print spaces.
                cout << "   ";
            } else if (n - j == 1) { // In case the number is the last in the row (1).
                cout << n - j << endl;
            } else { // In case the number is not the last in the row.
                cout << n - j << ", ";
            }
        }
    }
    // OUTPUT  - the computed result(s) is/are printed

    return 0;
}
