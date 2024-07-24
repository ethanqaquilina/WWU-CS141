#include <iostream>
using namespace std;

int mode(int array[], int arraySize) {

  int commonNum;
  int twocommonNum;
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

int main() {

  int array[] = {55, 22, 22, 55, 1, 6};

  cout << mode(array, 6);

  return 0;
}