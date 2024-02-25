#include <iostream>
using namespace std;

void dec(int)

int main(){
  int y = 3;
  dec(y);
  cout << y << endl;
  return 0;
}


void dec(int y){
  y--;
}