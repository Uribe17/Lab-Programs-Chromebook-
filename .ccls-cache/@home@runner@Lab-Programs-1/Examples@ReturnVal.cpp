#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool approx_equal(double x, double y){
  const double EPSILON = 1E-14;
  if (x==0) return fabs(y) <= EPSILON;
  if (y==0) return fabs(x) <= EPSILON;
  return fabs(y-x) / max(fabs(x), fabs(y));
  }