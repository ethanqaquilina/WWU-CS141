/****************************************************************************
 *
 * Asgn.14: Find the mode of an array and three test functions
 *
 * File Name:  arrayMode.h
 * Course:     CPTR 141
 */

#include "arrayMode.h"

int mode(int array[], int arraySize) {

  int commonNum;
  int numFrequency = 0;
  int frequency;

  for (int i = 0; i < arraySize; i++) {
    frequency = 0;
    for (int g = 0; g < arraySize; g++) {
      if (array[i] == array[g]) {
        frequency++;
        if (frequency > 1) {
          if (frequency > numFrequency) {
            commonNum = array[i];
            numFrequency = frequency;
          } else if (frequency == numFrequency) {
            if (commonNum > array[i]) {
              commonNum = array[i];
            }
          }
        }
      }
    }
  }

  if (numFrequency == 0) {
    return -1;
  }

  return commonNum;
}

bool testOne(int (&theMode)(int[], int)) {
  int testArray[6] = {2, 4, 6, 9, 8, 3};
  bool TF = false;
  if (theMode(testArray, 6) == -1) {

    TF = true;
  }

  return TF;
}

bool testTwo(int (&theMode)(int[], int)) {
  int testArray[6] = {2, 2, 6, 9, 8, 3};
  bool TF = false;
  if (theMode(testArray, 6) == 2) {

    TF = true;
  }

  return TF;
}

bool testThree(int (&theMode)(int[], int)) {
  int testArray[6] = {2, 6, 6, 7, 2, 3};
  bool TF = false;
  if (theMode(testArray, 6) == 2) {

    TF = true;
  }

  return TF;
}
