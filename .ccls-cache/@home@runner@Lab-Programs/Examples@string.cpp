#include <iostream>
using namespace std;

int main(){
  string s = "Hello";
  // index  :  0   1   2   3   4   
  // s      : 'H' 'e' 'l' 'l' 'o'
  cout << s.length() << endl;
  cout << s.substr(0, 1) << endl;
  cout << s.substr(1, 3) << endl;
  return 0;
}