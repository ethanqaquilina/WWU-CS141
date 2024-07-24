#include <iostream>
#include <string>
using namespace std;

int main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  for (int x = 2; x < 6; x += 2) {
    cout << name << endl;
  }
  cout << "Nice to meet you!" << endl;
}
