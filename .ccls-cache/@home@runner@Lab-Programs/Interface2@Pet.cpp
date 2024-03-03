#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

Pet::Pet(){
  name = "";
  age = 0;
  owner = "";
  is_house_trained = false;
}
Pet::Pet(string name, int age, string owner, bool is_house_trained){
  this->name = name;
  this->age = age;
  this->owner = owner;
  this->is_house_trained = is_house_trained;
}

//updates name to new-name
void Pet::updateName(string new_name){
  name = new_name;
}

//updates age to new-age
void Pet::updateAge(int new_age){
  age = new_age;  
}
//updates owner to new-owner
void Pet::updateOwner(string adopter){
  owner = adopter;
}
string Pet::getName() const{
  return string();
}
int Pet::getAge() const{
  return 0;
}
string Pet::getOwner() const{
  return string();
}
bool Pet::getIsHouseTrained() const{
  return false;
}
