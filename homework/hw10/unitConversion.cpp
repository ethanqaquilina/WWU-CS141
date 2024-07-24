/****************************************************************************
 *
 * hw10: Use functions to compute the area and perimeter of a rectangle
 *       and covert units.
 *
 * File Name: unitConversion.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */
#include <cmath>
#include <iomanip>
#include <iostream> // for cout and cin
using namespace std;

// return the perimeter of a rectangle with a given length (1st parameter)
//  and width (2nd parameter)
float perimeter(float num1, float num2) {
  float perimeter;
  float num3 = 2;
  //   << scientific(ios_base &__base)
  //    << setprecision(int __n)

  perimeter = num3 * (num1 + num2);

  return perimeter;
}

// return the area of a rectangle with a given length (1st parameter)
//  and width (2nd parameter)
float area(float num1, float num2) {
  float area;
  area = num1 * num2;

  return area;
}

// return the number of meters of a given dimension (2nd parameter) that
//  corresponds to a number of feet (1st parameter) of the same dimension
//  (dimension 1 = linear, 2 = square, 3 = cubic, etc.)
float feetToMeters(float num1, float num2) {
  float meters;
  meters = num1 * num2;

  return meters;
}

int main() {

  float userInputone;
  float userInputtwo;
  const float feetInmeters = 0.3048;

  cout << "Welcome to the Foot-To-Meter Rectangle Calculator" << endl;
  cout << "=================================================" << endl;
  cout << "Enter the rectangle length in feet: ";
  cin >> userInputone;

  while (userInputone < 0) {
    cout << "Lengths may not be negative." << endl;
    cout << "Enter the rectangle length in feet: ";
    cin >> userInputone;
  }

  cout << "Enter the rectangle width in feet: ";
  cin >> userInputtwo;

  while (userInputtwo < 0) {
    cout << "Widths may not be negative." << endl;
    cout << "Enter the rectangle width in feet: ";
    cin >> userInputtwo;
  }
  cout << endl;

  cout << fixed << setprecision(2);
  cout << "The rectangle dimensions are: "
       << feetToMeters(userInputone, feetInmeters) << " meters by "
       << feetToMeters(userInputtwo, feetInmeters) << " meters." << endl;
  userInputone = feetToMeters(userInputone, feetInmeters);
  userInputtwo = feetToMeters(userInputtwo, feetInmeters);

  cout << fixed << setprecision(2);

  cout << "The rectangle perimeter is: "
       << perimeter(userInputone, userInputtwo) << " meters." << endl;

  cout << "The rectangle area is: " << area(userInputone, userInputtwo)
       << " square meters." << endl;
}
