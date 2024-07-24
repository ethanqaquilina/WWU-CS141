/****************************************************************************
 *
 * hw13: A simple blackjack game
 *
 * File Name:  blackJackFunctions.h
 * Course:     CPTR 141
 *
 */

#include <string>
#include <vector>
using namespace std;

// Global Variables
extern vector<string> deck;

/*=====================================================================================
 * FUNCTION: drawCard()
 *   Draws the next card from the top of the global deck of cards, removing it from the
 *   vector that represents the deck of cards and returning the card name as a string. 
 *    - Precondition: global vector "deck" of strings contains the deck
 *    - Postcondition: returns the card as a string, returns an empty string if no card
 *        is found in the deck.
 */
string drawCard();

/*=====================================================================================
 * FUNCTION: hitMe(hand,score)
 *   Uses the drawCard() function to draw a card and add it to the hand vector.  Then
 *   adds the value of the card to the score and indicates if the player busted.
 *    - Precondition: hand is a vector of strings holding the player's hand, score is
 *        an integer holding their current score.
 *    - Postcondition: modifies the score by adding the value of the card drawn, modivies 
 *        the hand vector by adding the name of the card drawn, returns true if the score
 *        is greater than 21, false otherwise.
 */
bool hitMe(vector<string>&, int&);