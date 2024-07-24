/*************************************************************************
 *
 * In-Class Exercise:  This program gives us the results of various
 *                     combinatons of boolean and relational operators.
 *
 * File Name: boolean.cpp
 * Course:    CPTR 141
 *
 */

#include <iostream>
using namespace std;

int main() {

  // change the values of these variables to test your expressions
  int limit = 10;
  int count = 0;

  // Write a "cout" statement to check the results of each
  //   expression. You may need to use parentheses around the
  //   entire expression to get it to compile. Does the boolean
  //   expression below do what it is supposed to?
  //
  //   If it does not, correct it and then re-run it to confirm.

  // 1. the count is zero and the limit is more than 20
  cout << (count == 0 && limit > 20) << endl;

  // 2. the count equals two or the limit is at least 5
  cout << ((count = 2) || limit >= 5) << endl;

  // 3. the limit is between 5 and 20
  cout << (5 <= limit <= 20) << endl;

  // 4. the limit is not equal to ten more than the count
  cout << ((!limit) == count + 10) << endl;

  // 5. the count is less than 7 times the limit and the count is 0
  cout << ((count / limit < 7) && (count / 20)) << endl;

  return 0;
}
