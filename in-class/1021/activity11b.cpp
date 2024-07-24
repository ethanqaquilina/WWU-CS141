#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void printArea(double radius){
   double area = 3.14159 * pow(radius,2);
   cout << fixed << setprecision(2);
   cout << "The area of a circle with radius "
        << radius << " is " << area << endl;
}

void printDiameter(double radius){
    double diameter = radius * 2;
    cout << fixed << setprecision(2);
    cout << "The diameter of the circle is " << diameter << endl;
}

int main() {
   int varOne;
   int varTwo;

   cout << "Enter Radius 1: ";
   cin >> varOne;
   cout << "Enter Radius 2: ";
   cin >> varTwo;

   printArea(varOne);
   printArea(varTwo);

   printDiameter(varOne);
   printDiameter(varTwo);
}

