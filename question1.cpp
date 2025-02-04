// Author: Nehoray Danino
// ID1: 325933919
//
// Course: Intro to CS with C++
//
// Targil 4 -- sheela 1
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

// The func create a randomal list of numbers and check if they are in sorted up.
int question1()
{
    // VARIABLES to be used by the program are declared
    srand(time(0)); // extend the ranomalism of the numbers
    int randNum = rand() % 1000 + 1; // variable who get a randomal numbers between 1-1000.
    int last = 0, flag = 1;

    // INPUT   - getting the input data to be processed by the program

    // COMPUTE - processing the input data
    for (int i = 0; i < 10; i++) { // Loop for creating ten numbers
        randNum = rand() % 1000 + 1; // Variable who get a randomal numbers between 1-1000.
        cout << randNum << " "; // Printing the numbers.
        if (randNum < last) { // In case the list is unsorted
            flag = 0;
        }
        last = randNum;
    }
    if (flag == 0) { // The list is unsorted
        cout << "\nNot sorted list" << endl;
    } else { // The list is sorted.
        cout << "\nSorted list" << endl;
    }

    // OUTPUT  - the computed result(s) is/are printed

    return 0;
}

/**
 *
 *Runnubg Example:
 *87 521 79 392 331 278 484 863 573 164
 *Not sorted list
 *0
 *
 **/

