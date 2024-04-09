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
// Returns first index of an element, if it exist, else it returns -1. This only works with sorted values.
// Time: 
// Memory: 
int binary_search(vector<int> v, int elem, int left, int right){
  int mid = (left + right) / 2;
  if(left > right){
    return -1;
  }
  if(left == right){
    return -1;
  }
  
  if(v[mid] == elem){
    return mid;
  } else if (v[mid] < elem){
    return binary_search(v, elem, mid + 1, right);
  } else {
    return binary_search(v, elem, left, mid - 1);
  }
  
}


int main(){
  vector<int> v_test = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  v_test.push_back(1);

  int elemToFind = 2;
  cout << findElem(v_test, elemToFind) << endl;
  cout << findElem(v_test, 100) << endl; // -1

  // binary search
  int binaryFind = 8;
  binary_search(v_test, binaryFind, 0, v_test.size() - 1);
}