// Project 2
// Ethan Aquilina

// Code Review Was done by: Lucas Saca

#include <cmath>
#include <iostream>
using namespace std;

// global variables
const bool debug = 0;

// outside functions

// counts the words
int countwords(string passage) {
  int words = 0;
  int sentences = 0;
  int longSentences = 0;
  int amountOfwords = 0;
  for (int i = 0; i < passage.length(); i++) {
    if (passage.at(i) == (' ')) {
      words += 1;
    } else if (passage.at(i) == ('.') || passage.at(i) == ('!') ||
               passage.at(i) == ('?')) {
      sentences += 1;
      words += 1;
      if (words > 15) {
        longSentences += 1;
        amountOfwords += words;
        words = -1;
      }
    }
  }
  return amountOfwords;
}

// Find amount of Long sentences
int countlongSentences(string passage) {
  int words = 0;
  int sentences = 0;
  int longSentences = 0;
  int amountOfwords = 0;
  for (int i = 0; i < passage.length(); i++) {
    if (passage.at(i) == (' ')) {
      words += 1;
    } else if (passage.at(i) == ('.') || passage.at(i) == ('!') ||
               passage.at(i) == ('?')) {
      words += 1;
      sentences += 1;
      if (words > 15) {
        longSentences += 1;
        amountOfwords += words;
        words = -1;
      }
    }
  }

  return longSentences;
}

// Find amount of sentences
int countsentences(string passage) {
  int words = 0;
  int sentences = 0;
  int longSentences = 0;
  int amountOfwords = 0;
  for (int i = 0; i < passage.length(); i++) {
    if (passage.at(i) == (' ')) {
      words += 1;
    } else if (passage.at(i) == ('.') || passage.at(i) == ('!') ||
               passage.at(i) == ('?')) {
      words += 1;
      sentences += 1;
      if (words > 15) {
        longSentences += 1;
        amountOfwords += words;
        words = -1;
      }
    }
  }
  return sentences;
}

// finds the syallbles in each sentence
int countSyallbles(string passage) {
  int syllables = 0;
  for (int i = 0; i < passage.length(); i++) {
    if (passage.at(i) == ('a') || passage.at(i) == ('e') ||
        passage.at(i) == ('i') || passage.at(i) == ('o') ||
        passage.at(i) == ('u')) {
      syllables += 1;
      if (passage.at(i + 1) == ('a') || passage.at(i + 1) == ('e') ||
          passage.at(i + 1) == ('i') || passage.at(i + 1) == ('o') ||
          passage.at(i + 1) == ('u')) {
        syllables = syllables - 1;
      }
    }
  }
  return syllables;
}

// convert into a float
double convertTodouble(int one, int two) {
  double maindouble = 0;

  maindouble = (one / two);

  return maindouble;
}

// Reading level
double readinglevel(int words, int sentences, int syllables) {
  double readinglevel = 0;
  readinglevel =
      206.835 - 1.015 * (words / sentences) - 84.6 * (syllables / words);
  return readinglevel;
}

// main function
int main() {

  // varialbles
  string thePassage;
  char quit = 'n';
  int words;
  int sentences;
  int longSentences;
  int amountOfwords;
  int syllables;
  double syllablesPerword;
  double wordsPersent;
  double readingLevel;

  // Passage Loop
  do {

    cout << "Please enter a passage: ";
    getline(cin, thePassage);

    words = countwords(thePassage);
    sentences = countsentences(thePassage);
    longSentences = countlongSentences(thePassage);
    syllables = countSyallbles(thePassage);
    syllablesPerword = convertTodouble(syllables, words);
    wordsPersent = convertTodouble(words, sentences);

    // Gives reading level
    cout << "Amount of Words: " << words << endl;
    cout << "Amount of Sentences: " << sentences << endl;
    cout << "Amount of long sentences(sentences greater than 15 words): "
         << longSentences << endl;
    cout << "Amount of syllables: " << syllables << endl;
    cout << "Average amount of syllables per word: " << syllablesPerword
         << endl;
    cout << "Average amount of words per sentence: " << wordsPersent << endl;

    readingLevel = readinglevel(words, sentences, syllables);

    cout << endl;

    // Flesch reading ease
    if (readingLevel <= 10) {
      cout << "Professional Reading Level: " << readingLevel << endl
           << "Extremely difficult to read. Best understood by university "
              "graduates.";
    } else if (readingLevel <= 30 && readingLevel > 10) {
      cout << "College graduate: " << readingLevel << endl
           << "Very difficult to read. Best understood by university graduates.";
    } else if (readingLevel <= 50 && readingLevel > 30) {
      cout << "College: " << readingLevel << endl
           << "Difficult to read.";
    } else if (readingLevel <= 60 && readingLevel > 50) {
      cout << "10th to 12th grade: " << readingLevel << endl
           << "Fairly difficult to read.";
    } else if (readingLevel <= 70 && readingLevel > 60) {
      cout << "8th & 9th grade: " << readingLevel << endl
           << "Plain English. Easily understood by 13- to 15-year-old students.";
    } else if (readingLevel <= 80 && readingLevel > 70) {
      cout << "7th grade: " << readingLevel << endl
           << "Fairly easy to read.";
    } else if (readingLevel <= 90 && readingLevel > 80) {
      cout << "6th grade: " << readingLevel << endl
           << "Easy to read. Conversational English for consumers.";
    } else if (readingLevel > 90 && readingLevel <= 100){
      cout << "5th grade: " << readingLevel << endl
           << "Very easy to read. Easily understood by an average 11-year-old student.";
    } else if (readingLevel > 100){
        readingLevel = 100.00;
      cout << "5th grade: " << readingLevel << endl
           << "Very easy to read. Easily understood by an average 11-year-old student.";
  }

  cout << endl;

  cout << "Would you try another passage? (y/n): ";
  cin >> quit;
}
while (quit != 'n')
  ;

return 0;
}