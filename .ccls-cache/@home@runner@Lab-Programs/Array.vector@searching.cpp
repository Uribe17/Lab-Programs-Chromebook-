#include <iostream>
#include <vector>
using namespace std;


// Returns first index of an element, if it exist, else it returns -1.
// Time: O(n)
// Memory: O(1)
int findElem(vector<int> v, int elem){
  for(int i = 0; i < v.size(); i++){
    if(v[i] == elem){
      return i;
    }
  }
  return -1;
}

// BINARY SEARCH
// Returns first index of an element, if it exist, else it returns -1.
// Time: 
// Memory: 
int findElemBinary(vector<int> v, int elem)


int main(){
  vector<int> v_test;
  v_test.push_back(1);

  int elemToFind = 2;
  cout << findElem(v_test, elemToFind) << endl;
  cout << findElem(v_test, 100) << endl; // -1
  
}