#include <iostream>
using namespace std;

// Arrays are pass-by-reference
// Changes to the array by a function are
// if you output an array without the array, it yields just the address.

int main(){
  int scores[20]; //Problem: Accessing values, where elements are not defined.
  // Allocates 150 integers in memory
  // These 150 values are, as of right now, garbage values.
  // To initialize the array, we can use a for loop.
  cout << "Scores: ";
  for (int i = 0; i < 20; i++){
    cout << scores[i] << " ";
    cout << endl;
  }

  // We can also initialize the array with values.
  int data[5] = {103, 104, 170};
  //Since there are three defined values, the rest of the values will be set to the default 0, instead of a garbage value.
  cout << "Data: ";
  for (int i = 0; i < 5; i++){
    cout << data[i] << " ";
  }

  //Individual array initializition
  string info[4] = {"Get", "a", "Job", "loser"};
  cout << "Info: " << info[2];
  for (int i = 0; i < 4; i++){
    cout << info[i] << " ";
    cout << endl;
  }
  


  
  int score1, score2, score3;
  cin >> score1 >> score2 >> score3;

  //output scores in sorted order
  if (score1 > score2 && score1 > score3){
    
  }
  
}