/****************************************************************************
 *
 * hw08: Prompt the user to enter two sets of lowercase alphabet characters,
 *       store them in vectors, and then display the intersection.
 *
 * File Name: intersection.cpp
 * Course:    CPTR 141
 *
 */

#include <cctype>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  // define variables
  int g;
  int i;
  char userInput;
  vector<char> setOfletters;
  vector<char> setOfletterstwo;
  char choice = 'y';
  int count = 0;

  // welcome message
  cout << "Welcome to the Intersection Calculator(TM)" << endl;
  cout << "==========================================" << endl;
  cout << "Please enter two sets of lowercase alphabet characters." << endl
       << endl;

  // get set one

  do {
    cout << "Set One (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    for (i = 0; i < 100; ++i) {
      cout << "  Element: ";
      cin >> userInput;
      if (isupper(userInput) || isdigit(userInput)) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
        continue;
      } else if (userInput == '!') {
        break;
      }
      setOfletters.push_back(userInput);
    }

    cout << endl;

    // get set two
    cout << "Set Two (enter ! when done):" << endl;
    cout << "----------------------------" << endl;
    for (i = 0; i < 100; i++) {
      cout << "  Element: ";
      cin >> userInput;
      if (isupper(userInput) || isdigit(userInput)) {
        cout << "Error: Only lower case alphbet letters are allowed." << endl;
        continue;
      } else if (userInput == '!') {
        break;
      }
      setOfletterstwo.push_back(userInput);
    }

    // find and display the intersection of sets one and two
    cout << endl;
    cout << "The intersection of ";

    cout << "{ ";
    count = 0;

    for (i = 0; i < setOfletters.size(); i++) {
      if ((i >= 1) && (i < (setOfletters.size()))) {
        cout << ", " << setOfletters.at(i);
      } else {
        cout << setOfletters.at(i);
      }
    }

    cout << " } and { ";
    count = 0;

    for (i = 0; i < setOfletterstwo.size(); i++) {
      if ((i >= 1) && (i < (setOfletterstwo.size()))) {
        cout << ", ";
      }
      cout << setOfletterstwo.at(i);
    }

    cout << " } is ";

    cout << "{";
    count = 0;

    for (i = 0; i < setOfletters.size(); i++) {
      for (g = 0; g < setOfletterstwo.size(); g++) {
        if (setOfletters.at(i) == setOfletterstwo.at(g)) {
          count++;
          if (count > 1) {
            cout << ", ";
          } else if (count == 1) {
            cout << " ";
          }
          cout << setOfletters.at(i);
        }
      }
    }

    cout << " }.";

    cout << endl << endl;

    setOfletters.clear();

    setOfletterstwo.clear();

    cout << "Would you like to compute another intersection (y/n)? ";
    cin >> choice;
    cout << endl;

  } while (!(choice == 'n'));

  // prompt the user to see if they want to do another

  // end the program
  return 0;
}
