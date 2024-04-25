#include <iostream>
#include <vector>
#include "truck.h"
using namespace std;

int main(){
  cout << "----int----" << endl;
  Truck<int> t = Truck<int>();
  vector<int> v;
  v.push_back(1);
  v.push_back(2);

  t.load(v);

  for(int i =0; i < t.getCargo().size(); i++){
    cout << t.getCargo()[i] << endl;
  }

  cout << "----string----" << endl;
  Truck<string> t2 = Truck<string>();
  vector<string> s;
  s.push_back("Hello");
  s.push_back("World");

  t2.load(s);

  for(int i =0; i < t2.getCargo().size(); i++)){
    cout << t2.getCargo()[i] << endl;
  }
  return 0;
}