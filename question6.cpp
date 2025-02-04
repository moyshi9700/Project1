// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 6
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

// The func check if the number who recieved is downwards.
int question6()
{
    // VARIABLES to be used by the program are declared
    int num = 0, flag = 1;

    // INPUT   - getting the input data to be processed by the program
    cout << "Enter a number:" << endl;
    cin >> num;
    while (num <= 0) { // Checking if the number is valid.
        cout << "ERROR" << endl;
        cin >> num;
    }

    // COMPUTE - processing the input data
    for (int i = 1; i < num; i++) { // Loop until we finished to pass all the digits.
        if ((num % 100 / 10) - (num % 10) != 1) { // Checking if the number is downwards.
            flag = 0; // If not, the number is not downwards.
        }
        num /= 10; // Removing the last digit.
    }

    // OUTPUT  - the computed result(s) is/are printed
    if (flag == 1) { // In case the number is downwards.
        cout << "YES" << endl; // Print YES.
    } else { // In case the number is not downwards.
        cout << "NO" << endl; // Print NO.
    }
    return 0;
}
