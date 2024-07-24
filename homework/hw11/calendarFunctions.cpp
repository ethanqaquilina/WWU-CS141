/****************************************************************************
 *
 * Hw11: Supporting functions for a program to print out the calendar
 *       for a given month and year.
 *
 * File Name:  calendarFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include <string>
using namespace std;

#include "calendarFunctions.h"

string nameOfMonth(int month) {

  string monthName;

  if ((month > 0) && (month < 13)) {
    switch (month) {
    case 1:

      monthName = "January";
      break;

    case 2:

      monthName = "February";
      break;

    case 3:

      monthName = "March";
      break;

    case 4:

      monthName = "April";
      break;

    case 5:

      monthName = "May";
      break;

    case 6:

      monthName = "June";
      break;

    case 7:

      monthName = "July";
      break;

    case 8:

      monthName = "August";
      break;

    case 9:

      monthName = "September";
      break;

    case 10:

      monthName = "October";
      break;

    case 11:

      monthName = "November";
      break;

    case 12:

      monthName = "December";
      break;
    }

  } else {
    monthName = " ";
  }

  return monthName;
}

bool isLeapYear(int year) {

  int leapYear;

  if ((year % 400) == 0) {

    leapYear = 0;
  } else if (((year % 4) == 0) && (!((year % 100) == 0))) {
    leapYear = 0;
  } else {
    leapYear = 1;
  }

  if (leapYear == 0) {
    leapYear = 1;
  } else {
    leapYear = 0;
  }

  return leapYear;
}

int daysInMonthAndYear(int month, int year) {
  int test;

  if (((month > 13) || (month < 0))) {
    test = -1;
    return test;
  } else if ((year > 9999) || (year < 1000)) {
    test = -1;
    return test;
  }

  switch (month) {
  case 1:
    test = 31;
    break;

  case 2:
    if ((year % 400) == 0) {
      test = 29;
      break;
    } else if (((year % 4) == 0) && (!((year % 100) == 0))) {
      test = 29;
      break;

    } else {
      test = 28;
      break;
    }

  case 3:
    test = 31;
    break;

  case 4:
    test = 30;
    break;

  case 5:
    test = 31;
    break;

  case 6:
    test = 30;
    break;

  case 7:
    test = 31;
    break;

  case 8:
    test = 31;
    break;

  case 9:
    test = 30;
    break;

  case 10:
    test = 31;
    break;

  case 11:
    test = 30;
    break;

  case 12:
    test = 31;
    break;
  }

  return test;
}
