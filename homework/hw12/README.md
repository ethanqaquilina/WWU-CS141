# CPTR 141: Homework Assignment #12

## Problem Overview

Your goal in this assignment is to write two functions to help implement a game of blackjack.  Blackjack is a card game played with one or more players who compete against a dealer.  Each payer and dealer try to get the highest point value in their hand without going over 21.  Complete rules for the game can be found at https://en.wikipedia.org/wiki/Blackjack. Four our program, we will make one slight modification.  

* Whenever an ace is drawn, its value will be 11 unless that causes the hand to "bust", in which case the value will be 1.

The functions you will implement are shown below.

```c++
/*=====================================================================================
 * FUNCTION: drawCard()
 *   Draws the next card from the top of the global deck of cards (last element in the 
 *   vector), removing it from the deck and returning the card name as a string.
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
```

The file `blackjack.cpp` contains code that will use your functions to implement a two-player blackjack game between a user and the computer.  As a hint, you may find the `string.find(substring)` function helpful in identifying cards that are drawn.

## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must define the two functions given above and they must meet the given specifications in the `blackJackFunctions.cpp` file.
2. You must make use of the global `deck` vector within your functions.  You may not add any other global variables to the program.
3. You should not modify the code in the `blackjack.cpp` or the `blackJackFunctions.h` files.

### Compiling Your Code

Since your program is in multiple files , you need to do the following to compile and run it.

1. Make sure every file you've changed has been saved.
2. From a terminal prompt, enter the following to compile and run your code (the run will occur only if the compile is successful):

```bash
cd ~/code/student141/homework/hw12/ && g++ *.cpp && ./a.out
```



## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars) 
- N -- no substantive changes made to template, or nothing submitted
