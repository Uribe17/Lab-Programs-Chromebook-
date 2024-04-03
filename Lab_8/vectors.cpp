#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elements in the vector & their mem locations
 *
 * @param v - Vector of Integers
**/
void printMemVec(vector<int> * V, int size){
  printf("Array - Each int is worth %lu bytes.\n", sizeof(V[0]));
  for(int i = 0; i < size; i++){
    printf("Value :%i at Memory Location: %p\n", (*V)[i], V +i);
  }
}

/**
 * @brief Increments all of the elements in the array by 10.
 *
 * @param arr
 * @param size
**/
void incVecBy10(vector<int> * V, int size){
  for(int i = 0; i < size; i++){
    (*V)[i] += 10;
  }
}

int main(){
  const int SIZE = 5;
  vector<int> vMain(SIZE);
  cout << "Size: " << vMain.size() << endl;
  for(int i = 0; i < SIZE; i++){
    vMain.insert(vMain.begin() + i, 100 + i);
  }

  printf("Before Increment=====================");
  printMemVec(&vMain, SIZE);
  incVecBy10(&vMain, SIZE);
  printf("After Increment=====================");
  printMemVec(&vMain, SIZE);

  vMain.pop_back();
  cout << "Size: " << vMain.size() << endl;
  printf("After Pop=====================");
  printMemVec(&vMain, SIZE);
  vMain.push_back(101);
  vMain.push_back(102);
  printf("After Push=====================");
  printMemVec(&vMain, vMain.size());
  
  return 0;
}