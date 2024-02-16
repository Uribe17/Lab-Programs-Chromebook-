#include <iostream>
#include <cmath>
using namespace std;



double future_value(double init_balance, double p, int n){
  double output_balance = init_balance * pow((1 + p)/100, n);
  return output_balance;
}

int main() {
  double input = 0.0;
  double p = 0;
  int n = 0;
  printf("init balance?\n");
  cin >> input;
  printf("p?\n");
  cin >> p;
  printf("n?\n");
  cin >> n;
  double output = future_value(input, p, n);
  printf("Output Balance %f\n", output);
  return 0;
}