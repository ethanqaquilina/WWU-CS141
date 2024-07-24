/*************************************************************************
 *
 * hw01: A mad-libs introduction to Row Row Your Boat
 *
 * File Name: rowRow.cpp
 * Name:  Ethan Aquilina
 * Course:    CPTR 141
 *
 */

#include <iostream> // included for cin and cout processing
using namespace std;

int main() {

  // define your variables below
  string verb;
  string secondVerb;
  string adverb;
  string noun;
  string secondNoun;

  // gather user input using cin << variableName
  cout << "Enter a verb: ";
  cin >> verb;

  cout << "Enter a second verb: ";
  cin >> secondVerb;

  cout << "Enter an adverb: ";
  cin >> adverb;

  cout << "Enter a noun: ";
  cin >> noun;

  cout << "Enter a second noun: ";
  cin >> secondNoun;
  cout << endl;

  // print out the "song"
  cout << "Row, " << verb << ", " << secondVerb << " your boat" << endl;
  cout << adverb << " down the " << noun << "." << endl;
  cout << "Merrily, merrily, merrily, merrily," << endl;
  cout << "Life is but a " << secondNoun << "." << endl;

  return 0;
}
