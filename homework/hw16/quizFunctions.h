
#include <string>
using namespace std;

/******************************************************************************
 * FUNCTION: readAnswers(char[] ansArray,int size, string fname)
 *
 * Precondition:  ansArray is an array of at least 10 character type variables
 *                fname is the name of a file containing the answers.
 *
 * Postcondition: ansArray contains the correct answers, read from the 
 *                provided file and the function returns the number of
 *                answers contained in the array.  If the file is not found,
 *                the function returns -1.
 */
int readAnswers(char[],int,string);


/******************************************************************************
 * FUNCTION: saveScores(students[], scores[], size, outputFileName)
 *
 * Precondition:  the two arrays contain "size" parallel entries
 *
 * Postcondition: the function creates a new file named "outputFileName" and saves
 *                student names and scores to that file in the format below.  It returns
 *                the number of scores saved or -1 if it dcould not open the file.
 *  Student1: score1
 *  Student2: score2
 */
int saveScores(const string[],const int[],int,string);