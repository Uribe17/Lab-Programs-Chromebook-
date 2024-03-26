#include <iostream>
#include <string>
using namespace std;

void printMem(int * arr, int size){
  printf("Each int is worth %lu bytes.\n", sizeof(arr[0]));
  for(int i = 0; i < size; i++){
    printf("Valie :%i at Memory Location: %p\n", arr[i], arr +i);
  }
}

void printMem(string * arr, int size){
  printf("Each int is worth %lu bytes.\n", sizeof(arr[0]));
  for(int i = 0; i < size; i++){
    printf("Valie :%s at Memory Location: %p\n", arr[i], arr +i);
  }
}

struct Point{
  int x;
  int y;
  string name;
};

void printMem(struct Point * arr, int size){
  printf("Each point is worth %lu bytes.\n", sizeof(arr[0]));
  for(int i = 0, i < size, ){
    
  }
}



int main(){
  const int SAMPLE_SIZE = 5;
}