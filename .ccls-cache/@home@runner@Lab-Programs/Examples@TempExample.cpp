#include <iostream>
using namespace std;

int main(){
  double next;
  double highest;

// request initial highest
  cout <<"Temp?\n";
  if (cin >> next){
    highest = next;
  } else {
    cout << "No data\n";
    return -1;
  }

  while (cin>> next) {
    if (next > highest) {
      highest = next;
    }
  }
  cout << "Highest temp: " << highest << endl;"
}