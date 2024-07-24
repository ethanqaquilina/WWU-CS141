/*************************************************************************
 *
 * hw05: Implement the classic game "Rock-Paper-Scissors-Lizard-Spock"
 *
 * File Name: rockPaperScissorsLizardSpock.cpp
 * Name:      ?
 * Course:    CPTR 141
 *
 */

#include <cstdlib>  // for rand and srand commands
#include <iostream> // for cout and cin streams
using namespace std;

int main() {

  // variables
  int randomSeed;
  int userChoice;
  int computerChoice;

  // processes
  cout << "Enter a random seed: ";
  cin >> randomSeed;
  cout << endl;

  srand(randomSeed);
  computerChoice = rand() % 5;

  cout << "The computer has chosen and so must you." << endl;
  cout << "  0) Rock" << endl;
  cout << "  1) Paper" << endl;
  cout << "  2) Scissors" << endl;
  cout << "  3) Lizard" << endl;
  cout << "  4) Spock" << endl;
  cout << "Make your choice: ";
  cin >> userChoice;

  switch (userChoice) {
  case 0:
    if (computerChoice == 1) {
      cout << "The computer chose Paper -- you lose!";
    } else if (computerChoice == 2) {
      cout << "The computer chose Spock -- you lose!";
    } else if (computerChoice == 0) {
      cout << "The computer chose Rock -- it's a tie!";
    } else if (computerChoice == 3) {
      cout << "The computer chose Lizard -- you win!";
    } else if (computerChoice == 4) {
      cout << "The computer chose Scissors -- you win!";
    }
    break;
  case 1:
    if (computerChoice == 2) {
      cout << "The computer chose Scissors -- you lose!";
    } else if (computerChoice == 3) {
      cout << "The computer chose Lizard -- you lose!";
    } else if (computerChoice == 0) {
      cout << "The computer chose Rock -- you win!";
    } else if (computerChoice == 4) {
      cout << "The computer chose Spock -- you win!";
    } else if (computerChoice == 1) {
      cout << "The computer chose Paper -- it's a tie!";
    }
    break;
  case 2:
    if (computerChoice == 0) {
      cout << "The computer chose Rock -- you lose!";
    } else if (computerChoice == 4) {
      cout << "The computer chose Spock -- you lose!";
    } else if (computerChoice == 2) {
      cout << "The computer chose Scissors -- it's a tie!";
    } else if (computerChoice == 1) {
      cout << "The computer chose Paper -- you win!";
    } else if (computerChoice == 3) {
      cout << "The computer chose Lizard -- you win!";
    }
    break;
  case 3:
    if (computerChoice == 0) {
      cout << "The computer chose Rock -- you lose!";
    } else if (computerChoice == 2) {
      cout << "The computer chose Scissors -- you lose!";
    } else if (computerChoice == 3) {
      cout << "The computer chose Lizard -- it's a tie!";
    } else if (computerChoice == 1) {
      cout << "The computer chose Paper -- you win!";
    } else if (computerChoice == 4) {
      cout << "The computer chose Spock -- you win!";
    }
    break;
  case 4:
    if (computerChoice == 1) {
      cout << "The computer chose Paper -- you lose!";
    } else if (computerChoice == 3) {
      cout << "The computer chose lizard -- you lose!";
    } else if (computerChoice == 4) {
      cout << "The computer chose Spock -- it's a tie!";
    } else if (computerChoice == 2) {
      cout << "The computer chose Scissors -- you win!";
    } else if (computerChoice == 0) {
      cout << "The computer chose Rock -- you win!";
    }
    break;
  default:
    cout << "Invalid choice. Please enter a number between 0 and 4.";
    break;
  }
  cout << endl;
  return 0;
}
