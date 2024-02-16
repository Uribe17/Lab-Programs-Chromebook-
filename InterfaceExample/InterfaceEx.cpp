#include <iospace>
#include "Point.h"
using namespace std;

Point::Point(double xval, double yval){
  x = xval;
  y = yval;
// You could also use "This->x = x;, the variable with x refers to the one in the interface."
//There is no need to put Double, as x belongs to the class it is defined as double Point::x, which is pre-defined.
}

//To implement the function, do "Class_Name::Function_Name()"
 void Point::move(double dx, double dy){
   x = x + dx; // x += dx;
   y = y + dy; // x += dy;
//Since it's void, it does not return.
 }