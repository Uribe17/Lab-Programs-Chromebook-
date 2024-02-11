#include <iostream>
using namespace std;

int main() {
  //Also 0-point index
  int a [] = {0, 1, 2, 3, 4,};
  char b [] = {'A', 'B', 'C', 'D', 'E'};
              //0    1    2    3    4

  //Loop - Start, End, Update
  for(int i = 0; i < 5; i++) {
    printf("%i\n", a[i]);
    printf("%i\n", b[i]);
  }
// While Loop Variation
//  int j = 0;
//  while (j < 5){
//    printf("%i\n", a[i]);
//    printf("%i\n", b[i]);
//    j++
//
//  }
  return 0;
}