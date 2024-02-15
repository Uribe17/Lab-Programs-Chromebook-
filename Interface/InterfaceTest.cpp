#include <iostream>
#include "Point.h"
using namespace std;

int main(){
  double x = 0;
  double y = 0;
  Point p = Point(x, y);
  printf("Before Move x: %d, y: %d\n", p.getX(), p.getY());
  p.move(1, 1);

  printf("After Move x: %d, y: %d\n", p.getX(), p.getY());

  return 0;
}