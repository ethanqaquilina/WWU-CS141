/*************************************************************************
 *
 * hw07: Construct an arrow of a given size using a given character
 *
 * File Name: arrow.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {

  // define variables
  double rows;
  char charInput;
  rows = 0;

  // prompt for and collect input

  cout << "Enter the size of the arrow in rows: ";
  cin >> rows;

  while (rows <= -1) {
    cout << "Number of rows may not be negative" << endl;
    cout << "Enter the size of the arrow in rows: ";
    cin >> rows;
  }
  cout << "Enter the character to use: ";
  cin >> charInput;

  // print arrow using nested loops

  for (int j = 0; j <= (rows) / 2; j++) {
    for (int i = 1; i <= j; i++) {
      cout << charInput;
    }
    cout << endl;
  }

  for (int j = round(rows / 2); j > 0; j--) {
    for (int i = 1; i <= j; i++) {
      cout << charInput;
    }
    cout << endl;
  }

  // end the program
  return 0;
}
