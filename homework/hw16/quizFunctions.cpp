/****************************************************************************
 *
 * HW15:  Functions for a Quiz Grader
 *
 * File Name:  quizFunctions.cpp
 * Name:       ?
 * Course:     CPTR 141
 *
 */

#include "quizFunctions.h"
#include <fstream>
#include <string>
using namespace std;

int readAnswers(char quiz[], int number, string answersheet) {
  // define variables
  int numOfquestions;
  numOfquestions = 0;
  char answer;
  ifstream fin;

  // open the file
  fin.open(answersheet);
  if (!fin.is_open()) {
    return -1;
  }

  // scan answers
  for (int i = 0; (!fin.eof() && i <= 10); i++) {
    fin >> answer;
    numOfquestions++;
    quiz[i] = answer;
  }

  return numOfquestions - 1;
  fin.close();
}

int saveScores(const string name[], const int score[], int numOfstudents,
               string scoresText) {
  int numOfscores = 0;

  ofstream outFS;
  outFS.open(scoresText);
  if (!outFS.is_open()) {
    return -1;
  }

  for (int i = 0; i < numOfstudents; i++) {
    outFS << name[i] << ": " << score[i] << endl;
    numOfscores++;
  }

  outFS.close();

  return numOfscores;
}