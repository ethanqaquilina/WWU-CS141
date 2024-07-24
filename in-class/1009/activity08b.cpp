#include <iostream>
using namespace std;

int main() {
  int number;
  int total = 1;
  for (int i = 10; i > 0; i = --i) {
    cout << "Enter a number: ";
    cin >> number;
    total *= number;
  }
  cout << "The total is: " << total << endl;
}
