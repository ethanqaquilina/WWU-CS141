# CPTR 141: Homework Assignment #11

## Problem Overview

For this assignment you will write several supporting functions used to print a calendar.  The final output of your calendar will look like the one shown below (for October 2020).

```html
        October 2020
 Sun Mon Tue Wed Thu Fri Sat
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30  31

```

The functions you will be implementing are:

* A string-returning function `nameOfMonth(int month)` that returns the name of the indicated month as a string (i.e. 1 = "January", 2 = "February", etc.).
* A boolean-returning function `isLeapYear(int year)` which returns true if a year is a leap year, and false if it is not.  Basic instructions for determining if a year is a leap year can be found in the comments, or you can read more details at https://www.timeanddate.com/date/leapyear.html.
* An integer returning function `daysInMonthAndYear(int month,int year)` which returns the number of days in a given month, making an allowance for leap years.

## Solution Specification

Your solution must beet the following criteria.

1. You must correctly implement (that is, match the post-conditions of) the three functions listed above in the file `calendarFunctions.cpp`.
2. You may modify the `main()` program in the file `printCalendar.cpp` to help with testing your functions, but you should not modify the other functions in `printCalendar.cpp`.

### Compiling Your Code

Since your program is now in multiple files , you can't simply press the `Run Code` button to try out your code (since that action saves, compiles, and runs only the selected file). Instead you need to do the following:

1. Make sure every file you've changed has been saved either from the file menu (see the **Save** and **Save All** commands) or by press `<Ctrl>+<S>` in an editor to save that file. Note that when a file has been edited (or is _dirty_), the 'x' in the tab tile changes to a solid circle. This gives you a visual clue that you need to save the file.
2. From a terminal prompt, enter the following to compile and run your code (the run will occur only if the compile is successful):

```bash
cd ~/code/student141/hw11/ && g++ *.cpp && ./a.out
```

## Grade Specification

Your homework assignment assigned a grade of E (exceeds expectation), M (meets expectation), R (revise and resubmit) or N (not assessable) as follows:

- E -- passes all Submitty tests with a score of 100% (green bars, no compiler warnings)
- M -- passes all Submitty tests, but has a score of less than 100% on some (yellow or green bars)
- R -- fails at least one Submitty test (red bars)
- N -- no substantive changes made to template, or nothing submitted

