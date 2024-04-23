#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

template<typename T>
int iterativeSearch(vector<int> v, int elem){
  for(int i = 0; i < v.size(); i++){
    if (v[i] == elem){
      return i;
    }
  }
  return -1;
}