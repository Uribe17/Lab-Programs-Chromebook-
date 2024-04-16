#include <iostream>
#include <fstream>
#include <vector>
#include <ctime>
using namespace std;

/**
 * @brief: Returns the first index of an elem if it exists, otherwise returns -1. iterativeSearch starts at the first index and iterates sequentially to the next until it either finds the element or until it reaches to the end.
 *
 * @param v: Vector of elements
 * @param elem: integer to look for
 * @return: int
**/
int iterativeSearch(vector<int> v, int elem){
  for(int i = 0; i < v.size(); i++){
    if (v[i] == elem){
      return i;
    }
  }
  return -1;
}

/**
 * @brief: Returns index of elem, if it exist in v, otherwise it returns -1. binarySearch is recursive, it calls itself, and utilizes v's increasing order. 
 *
 * It calculates the mid from the start and end index. It compares v[mid] with elem to search the left half/right half
 *
 * @param v: Vector of elements
 * @param start: leftmost index (0)
 * @param end: rightmost index (v.size())
 * @param elem: integer to look for
 * @return: int
**/
int binarySearch(vector<int> & v, int start, int end, int elem){

  if(start > end){
    return -1;
  }
  if(start == end){
    return -1;
  }

  int mid = (start + end) / 2;

  if(v[mid] == elem){
    return mid;
  } else if (v[mid] < elem){
    return binarySearch(v, mid + 1, end, elem);
  } else {
    return binarySearch(v, start, mid - 1, elem);
  }
}

/**
 * @brief: updates v to contain values from filename
 *
 * It is expected that the files contain values ranging from one to one hundred million in ascending order.
 *
 * @param filename: string
 * @param v: vector
**/
void vecGen(string filename, vector<int> & v){
  ifstream file(filename);
  int num;
  v.clear();
  while (file.is_open() && file >> num){
    v.push_back(num);
  }
  file.close();
}

int main(){

  vector<int> v;
  vecGen("Lab_9/10000_numbers.csv", v);
  
  vector<int> elem_to_find;
  vecGen("Lab_9/test_elem.csv", elem_to_find);
  
  for(int i = 0; i < elem_to_find.size(); i++){
    int elem = elem_to_find[i];

//Time testing the Iterative Search
    clock_t start = clock();
    int index_if_found = iterativeSearch(v, elem);
    clock_t end = clock();

    double elapsed_time_in_sec = (double(end-start)/CLOCKS_PER_SEC);

    cout << index_if_found << ": " << elapsed_time_in_sec << endl;
  }

  
  for(int i = 0; i < elem_to_find.size(); i++){
    int elem = elem_to_find[i];
  
    //Time testing the Binary Search
    clock_t begin = clock();
    int binary_index_ifFound = binarySearch(v, 0,   v.size(), elem);
    clock_t finish = clock();

    double elapsed_time_in_sec_binary = (double(finish - begin) / CLOCKS_PER_SEC);

    cout << binary_index_ifFound << ": " << elapsed_time_in_sec_binary << endl;   
  }
}