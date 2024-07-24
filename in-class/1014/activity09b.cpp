#include <iostream>
using namespace std;

int main() {

  int rows, cols;

  cout << "Amount of rows: ";
  cin >> rows;
  cout << "Amount of Columns: ";
  cin >> cols;

  for (int i = 0; i < rows; i++) {
    for (int j = 1 ; j <=cols; j++) {
      cout << j << " ";
    }
    cout << endl;
  }

  return 0;
}
