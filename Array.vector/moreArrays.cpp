#include <iostream>
#include <vector>
using namespace std;

void foo(int * a);

int main(){
  
  // Arrays:
  int arr[10]; // Can hold up to 10 int values.
  int arr2[2] = {1,2}; // Can hold the elements 1 and 2.

  // Arrays Initialize
  const int SIZE = 2;
  int arr3[SIZE]; //Can hold SIZE amounts of value
  int arr4[SIZE] = {1,2}; //The two values that SIZE allows is held by 1 and 2.

  // Access elements - Index
  cout << arr2[0];
  arr2[0] = 100;
  cout << arr2[0];
  // Note: The name of the array is the pointer to the first element.

  // This is a pass-by-reference
  void foo(int arr2, int SIZE);

  //To pass an array to a function, you pass the array and the size
  // If a function adds/removes elements to an array, you need to pass the max and current size.
}