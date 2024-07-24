/*************************************************************************
 *
 * In-Class Exercise:  Compute the volumn of a right circular cylindar
 *                     of a given radius and height
 *
 * File Name: volume.cpp
 * Course:    CPTR 141
 *
 */

#include <cmath>
#include <iostream>
using namespace std;

// define constant
const double PI = 3.14159;

int main() {

  // define variables
 double radius,height;

  // prompt for input
cout << "Enter Radius: ";
cin >> radius;
cout << "Enter Height: ";
cin >> height;
  // print out the volume (use the pow function)
cout << "The volume is: " << PI*pow(radius,2)*height << endl;
  return 0;
}
