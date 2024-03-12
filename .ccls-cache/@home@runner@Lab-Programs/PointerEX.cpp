#include <iostream>
using namespace std;

//Pass-by-Valie
void dec(int y){
  y--;
}

int main() {
  int example = 3;
  dec(example);
  cout << example << endl;
}
