# CPTR 141: Homework Assignment #2

## Problem Overview

You've decided to write a program to help you keep track of the time you spend studying each evening.  In particular, this program will:

1. Prompt the user for the time (in hours and minutes) spent on each of three classes.
   
2. Factor in a random amount of time (but less than one hour) for visits with friends .

3. Display the total amount of time spent in hours and minutes.

## Solution Specifications

Your solution to this problem must meet the following criteria.

1. You must use separate variables for each value entered by the user and then combine those variables using one or more arithmetic expressions to compute the total number of hours and minutes spent.
2. You must seed the random number generator with a user-entered seed using `srand()` and then use the `rand()` function to compute a random number between 0 and 59 representing the number of minutes spent with friends.
3. You must make use of the modulus (`%`) operator.
4. You must format your code using the "Format Document" command in your development environment.
5. The program **must** produce output exactly as shown below, assuming that the given values are entered.  Note that some lines are indented with two spaces and the next-to-last line should be completely blank.

```reStructuredText
Enter a random seed: 500
Enter the hours and minutes (separated by a space) that you studied for each class:
  First Class: 1 20
  Second Class: 0 45
  Third Class: 0 30
  Your friends dropped by for 58 minutes.
  
You spent 3 hours and 33 minutes.
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted