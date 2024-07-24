/****************************************************************************
 *
 * hw13: A simple blackjack game
 *
 * File Name:  blackjack.cpp
 * Course:     CPTR 141
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for random_shuffle
#include "blackJackFunctions.h"
using namespace std;

// Global Variable
vector<string> deck;

//----------------------------------- local function prototypes

/*=====================================================================================
 * FUNCTION: initiateDeck()
 *   Clears out the global vector "deck" and places the standard deck of 52 playing 
 *   cards represented as strings into that vector and shuffles them.
 */
void initiateDeck();


/*=====================================================================================
 * FUNCTION: printStatus(hand,score)
 *   Prints the cards currently in the hand and the current score.
 */
void printStatus(vector<string>,int);


/*=====================================================================================
 * FUNCTION: printCards(cards)
 *   Prints the vector of cards passed to it
 */
void printCards(vector<string>);


// The main program
int main() {

  // set up player and dealer hands and scores
  bool busted;
  vector<string> playerHand;
  vector<string> dealerHand;
  int playerScore = 0;
  int dealerScore = 0;
  char action;

  // set up the deck to play
  srand(time(NULL));
  initiateDeck();

  // print out welcome message
  cout << "Welcome to Blackjack" << endl << endl;

  do {

    // prompt for hit
    cout << "(H)it or (S)tand Pat? ";
    cin >> action;

    // if player hits, get card and update score
    if (toupper(action) == 'H') {
      busted = hitMe(playerHand,playerScore);
      cout << "Player Status: " << endl;
      printStatus(playerHand,playerScore);
      if (busted) {
        cout << "You busted. Sorry!" << endl;
        return 0;
      }
    }

    // now if the player stands, dealer keeps hitting until wins or busts
    if (toupper(action) == 'S') {
      while (dealerScore <= playerScore) {
        cout << "Dealer Hits..." << endl;
        busted = hitMe(dealerHand,dealerScore);
        cout << "Dealer Status: " << endl;
        printStatus(dealerHand,dealerScore);
      }
      if(busted) {
        cout << "Dealer busts.  You win!" << endl;
      } else {
        cout << "Dealer stands. You loose!" << endl;
      }
      return 0;

    // otherwise dealer hits once
    } else {
      cout << "Dealer Hits..." << endl;
      busted = hitMe(dealerHand,dealerScore);
      cout << "Dealer Status: " << endl;
      printStatus(dealerHand,dealerScore);
      if(busted) {
        cout << "Dealer busts.  You win!" << endl;
        return 0;
      }
    }
    
  } while(true);

}

//----------------------------------- local function definitions

void initiateDeck() {
  // start with empty deck
  deck.resize(0);

  // add hearts
  deck.push_back("ace of hearts");
  deck.push_back("two of hearts");
  deck.push_back("three of hearts");
  deck.push_back("four of hearts");
  deck.push_back("five of hearts");
  deck.push_back("six of hearts");
  deck.push_back("seven of hearts");
  deck.push_back("eight of hearts");
  deck.push_back("nine of hearts");
  deck.push_back("ten of hearts");
  deck.push_back("jack of hearts");
  deck.push_back("queen of hearts");
  deck.push_back("king of hearts");

  // add diamonds
  deck.push_back("ace of diamonds");
  deck.push_back("two of diamonds");
  deck.push_back("three of diamonds");
  deck.push_back("four of diamonds");
  deck.push_back("five of diamonds");
  deck.push_back("six of diamonds");
  deck.push_back("seven of diamonds");
  deck.push_back("eight of diamonds");
  deck.push_back("nine of diamonds");
  deck.push_back("ten of diamonds");
  deck.push_back("jack of diamonds");
  deck.push_back("queen of diamonds");
  deck.push_back("king of diamonds");

  // add clubs
  deck.push_back("ace of clubs");
  deck.push_back("two of clubs");
  deck.push_back("three of clubs");
  deck.push_back("four of clubs");
  deck.push_back("five of clubs");
  deck.push_back("six of clubs");
  deck.push_back("seven of clubs");
  deck.push_back("eight of clubs");
  deck.push_back("nine of clubs");
  deck.push_back("ten of clubs");
  deck.push_back("jack of clubs");
  deck.push_back("queen of clubs");
  deck.push_back("king of clubs");

  // add spades
  deck.push_back("ace of spades");
  deck.push_back("two of spades");
  deck.push_back("three of spades");
  deck.push_back("four of spades");
  deck.push_back("five of spades");
  deck.push_back("six of spades");
  deck.push_back("seven of spades");
  deck.push_back("eight of spades");
  deck.push_back("nine of spades");
  deck.push_back("ten of spades");
  deck.push_back("jack of spades");
  deck.push_back("queen of spades");
  deck.push_back("king of spades");

  // shuffle the deck
  random_shuffle( deck.begin(), deck.end() );

  return;
}


void printStatus(vector<string> hand,int score) {
  cout << "  Score: " << score << endl;
  cout << "  Hand: ";
  printCards(hand);
  return;
}


void printCards(vector<string> cards) {
  for(int i=0;i<cards.size();i++) {
    cout << cards.at(i);
    if(i < cards.size()-1) {
      cout << ", ";
    }
  }
  cout << endl;
}