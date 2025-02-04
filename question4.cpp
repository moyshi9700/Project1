// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 4
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

int question4()
{
    // VARIABLES to be used by the program are declared
    int n = 0, flag = 0;
    double x = 0, sum = 0, denom = 3.0; // denom is short of "dominator"

    // INPUT   - getting the input data to be processed by the program
    cout << "Enter 2 numbers:" << endl;
    cin >> x;
    cin >> n;
    while (n <= 0) { // In case the n illegible
        cout << "ERROR" << endl; // If the n is illegible print ERROR and ask for a new n.
        cin >> n;
    }

    double multiPowX = x; // the carrent pow of x.
    const double POWX = x * x; // pow of x.

    // COMPUTE - processing the input data
    sum += x; // sum of the series.
    for (int i = 1; i < n; i++) {
        if (flag == 0) { // In case need to minus.
            sum -= (multiPowX * POWX) / denom; // minus the variable from the sum.
            flag = 1; // Change the flag for the next iteration.
        } else { // In case need to plus.
            sum += (multiPowX * POWX) / denom; // plus the variable to the sum.
            flag = 0; // Change the flag for the next iteration.
        }
        multiPowX *= POWX; // Update the pow of x in 2.
        denom += 2.0; // Adding 2 to the denominator.
    }
    // OUTPUT  - the computed result(s) is/are printed
    cout << sum << endl; // Print the sum of the series.
    return 0;
}
