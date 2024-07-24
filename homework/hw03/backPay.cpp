/*************************************************************************
 *
 * hw03: Determining an employee's retroactive pay.
 *
 * File Name:   backPay.cpp
 * Name:       Ethan Aquilina
 * Course:      CPTR 141
 *
 */

#include <cmath>
#include <iostream>
using namespace std;

int main() {

  // variables
  const double payIncrease = .076;
  int annualIncome;
  int numOfmonths;
  double newAnnsal;
  double newMonthsal;
  int retroSaldue;

  // Input
  cout << "Enter current annual salary: ";
  cin >> annualIncome;
  cout << "Enter number of months for back pay: ";
  cin >> numOfmonths;

  // Process
  newAnnsal = (annualIncome) * (1 + payIncrease);
  newMonthsal = (newAnnsal / 12);
  retroSaldue = round(((annualIncome / 12) * (payIncrease)) * numOfmonths);
  // Output
  cout << endl
       << "I'll return new annual salary, monthly salary, and retroactive pay."
       << endl;
  cout << "New annual salary: $" << newAnnsal << endl;
  cout << "New monthly salary: $" << newMonthsal << endl;
  cout << "Retroactive salary due: $" << retroSaldue << endl;

  return 0;
}