#include <iostream>
#include <vector>
using namespace std;

/** 
  * Vectors are dynamic arrays, they can change size as needed.
  * They are similar to arrays, but they are more flexible.
  * Vectors can be pass-by-value AND pass-by-reference.
**/
// To create a vector, we use the vector class.
// vector<type_name> variable_name(size);

vector<int> find_all_between(vector<double> v, double low, double high){
  vector<int> pos;
  for (int i = 0; i < v.size(); i++){
    if (low <= v[i] && v[i] <= high){
      pos.push_back(i);
    }
  }
  return pos;
}

void insert(vector<string>& v, int pos, string s){
  int last = v.size() -1;
  v.push_back(v[last]);
  for (int i = last; i > pos; i--){
    v[i] = v[i-1];
  }
}


int main(){
  const int SIZE = 10;
  // You can find the size of a vector with the size() function
  vector<int> v1(SIZE);
  // Adds elements to a vector
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  // Gets the current size of the vector
  v1.size();

  // Removes the last element from the vector.
  v1.pop_back();

  for(int i = 0; i < v1.size(); i++){
    v1[i] = i+1;
    // You can use v1.push_back(i+1) as well.
  }
  
  /** This is how a vector looks like
      v |[ 1 ][ 2 ][ 3 ][ etc.
   index|[ 0 ][ 1 ][ 2 ][ etc.
  **/
  
}
