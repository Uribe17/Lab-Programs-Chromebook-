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
  int *p = &example;
  dec(p);
  dec(example);
  cout << &example << endl;
  cout << example << endl;
}
