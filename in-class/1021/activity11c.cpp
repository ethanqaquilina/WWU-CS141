#include <iostream>
using namespace std;

// first function
void printSum(int num1, int num2) {
  cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
  if ( ((num1 > 10 || num1 < 1 )) || ((num2 > 10 || num2 < 1)) ){
        cout << "WARNING! One of the numbers is not within 1 throught 10!" << endl;
  }
}

// second function
void printDifference(int num1, int num2) {
  cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
  if ( ((num1 > 10 || num1 < 1 )) || ((num2 > 10 || num2 < 1)) ){
        cout << "WARNING! One of the numbers is not within 1 throught 10!" << endl;
  }
}

// //check range
// void checkRange(int num1, int num2){
//     if ( ((num1 > 10 || num1 < 1 )) || ((num2 > 10 || num2 < 1)) ){
//         cout << "WARNING! One of the numbers is not within 1 throught 10!" << endl;
//     }

// }

// main program
int main() {

  // define variables
  int firstNumber, secondNumber;
  char operation;

  // collect user input
  cout << "Enter a number between 1 and 10: ";
  cin >> firstNumber;
  cout << "Enter another number between 1 and 10: ";
  cin >> secondNumber;
  cout << "Enter a '+' to add or a '-' to subtract: ";
  cin >> operation;

  // decide which function to call
  if (operation == '+') {
    printSum(firstNumber, secondNumber);
  } else if (operation == '-') {
    printDifference(firstNumber, secondNumber);
  } else {
    cout << "Invalid Operation" << endl;
  }
}