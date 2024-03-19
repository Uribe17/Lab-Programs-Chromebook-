#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

bool isNumber(const string& str) {
    for (char c : str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main(){
    string input;
    cout << "Enter a number: ";
    cin >> input;

    if (!isNumber(input)) {
        cout << "Error: Please enter a valid number!\n";
        return 1;
    }

    int number = stoi(input);
    cout << "The number you entered is: " << number << endl;

    return 0;
}