# CPTR 141: Homework Assignment #10

## Problem Overview

Your task for this assignment is to write a program that prompts the user for the length and width of a rectangle in inches.  The program then uses functions to compute the perimeter and area of the rectangle and to convert those to meters and square meters respectively.  Sample output from one instance of the program is shown below:

```html
Welcome to the Foot-To-Meter Rectangle Calculator
=================================================
Enter the rectangle length in feet: 2
Enter the rectangle width in feet: 3

The rectangle dimensions are: 0.61 meters by 0.91 meters.
The rectangle perimeter is: 3.05 meters.
The rectangle area is: 0.56 square meters.
```

## Solution Specification

Your solution to this problem must meet the following criteria.

1. You must prototype and define three functions.  Examples of the function prototypes are shown below.  Within the `feetToMeters` function, declare a constant with value 0.3048 (the number of meters in a foot) to assist with the conversion.

```c++
// return the perimeter of a rectangle with a given length (1st parameter)
//  and width (2nd parameter)
float perimeter(float, float);

// return the area of a rectangle with a given length (1st parameter) 
//  and width (2nd parameter)
float area(float, float);

// return the number of meters of a given dimension (2nd parameter) that
//  corresponds to a number of feet (1st parameter) of the same dimension
//  (dimension 1 = linear, 2 = square, 3 = cubic, etc.)
float feetToMeters(float,short);
```

2. Call these functions from your ``main`` program to produce the required interaction.
3. Your code **must** produce the same output as the included program, ``solution.o``.  Run this program several times trying different passwords to make sure you understand what the output should look like.  To run the program, open a new terminal and type:

`./student141/homework/hw10/solution.o`

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable)  as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted