#include <iostream>
#include <vector>
using namespace std;

void foo1(vector<string> & v, int index, string s){
  int last = v.size() - 1;
  v.push_back(v[last]);
  for (int i = last; i > index; i--){
    v[i] = v[i-1];
  }
  v[index] = s;
}

int main(){
  int size = 5;
  vector<string> vMain = {"a", "b", "c", "d", "e"};
  
  for(int i = 0; i < vMain.size(); i++){
    printf("String: %s \n", vMain[i].c_str());
    
  }
  
  foo1(vMain, 6, "s");
  cout << " " << endl;
  
  for(int i = 0; i < vMain.size(); i++){
    printf("String: %s \n", vMain[i].c_str());
  }
  
}