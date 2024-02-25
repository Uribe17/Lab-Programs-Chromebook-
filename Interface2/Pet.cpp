#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

int main(){
    Pet whiskers = Pet("Whiskers", 7, "Brandy", false);
    cout << whiskers.getName() << endl;
    cout << whiskers.getAge() << endl;

    whiskers.updateAge(whiskers.getAge()+1);
    cout << whiskers.getAge() << endl;
    return 0;
}