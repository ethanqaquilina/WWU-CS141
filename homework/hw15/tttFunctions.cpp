/*************************************************************************
 *
 * HW15: Using 2D arrays to implement a tic-tac-toe game
 *
 * File Name:  tttFunctions.cpp
 * Course:     CPTR 141
 *
 */

#include "tttFunctions.h"
#include <iostream>
using namespace std;

char getWinner(char grid[][NUM_ROWS], int NUM_COLS) {

  char winner;

  winner = ' ';

  // check for empty spaces
  if ((grid[0][0] != ' ') && (grid[0][1] != ' ') && (grid[0][2] != ' ') &&
      (grid[1][0] != ' ') && (grid[1][1] != ' ') && (grid[1][2] != ' ') &&
      (grid[2][0] != ' ') && (grid[2][1] != ' ') && (grid[2][2] != ' ')) {
    winner = '-';
  }

  // check rows
  if ((grid[0][0] == grid[0][1]) && (grid[0][1] == grid[0][2])) {
    winner = grid[0][0];

  } else if ((grid[1][0] == grid[1][1]) && (grid[1][2] == grid[1][1])) {
    winner = grid[1][0];

  } else if ((grid[2][0] == grid[2][1]) && (grid[2][1] == grid[2][2])) {
    winner = grid[2][0];
  }

  // check columns
  if ((grid[0][0] == grid[1][0]) && (grid[1][0] == grid[2][0])) {
    winner = grid[0][0];

  } else if ((grid[0][1] == grid[1][1]) && (grid[1][1] == grid[2][1])) {
    winner = grid[0][1];

  } else if ((grid[0][2] == grid[1][2]) && (grid[1][2] == grid[2][2])) {
    winner = grid[0][2];
  }

  // check diagonals
  if ((grid[0][0] == grid[1][1]) && (grid[1][1] == grid[2][2])) {
    winner = grid[0][0];

  } else if ((grid[0][2] == grid[1][1]) && (grid[1][1] == grid[2][0])) {
    winner = grid[0][2];
  }

  return winner;
}