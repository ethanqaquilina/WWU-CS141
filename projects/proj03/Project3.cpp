// Ethan Aquilina
// Project 3

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Functions

double findnum(string word, string name) {

  double Num;
  Num = 0;
  double number;
  string phrase;
  ifstream inFS(word);

  do {
    inFS >> phrase;
    if (phrase == name) {
      inFS >> number;
      Num = number;

    } else {
      inFS.ignore(100, '\n');
    }
  } while (!inFS.eof());
  return Num;
}

void displayChart(int numOfrows, int numOfcolumns) {
  for (int i = 0; i < ((numOfcolumns / 2) + 5); i++) {
    cout << ' ';
  }
  cout << "Seats";
  cout << endl;

  // Print out top part
  for (int i = 0; i < 7; i++) {
    cout << ' ';
  }

  for (int i = 0; i < numOfcolumns; i++) {
    if ((i == 0) || (i == 9) || (i == 19) || (i == 29) || (i == 39) ||
        (i == 49) || (i == 59) || (i == 69) || (i == 79) || (i == 89) ||
        (i == 99)) {
      cout << (i + 1) / 10;
    } else {
      cout << ' ';
    }
  }
  cout << endl;

  for (int i = 0; i < 7; i++) {
    cout << ' ';
  }

  for (int i = 0; i < numOfcolumns / 10; i++) {
    for (int g = 0; g <= 9; g++) {
      if (g == 9) {
        cout << 0;
      } else {
        cout << g + 1;
      }
    }
  }

  for (int g = 0; g <= (numOfcolumns % 10) - 1; g++) {
    if (g == 9) {
      cout << 0;
    } else {
      cout << g + 1;
    }
  }
}

