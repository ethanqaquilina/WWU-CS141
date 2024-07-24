#include <iostream>
using namespace std;

int sum(int a=1, int b=1, int c=1, int d=1);

int main() {
  cout << "Test One: " << sum(2, 2, 2, 3) << endl;
  cout << "Test Two: " << sum(3, 3,5) << endl;
  cout << "Test Three: " << sum(5,5) << endl;
}

int sum(int a, int b, int c, int d) { return a * b * c * d; }
