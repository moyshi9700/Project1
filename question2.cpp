// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 2
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

// The func is receving two numbers and list of numbers and calculates the sum of the list.
int question2()
{
    // VARIABLES to be used by the program are declared
    int summary = 0, counter = 0, num = 0, sum = 0, count = 0;
    // INPUT   - getting the input data to be processed by the program
    cout << "Enter 2 positive numbers:" << endl;
    cin >> summary;
    while (summary < 0) { // checking if the numbers are positive
        cout << "ERROR" << endl; // if not, the user is asked to enter the numbers again
        cin >> summary;
    }
    cin >> counter;
    while (counter < 0) { // checking if the numbers are positive
        cout << "ERROR" << endl; // if not, the user is asked to enter the numbers again
        cin >> counter;
    }

    cout << "Enter a list of numbers:" << endl;

    // COMPUTE - processing the input data
    do { // the loop is running until the sum of the numbers is equal to the first number or the counter is equal to the second number
        cin >> num; // getting the numbers from the user
        sum += num; // adding the numbers to the sum
        count++; // counting the numbers
    } while (sum <= summary && count != counter); // checking if the sum is equal to the first number or the counter is equal to the second number

    // OUTPUT  - the computed result(s) is/are printed
    cout << sum << endl; // printing the sum
    return 0;
}

/**
 *
 *Running example:
 *5 10
 *Enter a list of numbers:
 *2
 *7
 *9
 *0
**/

