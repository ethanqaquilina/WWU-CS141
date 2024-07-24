/****************************************************************************
 *
 * Asgn.14: Find the mode of an array and three test functions
 *
 * File Name:  mode.cpp
 * Course:     CPTR 141
 */

#include <iostream>
#include "arrayMode.h"
using namespace std;

int main() {

    cout << "Testing Mode Function" << endl;

    if( testOne( mode ) ) {
        cout << " - Test One Passed" << endl;
    }
    if( testTwo( mode ) ) {
        cout << " - Test Two Passed" << endl;
    }
    if( testThree( mode ) ) {
        cout << " - Test Three Passed" << endl;
    }

    return 0;
}
