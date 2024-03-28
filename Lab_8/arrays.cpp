#include <iostream>
#include <vector>
using namespace std;

/**
 * @brief prints the elements in the array & their mem locations
 *
 * @param arr - Array of integers
 * @param size - Size of the array (# of elements)
**/
void printMemArr(const int * arr, int size){
  printf("Array - Each int is worth %lu bytes.\n", sizeof(arr[0]);
  for(int i = 0; i < size; i++){
    printf("Value :%i at Memory Location: %p\n", arr[i], arr +i);
  }
}

/**
 * @brief 
 *
 * @param 
 * @param
**/
void incArrBy10(){
  
}


int main(){
  const int SIZE = 5;
  int arr[SIZE];
  for(int i = 0; i < SIZE; i++){
    arr[i] = 100 + i;
  }
  printf("Before--------------\n");
  printMemArr(arr, SIZE);
  incArrBy10(arr, SIZE);
  printf("After--------------\n");
  printMemArr(arr, SIZE);

  vector<int> vec;
  for(int i = 0; i < SIZE; i++){
    vec.push_back(100 + i);
  }
  
}
