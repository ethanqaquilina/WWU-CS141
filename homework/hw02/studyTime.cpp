/*************************************************************************
 *
 * hw02: Determining a student's study time
 *
 * File Name:   studyTime.cpp
 * Name:        Ethan Aquilina
 * Course:      CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // define variables
  int randomSeed;
  int firstClasshours;
  int firstClassmins;
  int secondClasshours;
  int secondClassmins;
  int thirdClasshours;
  int thirdClassmins;
  int minsWithfriends;
  int totalMins;
  int totalHours;
  int minsCal;

  // gather input
  cout << "Enter a random seed: ";
  cin >> randomSeed;

  srand(randomSeed);
  minsWithfriends = rand() % 60;

  cout << "Enter the hours and minutes (separated by a space) that you studied "
          "for each class:"
       << endl;
  cout << "  First Class: ";
  cin >> firstClasshours >> firstClassmins;
  cout << "  Second Class: ";
  cin >> secondClasshours >> secondClassmins;
  cout << "  Third Class: ";
  cin >> thirdClasshours >> thirdClassmins;
  cout << "  Your friends dropped by for " << minsWithfriends << " minutes."
       << endl
       << endl;
  minsCal =
      (firstClassmins + secondClassmins + thirdClassmins + minsWithfriends) /
      60;
  totalHours = firstClasshours + secondClasshours + thirdClasshours + minsCal;
  totalMins =
      (firstClassmins + secondClassmins + thirdClassmins + minsWithfriends) %
      60;

  cout << "You spent " << totalHours << " hours and " << totalMins
       << " minutes." << endl;

  // proccess

  return 0;
}