#include <iostream>
#include <string>
#include <fstream>
using namespace std;

double read_data(ifstream& in){
  double highest;
  double next;
  if (in >> next){
    highest = next;
  } else{
    return 0;
  }
  while (in >> next){
    if (next > highest){
      highest = next;
    }
  }
  return highest;
}

int main(){
  //ifstream input_data;
  //input_data.open("input.dat"); //Can also choose directory "c:\\homework\\input.dat"
  //input_data.unget(); //Allows the next input operation to be read again
  //input_data.close(); //Closes the file
  //ofstream input_data("Name of File", ios::in | ios::out); //Open a file for writing
  
  double max;
  
  string input;
  cout << "Do you want to read from a file? (y/n)\n";
  cin >> input;
  if (input == "y"){
    string filename;
    cout << "Enter a file name: ";
    cin >> filename;

    ifstream infile;
    infile.open(filename.c_str());

    if(infile.fail()){
      cout << "Error opening file" << endl;
      return 1;
    }
  }else{
    double max = read_data(infile);
    cout << "The max value is " << max << endl;

    infile.close();
    return 0;
  }
}