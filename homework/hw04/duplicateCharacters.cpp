/*************************************************************************
 *
 * hw04: Determine how many of the first three letters of a string are
 *       duplicates
 *
 * File Name: duplicateCharacters.cpp
 * Name:      Ethan Aquilina
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // define variables
  string stringOfchars;

  // gather input
  cout << "Please enter a string that is at least three characters long: ";
  cin >> stringOfchars;
  cout << endl;

  if (stringOfchars.length() < 3) {
    cout << "Error: String is too short" << endl;
  } else if (stringOfchars.at(0) == stringOfchars.at(1) &&
             stringOfchars.at(1) == stringOfchars.at(2)) {
    cout << "All of the first three characters are duplicates" << endl;
  } else if (stringOfchars.at(0) == stringOfchars.at(1) ||
             stringOfchars.at(1) == stringOfchars.at(2) ||
             stringOfchars.at(0) == stringOfchars.at(2)) {
    cout << "Two of the first three characters are duplicates" << endl;
  } else {
    cout << "None of the first three characters are duplicates" << endl;
    return 0;
  }

  // validate that input

  // branching statements to produce output

  return 0;
}
