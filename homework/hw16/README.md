# CPTR 141: Homework Assignment #14

## Problem Overview

One of your professors has asked you to write a program to grade her multiple-choice quizzes.  Each quiz consists 10 or fewer questions, each of which has one of four possible answers: A, B, C, or D.  The program will grade a quiz as follows.

1. First the program reads in the correct answers from a text file.  The text file will contain one answer per line, with the correct answer to the first question on line one, the answer to the second question on line two, and so on.
   
2. The program will then prompt the user to enter the student's answers, one at a time.  It will compare those to the correct answers and display the following information:
    * The number of correct answers on the student's quiz.
    * The percent of the questions the student correctly answered (rounded to one decimal place).
    * Whether the student passed the quiz (scored 70% or better)

Because this sounds like a big job, you enlist the help of another programming student .  The two of you decide to split up the work.  The other student will write the main program, and you will write functions to interact with the answer and scoring files.  These prototypes are included in the `quizFunctions.h` file.

```c++
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
```

```c++
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
```

The other student has already completed the main program and posted it to Submitty.  You just need to implement your two functions in the file `quizFunctions.cpp`  and post them to finish the project.


## Solution Specification

1. Implement your two functions in `quizFunctions.cpp` as specified in the comment above each function header.  Include any needed libraries for file I/O in this file as well.
2. Make sure your functions handle errors (such as incorrect file names or content of the wrong type) gracefully.
3. Make sure your functions do not produce any output (either with `cout` or with `cerr`).
4. You can use the provided `main()` program in `quizTest.cpp` to test your functions.  To compile and run this test program, right click on the `hw16` folder and pick "Open in Terminal."  Then cut and paste or type the following into the terminal.

```{bash}
g++ quizTest.cpp quizFunctions.cpp && ./a.out
```


## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
