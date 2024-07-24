/****************************************************************************
 *
 * HW15:  Functions for a Quiz Grader
 *
 * File Name:  quizTest.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include <iostream>
#include <string>
#include "quizFunctions.h"
using namespace std;

int main() {

    // test the readAnswers function
    char quizAnswers[10];
    int numQuestions = readAnswers(quizAnswers,10,"answers.txt");
    if (numQuestions == -1) {
      cerr << "Error: failed to open file \"answers.txt\"" << endl;
    } else {
      for (int i=0; i < numQuestions; i++) {
        cout << "Answer " << (i+1) << ": " << quizAnswers[i] << endl;
      }
    }

    // test the saveScores function
    string students[] = {"Jane","Bob","Marcia","Ivan","Jonathan"};
    int scores[] = {9,8,7,10,6};
    int numSaved = saveScores(students,scores,5,"scores.txt");
    if (numSaved == -1) {
      cerr << "Error: failed to open file \"scores.txt\"" << endl;
    }

    return 0;

}