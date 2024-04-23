#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

template<typename T>
T iterativeSearch(vector<T> v, T elem){
  for(int i = 0; i < v.size(); i++){
    if (v[i] == elem){
      return i;
    }
  }
  return -1;
}

int main(){
  vector<int> v1 = {1, 2, 3, 4, 5};
  vector<double> v2 = {5,10,12.5,14.8,15.1};

  
}