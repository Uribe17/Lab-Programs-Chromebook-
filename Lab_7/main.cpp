#include <iostream>
#include <fstream>
using namespace std;

/**
 * @brief: writes sample_size # of integers
 *
 * @param: filename
 * @param: arr
 * @param: sample_size
**/
void writeToFile(string filename, int * arr, int sample_size){
  ofstream file(filename);
  int val;

  for(int i = 0; i < sample_size; i++){
    file << arr[i];
    file << "\n";
  }
  file.close();
  printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief: writes sample_size # of strings
 *
 * @param: filename
 * @param: arr
 * @param: sample_size
**/
void writeToFile(string filename, string * arr, int sample_size){
  ofstream file(filename);
  int val;

  for(int i = 0; i < sample_size; i++){
    file << arr[i];
    file << "\n";
  }
  file.close();
  printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief: writes sample_size # of char
 *
 * @param: filename
 * @param: arr
 * @param: sample_size
**/
void writeToFile(string filename, char * arr, int sample_size){
  ofstream file(filename);
  int val;

  for(int i = 0; i < sample_size; i++){
    file << arr[i];
    file << "\n";
  }
  file.close();
  printf("Wrote to %s\n", filename.c_str());
}

/**
 * @brief: Reads the content of a file
 *
 * @param: filename
**/
void readFile(string filename){
  
}

int main(){
  const int sample_size = 10;
  int array_int[sample_size] = {1,2,3,4,5,6,7,8,9,10};
  string array_str[sample_size] = {"This","is","a","sentence. ", "This","is","another","sentence. ", "The","end"};
  char array_char[sample_size] = {'a','b','c','d','e','0','1', '2', '3', '4'};

  string int_file = "array_int.csv";
  writeToFile(int_file, array_int, sample_size);
  
  string str_sile = "array_str.csv";
  writeToFile(int_file, array_str, sample_size);
  
  string char_file = "array_char.csv";
  writeToFile(int_file, array_char, sample_size);

  readFile("array_int.csv");
  readFile("array_str.csv");
  readFile("array_char.csv");
}