#include <iostream>
using namespace std;

int main() {
  int n = 23;
  if (n % 3 == 0) {
    cout << "n is even\n";
  } else if (n % 2 == 0) {
    cout << "n is divisible by 2\n";
  } else if (n % 1 == 0) {
    cout << "n is divisible by 1\n";
  } else {
    cout << "n is odd\n";
  }
}