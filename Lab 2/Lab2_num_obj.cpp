//Lab2_num_obj.cpp
/***
  * This program will display the size of the multiple examples given
***/

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  //numerical
  int int_example = 1;
  float float_example = 2.0;
  double double_example = 2.0;

  //non-numerical
  char charExample = 'a';
  bool boolExample = true;

  //sizeof returns the number of bytes (8 bits = 1 byte)
  cout << "int_example:" << sizeof(int_example) << endl;
  cout << "float_example:" << sizeof(float_example) << endl;
  cout << "double_example:" << sizeof(double_example) << endl;

  cout << "charExample:" << sizeof(charExample) << endl;
  cout << "boolExample:" << sizeof(boolExample) << endl;
    
}