// main function
int main() {

  // Variables
  int choice = 0;
  int numOfrows = 0;
  int numOfcolumns = 0;
  int buyChoice;
  double price;

  ofstream config;
  ifstream configRead;

  numOfrows = findnum("theater.text", "NumberofRows");
  numOfcolumns = findnum("theater.text", "NumberofColumns");
  price = findnum("theater.text", "Price");

  char Theater[numOfrows][numOfcolumns];

  // Fills theater
  for (int n = 0; n < numOfrows; n++) {
    for (int m = 0; m < numOfcolumns; m++) {
      Theater[n][m] = '*';
    }
  }

  // Display Menu
  do {
    cout << "            Menu" << endl;
    cout << "1) Display a seating chart" << endl;
    cout << "2) Sell one or more Tickets" << endl;
    cout << "3) Display statistics(number of seats sold, seats avalible, "
            "total revenue)"
         << endl;
    cout << "4) Reset Program" << endl;
    cout << "0) End" << endl;
    cout << "Which would you like to do?: ";
    cin >> choice;

    if ((choice < 0) || (choice > 4)) {
      cout << "error invalid choice";
      choice = -1;
    }

    switch (choice) {
      char choice2;
      int count;
      int countTwo;
      //   display chart
    case 1:

      displayChart(numOfrows, numOfcolumns);
      // Print out picture
      for (int n = 0; n < numOfrows; n++) {
        cout << endl << "Row";
        if (n + 1 < 10) {
          cout << "  " << n + 1;
        } else {
          cout << " " << n + 1;
        }
        cout << " ";
        for (int m = 0; m < numOfcolumns; m++) {
          cout << Theater[n][m];
        }
      }
      cout << endl;
      choice2 = 'n';
      do {
        cout << "Return to menu? y/n :";
        cin >> choice2;
      } while (!(choice2 == 'y'));
      break;

      //   Sell one or more Tickets
    case 2:

      cout << endl << "1) Sell one seat" << endl;
      cout << "2) Sell more than one seat" << endl;
      cout << "0) Return" << endl;
      cout << "One or More than one seat?: ";
      cin >> buyChoice;
      if (buyChoice == 0) {
        break;
      }

      switch (buyChoice) {
        int buyRow;
        int buyColumn;
        int buyChoice;
        int buyColumntwo;
        int buyRowtwo;
        int temp;
        int count;
        int error;
        int invalid;

      // buy one seat
      case 1:

        do {
            do{
          cout << "Enter row: ";
          cin >> buyRow;
          if ((buyRow<1)||(buyRow>numOfrows)){
              cout<< "Not in Range. Try again." << endl;
          }
            }while ((buyRow<1)||(buyRow>numOfrows));
            do{
         cout << "Enter column: ";
          cin >> buyColumn;
          if ((buyColumn<1)||(buyColumn>numOfcolumns)){
              cout<< "Not in Range. Try again." << endl;
          }
            }while ((buyColumn<1)||(buyColumn>numOfcolumns));
          if (Theater[buyRow - 1][buyColumn - 1] == '#') {
            cout << "Error Seat taken, Please choose another seat." << endl;
          }
        } while (Theater[buyRow - 1][buyColumn - 1] == '#');
        Theater[buyRow - 1][buyColumn - 1] = '#';
        cout << "Cost: $" << price;
        cout << endl;
        choice2 = 'n';
        do {
          cout << "Return to menu? y/n: ";
          cin >> choice2;
        } while (!(choice2 == 'y'));
        continue;

      // sell more than one
      case 2:
        count = 0;

        do {
          error = 0;

          do {
            cout << "Enter starting row: ";
            cin >> buyRow;
            if ((buyRow < 1) || (buyRow > numOfrows)) {
              cout << "Invalid range, Try again" << endl;
            }
          } while ((buyRow < 1) || (buyRow > numOfrows));

          do {
            cout << "Enter ending row: ";
            cin >> buyRowtwo;
            if ((buyRowtwo < 1) || (buyRowtwo > numOfrows)) {
              cout << "Invalid range, Try again" << endl;
            }
          } while ((buyRowtwo < 1) || (buyRowtwo > numOfrows));

           do {
               cout << "Enter starting column: ";
          cin >> buyColumn;
          if ((buyColumn < 1) || (buyColumn > numOfcolumns)) {
              cout << "Invalid range, Try again" << endl;
            }
          } while ((buyColumn < 1) || (buyColumn > numOfcolumns));


          do {
          cout << "Enter ending column: ";
          cin >> buyColumntwo;
           if ((buyColumntwo < 1) || (buyColumntwo > numOfcolumns)) {
              cout << "Invalid range, Try again" << endl;
            }
          } while ((buyColumntwo < 1) || (buyColumntwo > numOfcolumns));

          if (buyRow > buyRowtwo) {
            temp = buyRow;
            buyRow = buyRowtwo;
            buyRowtwo = temp;
          } else if (buyColumn > buyColumntwo) {
            temp = buyColumn;
            buyColumn = buyColumntwo;
            buyColumntwo = temp;
          }
          for (int n = buyRow - 1; n <= buyRowtwo - 1; n++) {
            for (int m = buyColumn - 1; m <= buyColumntwo - 1; m++) {
              if (Theater[n][m] == '#') {
                error = -1;
                cout << "Error one of those seats are taken. Try again."
                     << endl;
              }
            }
          }
        } while (error == -1);

        for (int n = buyRow - 1; n <= buyRowtwo - 1; n++) {
          for (int m = buyColumn - 1; m <= buyColumntwo - 1; m++) {
            Theater[n][m] = '#';
            count++;
          }
        }

        cout << "Cost: $" << (price * count);
        cout << endl;
        choice2 = 'n';
        do {
          cout << "Return to menu? y/n: ";
          cin >> choice2;
        } while (!(choice2 == 'y'));
        continue;
      }

      // Display statistics
    case 3:
      count = 0;
      countTwo = 0;
      for (int n = 0; n < numOfrows; n++) {
        for (int m = 0; m < numOfcolumns; m++) {
          if (Theater[n][m] == '#') {
            count++;
          } else {
            countTwo++;
          }
        }
      }
      cout << "Number of seats sold: " << count << endl;
      cout << "Number of seats avalible: " << countTwo << endl;
      cout << "Ticket Revenue: $" << count * price << endl;
      choice2 = 'n';
      do {
        cout << "Return to menu? y/n: ";
        cin >> choice2;
      } while (!(choice2 == 'y'));
      break;

    // Reset the program
    case 4:
      numOfrows = 0;
      numOfcolumns = 0;
      price = 0;

      config.open("theater.text");
      cout << endl << "Please enter the number of rows in your Theater: ";
      cin >> numOfrows;
      config << "NumberofRows " << numOfrows << endl;
      cout << "Please enter the number of columns in your Theater: ";
      cin >> numOfcolumns;
      config << "NumberofColumns " << numOfcolumns << endl;
      cout << "Enter ticket price: $";
      cin >> price;
      config << "Price " << price << endl;
      // Fills theater
      for (int n = 0; n < numOfrows; n++) {
        for (int m = 0; m < numOfcolumns; m++) {
          Theater[n][m] = '*';
        }
      }
      config.close();
      break;
    }

  } while (!(choice == 0));

  cout << endl;

  return 0;
}
