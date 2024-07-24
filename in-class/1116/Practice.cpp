#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  // declare variables
  ostringstream remain0Stream, remain1Stream, remain2Stream;
  int number;
  // instructions
  cout << "Enter a list of intergers to classify. A negative number quits."
       << endl;
  do {

    // grab number from user and exit if negative
    cout << "Number: ";
    cin >> number;
    if (number < 0)
      break;
    // add to string stream
    if (number % 3 == 0) {
      remain0Stream << number << " ";
    }
    if (number % 3 == 1) {
      remain1Stream << number << " ";
    }
    if (number % 3 == 2) {
      remain2Stream << number << " ";
    }
  } while (true);
  // print results
  cout << "Remainder of  0: " << remain0Stream.str() << endl;
  cout << "Remainder of  1: " << remain1Stream.str() << endl;
  cout << "Remainder of  2: " << remain2Stream.str() << endl;
  return 0;
}