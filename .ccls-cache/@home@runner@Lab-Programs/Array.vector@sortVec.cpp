#include <iostream>
#include <vector>
using namespace std;
 /* This is the merge sort format, the most efficient way of sorting*/
void merge(vector<int>& a, int from, int mid, int to){
  int n = to - from + 1;
  vector<int> b(n);
  
}
void merge_sort(vector<int>& a, int from, int to){
  if (from == to) return;
  int mid = (from + to) / 2;
  /* sort the 1st and 2nd half */
  merge_sort(a, from, mid);
  merge_sort(a, mid + 1, to);
  merge(a, from, mid, to);
}

/* This helps in searching for elements in a vector.*/
int findElem(vector<int> v, int elem){
   for(int i = 0; i < v.size(); i++){
     if(v[i] == elem){
       return i;
     }
  }
  return -1;
}

int main(){
  vector<int> v_test;
  v_test.push_back(1);
  
  int elemToFind = 2;
  cout << findElem(v_test, elemToFind);
  cout << findElem(v_test, 100);
}