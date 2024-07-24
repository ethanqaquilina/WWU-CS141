#include <iostream>
using namespace std;

int main() {

  int numRows;

  cout << "How many rows?: ";
  cin >> numRows;

  for (int j = 0; j <= numRows; j++) {
    for (int i = 1; i <= j; i++) {
      cout << i << " ";
    }
    cout << endl;
  }
  for (int j = numRows-1; j > 0; j--) {
    for (int i = 1; i <= j; i++) {
      cout << i << " ";
    }
    cout << endl;
  }

  return 0;
}
