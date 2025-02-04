// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 3
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

// The func claculate the fibonacci series until the number n and print it.
int question3()
{
    // VARIABLES to be used by the program are declared
    int n = 0, first = 0, second = 1, current = 1;
    // INPUT   - getting the input data to be processed by the program
    cout << "Enter a number:" << endl;
    cin >> n;
    while (n < 0) { //  Checking if the number is valid.
        cout << "ERROR" << endl; // if not print ERROR and ask for a new number.
        cin >> n;
    }

    // COMPUTE - processing the input data
    if (n == 0) { // In case the number n is 0.
        cout << first << endl; // Print 0.
    } else if (n == 1) { // In case the number n is 1.
        cout << first << " " << second << endl; // Print 0 1.
    } else { // In case the number n is bigger than 1.
        cout << first << " " << second; // Print 0 1.
        for (int i = 1; i < n; i++) { // Loop for the rest of the numbers.
            current = first + second; // Calculate the next number.
            cout << " " << current; // Print the next number.
            first = second; // Update the first number.
            second = current; // Update the second number.
        }
        cout << endl;
    }

    // OUTPUT  - the computed result(s) is/are printed

    return 0;
}

/**
 *
 *Running example:
 *13
 *0 1 1 2 3 5 8 13 21 34 55 89 144 233
 *0
**/