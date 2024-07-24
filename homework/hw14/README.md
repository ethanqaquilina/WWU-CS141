# CPTR 141: Homework Assignment #14

## Problem Overview

In this assignment you will write and test a function that finds the mode of an array of integers between 1 and 99. Recall that the mode of a set of data is the value that appears most frequently.  If no value appears more than once, then the data has no mode.  If two more more values are tied for the most frequent appearance in the data, then each of them is a mode.  In your implementation, you will return the smallest mode in the data set, if a mode exists, and -1 if no mode exists.

The prototypes for this functions, along with three test functions, can be found in the provided header file ``arrayMode.h``.  The functions are:

* The ``mode(int[],int)`` function, which finds the most commonly occurring integer in an array of integers between 1 and 99.
* The ``testOne( modeFunction )`` function, which tests the `mode` function using an array that has no mode.
* The ``testTwo( modeFunction )`` function, which tests the `mode` function using an array that has a single mode.
* The ``testThree( modeFunction )`` function, which tests the `mode` function using an array that has multiple modes.

## Solution Specification

Your solution should strive to meet the standards specified below as they form the basis on which it will be graded.

1. Do not change any of the function prototypes found in the `arrayMode.h` file.
2. You must correctly implement the four functions mentioned above in the file `arrayMode.cpp`.
3. To call your mode function from within the tree test functions, use the name `theMode`, which is a function reference passed into your test function.  This will allow Submitty to test your test functions as well as your `mode` function.
4. You should use the main driver program found in  `mode.cpp` to run your test functions and test your main mode function.

### Compiling and Running Your Program

To compile and run your program from the command line.  To do this, open a new terminal and execute the following commands.

```c++
cd ~/workspace/cpp/homework/hw14
g++ mode.cpp arrayMode.cpp -o mode.o
./mode.o
```



## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted
