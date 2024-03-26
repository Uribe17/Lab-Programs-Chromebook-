#include <iostream>
using namespace std;

//Pass-by-Valie
void dec(int y){
  y--;
}

//Pass-by-Reference
void dec(int * y){
  (*y)++;
}
//Pointer y points to the address of a double

int main() {
  int example = 3;
  int example2 = 5;
  //Instead of using &, you can use the command "new"
  int *p = &example;
  int *p2 = &example2; 
  
  cout << "Memory address of p: "<< p << endl;
  cout << "Example variable size (bytes): " << sizeof(example) << endl;

  cout << "Memory address of p2: "<< p2 << endl;
  cout << "Example2 variable size (bytes): " << sizeof(example2) << endl;
  
  //If you don't use the star the output will be the address of example.
  cout << "Before p Re-assign: " << *p << endl;
  example = 7;
  cout << "After p Re-assign: " <<*p << endl;

  cout << "Before p2 Re-assign: " << *p2 << endl;
  example2 = example * 4;
  cout << "After p2 Re-assign: " << *p2 << endl;
}
