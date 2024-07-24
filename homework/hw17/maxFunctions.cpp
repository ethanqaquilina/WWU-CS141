/****************************************************************************
 * HW17: Functions for Max String Stream
 *
 * File Name:  maxFunctions.cpp
 * Name:       ?
 * Course:     CPTR 141
 */

#include "maxFunctions.h"
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int findMax(string word) {

  int max;
  max = -1;
  int number;
  istringstream inSS(word);

  do {
    inSS >> number;
    if (inSS.fail()) {
      inSS.clear();
      inSS.ignore(100, ' ');
    } else {
      if (number > max) {
        max = number;
      }
    }
  } while (!inSS.eof());

  if (max == -1) {
    return -1;
  }
  return max;
}

string getSet(const int array[], int amountOfnums) {
  string litarray;
  ostringstream fullArray;
  string empty;
  empty = "{ }";
  fullArray << "{ ";
  for (int i = 0; i < (amountOfnums - 1); i++) {
    fullArray << array[i] << ", ";
  }
  fullArray << array[amountOfnums - 1];
  fullArray << " }";

  litarray = fullArray.str();

  if (litarray == "{ 0 }") {
    return empty;
  }

  return litarray;
}