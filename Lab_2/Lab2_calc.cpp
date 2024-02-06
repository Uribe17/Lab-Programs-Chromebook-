//Lab2_calc.cpp
/***
  * This program will display an int divided by int, and int/double
***/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  //numerical
  int int_x = 1;
  int int_y = 2;
  double double_z = 2.0;

  cout << "int divided by int: " << int_x / int_y << endl;
  cout << "int divided by double: " << int_x / double_z << endl;
}
