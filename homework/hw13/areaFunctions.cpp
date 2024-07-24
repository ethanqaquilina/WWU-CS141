/****************************************************************************
 *
 * Asgn.13: Three functions for computing area
 *
 * File Name:  area.cpp
 * Course:     CPTR 141
 */

#include <cmath> // for sqrt
using namespace std;

#include "areaFunctions.h"

double area(double radius) {

  double answer;
  answer = (PI * pow(radius, 2));

  if (radius < 0) {
    answer = -1;
  }

  return answer;
}

double area(double length, double width) {

  double answer;
  answer = (length * width);

  if ((length < 0) || (width < 0)) {
    answer = -1;
  }

  return answer;
}

double area(double side1, double side2, double side3) {
  double answer;
  double perimeter;

  perimeter = (side1 + side2 + side3) / 2;

  answer = sqrt(perimeter * (perimeter - side1) * (perimeter - side2) *
                (perimeter - side3));

  if ((side1 < 0) || (side2 < 0) || (side3 < 0)) {
    answer = -1;
  } else if ((side1 + side2) < side3) {
    answer = -1;
  } else if ((side1 + side3) < side2) {
    answer = -1;
  } else if ((side2 + side3) < side1) {
    answer = -1;
  }

  return answer;
}