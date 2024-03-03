#include <iostream>
#include "pet.h"
using namespace std;

int main(){
  Pet whiskers = Pet("Whiskers", 7, "Brandy", false);
  cout << whiskers.getName() << endl;
  cout << whiskers.getAge() << endl;

  whiskers.updateAge(whiskers.getAge()+1);
  cout << whiskers.getAge() << endl;

  Pet darwin = Pet("Darwin", 10, "Gumball", true);

  if (darwin.getAge() == whiskers.getAge()){
    cout << "They are the same age" << endl;
  } else{
    cout << darwin.getOwner() << " and " << whiskers.getOwner() << " have pets that are different ages." << endl;
  }
    return 0;
}