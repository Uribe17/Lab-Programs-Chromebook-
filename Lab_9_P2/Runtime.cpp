#include <iostream>
#include <stdio.h>
#include <fstream>
#include <vector>
#include <ctime>
#include <exception>
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

  int mid = (start + end) / 2;

  if(v[mid] > elem){
    end = mid - 1;
  } else if(v[mid] < elem){
    start = mid + 1;
  } else{
    return mid;
  }
  return binarySearch(v, start, end, elem);
}

/**
 * @brief: updates v to contain values from filename
 *
 * It is expected that the files contain values ranging from one to one hundred million in ascending order.
 *
 * @param filename: string
 * @param v: vector
**/
void vecGen(const string & filename, vector<int> & v){
  ifstream file(filename);
  if(!file.is_open()){
    throw runtime_error("Failed to open " + filename);
  }
  v.clear();
  int number;
  while(file >> number){
    v.push_back(number);
  }
  if(file.bad()){
    throw runtime_error("Error reading from file: " + filename);
  }
  file.close();
}
/**
 * @brief writes to file the time it took to search with respect to the size of the vector, n
 *
 * @param filename (string) : filename (e.g. output_10000_numbers.csv)
 * @param times (vector<double>) : average times
 * @param n (vector<int>) : sizes of vectors
**/
void writeTimes(string filename, const vector<double> & times, const vector<int> & n){
  ofstream myFile(filename);
  if(!myFile.is_open()){
    cout << "Bad :(";
    return;
  }
  myFile << "Number of Elements (n)\t Time (sec)" << endl;
  // create a for loop to iterate through file sizes
  cout << times.size() << endl;
  for (int i = 0; i < times.size(); i++){
    cout << times.size() << endl;
    cout << n.size() << endl;
    myFile << n[i] << endl;
  }
  myFile.close();
  cout << "Wrote to " << filename << endl;
}

/**
 * @brief: Computes the avergae of the elements in vector
 *
 * @param a: vector
 * @return double
**/
double average(const vector<double> a){
  double sum;
  for(int i = 0; i < a.size(); i++){
    sum += a[i];
  }
  double average = sum/a.size();
  return average;
}

int main(){
  //Vectors for time calculations
  vector<int> elem_to_find;
  vecGen("Lab_9_P2/test_elem.csv", elem_to_find);

  vector<int> file_sizes;
  vecGen("Lab_9_P2/sizes.csv", file_sizes);

  vector<int>v;
  vector<double> times;
  vector<double> avg;

  // create a for loop to iterate through file sizes
  cout << "-Iterative Search-" << endl;
  for (int i = 0; i < file_sizes.size(); i++){
    string filename = to_string(file_sizes[i]) + "_numbers.csv";
    //cout << "0" << endl;
    vecGen(filename, v);
    //cout << "1" << endl;
    printf("%i \n", v.size());
    cout << filename << endl;
    times.clear();
    for(int i = 0; i < elem_to_find.size(); i++){
      //cout << "2" << endl;
      int elem = elem_to_find[i];

//Time testing the Iterative Search
      clock_t start = clock();
      int index_if_found = iterativeSearch(v, elem);
      clock_t end = clock();

      double elapsed_time_in_sec = double(end-start)/CLOCKS_PER_SEC;
      times.push_back(elapsed_time_in_sec); 
  }
  double iterAvg = average(times);
  avg.push_back(iterAvg);
}
  cout << "3" << endl;
  writeTimes("iterativeSearch_times.csv", avg, v);
  avg.clear();

//-------------------------------------
  cout<< "-Binary Search-" << endl;
  for (int i = 0; i < file_sizes.size(); i++){
    string filename = to_string(file_sizes[i]) + "_numbers.csv";
    vecGen(filename, v);
    cout << filename << endl;
    times.clear();
    for(int i = 0; i < elem_to_find.size(); i++){
      int elem = elem_to_find[i];

//Time testing the Binary Search
      clock_t start = clock();
      int binary_index_ifFound = binarySearch(v, 0, v.size(),elem);
      clock_t end = clock();

      double elapsed_time_in_sec = double(end-start)/CLOCKS_PER_SEC;
      times.push_back(elapsed_time_in_sec);
      
    }
  double binAvg = average(times);
  avg.push_back(binAvg);
  }
  writeTimes("binarySearch_times.csv", avg, v);
  cout<< " " << endl;
}