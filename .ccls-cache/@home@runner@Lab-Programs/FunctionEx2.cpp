#include <iostream>
using namespace std;

double future_value(double p){
  double b = 1000 * pow(1+p / 100, 10);
  return b;
}