#include <ctime> // form time command to use for random seed
#include <iostream>
using namespace std;

int main() {

  // pick a random number between 1 and 10
  srand(time(0));
  int theNumber = rand() % 10 + 1;

  // prompt for the user guesses
  int guessOne, guessTwo, guessThree;
  cout << "T'm thinking of a number between 1 and 10." << endl;
  cout << "You have three guesses: ";
  cin >> guessOne >> guessTwo >> guessThree;

  // set a flag based on comparing the guesses with our number
  bool success = false;
  if (guessOne == theNumber) {
    success = true;
  }
  if (guessTwo == theNumber) {
    success = true;
  }
  if (guessThree == theNumber) {
    success = true;
  }
  // respond to the user
  if (success) {
    cout << "You are correct! ";
  } else {
    cout << "You are wrong! ";
  }
  cout << "The number was " << theNumber << "." << endl;
  return 0;
}
