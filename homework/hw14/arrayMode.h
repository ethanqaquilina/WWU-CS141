/****************************************************************************
 *
 * Asgn.14: Find the mode of an array and three test functions
 *
 * File Name:  arrayMode.h
 * Course:     CPTR 141
 */


/*=====================================================================================
 * FUNCTION: mode(data, size)
 *   Return the mode of an array of numbers or -1 if no mode exists.
 *    - Precondition: data is an array of length size containing ints between 1 and 99
 *    - Postcondition: returns the smallest mode in the data, if one exists.  If no
 *        mode exists, rreturns -1.
 */
int mode(int[],int);

/*=====================================================================================
 * FUNCTIONS: testOne( modeFunction ), testTwo( modeFunction ), testThree( modeFunction )
 *   Tests the mode function in three cases.  Returns true if the mode function works
 *     as expected.
 *     1. testOne() - tests with an array that has no mode
 *     2. testTwo() - tests with an array that has a single mode
 *     3. testThree() - tests with an array that mas multiple modes
 */
bool testOne( int (&theMode)(int[],int) );
bool testTwo( int (&theMode)(int[],int) );
bool testThree( int (&theMode)(int[],int) );