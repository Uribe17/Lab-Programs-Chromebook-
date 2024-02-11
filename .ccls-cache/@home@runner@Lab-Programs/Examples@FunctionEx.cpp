/***
 * sqrt(x)
 * pow(x, y)
 * sin(x)
 * cos(x)
 * tan(x)
***/

/** Function Outputs will usually look like:
  * Datatype_return functionName(inputs){}
  * Datatype_return functionName(inputs/arguments/parameters/expressions){}
  * string getName(string name){
    return name;
  }
  * int getAge(int age){
    return age;
  }
  * bool getsEnrolled(bool isEnroled){
    return isEnroled;
  }
  * Void Function:
  * void printName(string name)
***/

/*** How to call on functions:
  *int main(){
    string salut = "Hello";
    string name = "James";
    datetime today = Datetime().now();

    string output = greet(salut, name, today);
    cout << output;
    return 0;
  }
***/

// Greet Example

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


string greet(string salutations, string name, datetime date){
  string out = salutations + name + "Today's date is" + date:
  return out;
}

int main(){
  string salutations = "Hello";
  string name = "James";
  datetime today = datetime().now();

  string output = greet(salutations, name, today);
  cout << output;
  return 0;
}