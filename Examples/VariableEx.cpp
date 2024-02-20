#include <iostream>
using namespace std;

int main(){
  int x = 10;
  char y = 'b';
  double z = 100.1;
  float zz = 200.1;

  //single variables
  printf("x: %i\n", x);
  printf("y: %c\n", y);
  printf("z: %f\n", z);
  printf("zz: %f\n", zz);

  //multiple variables
  printf("x: %i, y: %c, z: %f, zz: %f\n", x, y, z, zz);
}
