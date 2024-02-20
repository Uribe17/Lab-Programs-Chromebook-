#include <iostream>
using namespace std;

/** sumOfThree
 * @brief Returns the sum of x, y, and z.
 * 
 * @param x : (int) 
 * @param y : (int)
 * @param z : (int)
 * @return (int)
 */
// Write Code
int sumOfThree(int x, int y, int z){
  int sum = x + y + z;
  return sum;
}

/** division
 * @brief Returns x/y
 * 
 * @param x : (double) 
 * @param y : (double)
 * @return (double)
 */
// Write Code
double division(double x, double y){
  double div = x / y;
  return div;
}

/** isGreaterThan
 * @brief Returns whether x > y
 * 
 * @param x : (double) 
 * @param y : (int)
 * @return true: x > y
 * @return false: x <= y
**/
// Write Code
bool isGreaterThan(double x, int y){
  if (x>y){
    return true;
  } else {
    return false;
  }
  
}

/** select
 * @brief output the statements based on func_type
 * func_type         : output
 * "sum"             : "The sum is "
 * "division"        : "The quotient is "
 * "comparison"      : "The first value being greater than the second is "
 * All other phrases : "Invalid function type\n"
 * @param func_type : (string)
 * @return string
**/
// Write Code
string select(string func_type){
  string out = "";
  if (func_type == "sum"){
    out = "The sum is ";
  } else if (func_type == "division"){
    out = "The quotient is ";
  } else if (func_type == "comparison"){
    out = "The first value being greater than the second is ";
  } else {
    out = "Invalid function type\n";
  }
return out;
};

/** myPrint
 * @brief Calls select() to print out the output with the correct prompt
 *
 * @tparam T : (int, double, or string) output of sum, division, or isGreater Than
 * @param func_type : (String)
 * @param output
**/
template <typename T>
void myPrint(string func_type, T output){
  cout << select(func_type) << output << endl;
}
//====================================================

int main(){

  //initialize 3 int parameters
  int x1 = 1;
  int y2 = 2;
  int z3 = 3;

  //call sumOfThree
  int sum_out = sumOfThree(x1, y2, z3);
  //call myPrint
  myPrint("sum", sum_out);

  //initialize 2 double parameters
  double dividend = 12345.1;
  double divisor = 2345.6;

  //call division
  double div_out = division(dividend, divisor);
  myPrint("division", div_out);

  //compare div_out and sum_out
  bool is_greater_out = isGreaterThan(div_out, sum_out);
  myPrint("comparison", is_greater_out);
  
  return 0;
}
