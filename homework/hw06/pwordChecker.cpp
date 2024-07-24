/*************************************************************************
 *
 * hw06: Determine if a password meets the required specifications.
 *
 * File Name: pwordChecker.cpp
 * Name:      ???
 * Course:    CPTR 141
 *
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

  // define variables
  string password;
  int n;
  bool g = false;
  bool j = false;
  bool k = false;
  bool l = false;
  bool m = false;
  int count = 0;

  // prompt for input
  cout << "Please enter a password with the following characteristics:" << endl;
  cout << "  - at least 10 characters long" << endl;
  cout << "  - contains at least one digit" << endl;
  cout << "  - contains at least one lower-case letter" << endl;
  cout << "  - contains at least one upper-case letter" << endl;
  cout << "  - contains at least one non-alphanumeric character" << endl;
  cout
      << "  - does not contain any consecutive duplicate characters (e.g. 'aa')"
      << endl
      << endl;

  // collect input
  cin >> password;
  n = password.length();

  // loop to check password characters
  for (int i = 0; i < n; i++) {
    if (isdigit(password.at(i))) {
      g = true;
    }
    if (isupper(password.at(i))) {
      j = true;
    }
    if (islower(password.at(i))) {
      k = true;
    }
    if (!(isalnum(password.at(i)))) {
      l = true;
    }
    if ((i >= 0) && (i < n - 1)) {
      if (password.at(i) == password.at(i + 1)) {
        count++;
      }
    }
  }
  if (count == 0) {
    m = true;
  }

  // display result
  if (n < 10 || g == false || j == false || k == false || l == false ||
      m == false) {
    cout << "Password: Your password does not meet the above criteria." << endl;
  } else {
    cout << "Password: Your password has been accepted." << endl;
  }

  // end the program
  return 0;
}
