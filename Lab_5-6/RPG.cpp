#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <fstream>
#include <sstream>
#include "RPG.h"
using namespace std;

/**
 * @brief sets the skills based on the RPG's role
 * 
**/
void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder"; 
    } else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else { //Warrior
        skills[0] = "slash";
        skills[1] = "parry";
    }
}
void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}
/*
 *@brief Updates health into new_health 
 *
 *@param new_health
*/
void RPG::updateHealth(int new_health){
    health = new_health;
}
/**
 * @brief returns whether health is greater than 0
 *
 * @return true
 * @return false
**/
bool RPG::isAlive() const{
    return health > 0;
}
/**
  * @brief uses strength to attack another RPG, defense softens the damage the opponent takes.
  *
  * @param RPG opponent
**/
void RPG::attack(RPG * opponent){
  int opp_health = (*opponent).getHealth();
  int opp_def = (*opponent).getDefense();
  int new_health = opp_health - (strength - opp_def);
  (*opponent).updateHealth(new_health);
}
/**
 * @brief checks to see if the skill input in useSkill is in the skills array.
 *
 * @param str
**/
bool isNumber(const string& str){
  for(char c : str){
    if(!isdigit(c)){
      return false;
    }
  }
  return true;
}
/**
 * @brief converts chosen_skill_index into a string if the input isn't 0 or 1.
 *
 * @param chosen_skill_index
**/
string intToString(int chosen_skill_index){
  stringstream ss;
  ss << chosen_skill_index;
  return ss.str();
}

/**
 * @brief uses the skills of player1/player2
 *
 * @param RPG
**/
void RPG::useSkill(RPG * opponent){
  for(int i = 0; i < SKILL_SIZE; i++){
    printf("Skill %i: %s\n", i, skills[i].c_str()); 
  }
  int chosen_skill_index;
  printf("Choose a skill to use: Enter 0 or 1\n");
  cin >> chosen_skill_index;
  
  string chosen_skill_index_str = intToString(chosen_skill_index);
  if (isNumber(chosen_skill_index_str) != true){
    cout << "The input is not a number, go back to school" << endl;
    int bone_breaker = (*opponent).getHealth() - 100000;
    (*opponent).updateHealth(bone_breaker);
  }else{

    while (chosen_skill_index != 0 && chosen_skill_index != 1 && intToString(chosen_skill_index) != "0" && intToString(chosen_skill_index) != "1"){
      printf("Wrong input, too bad so sad!\n");
      int bone_breaker = (*opponent).getHealth() - 100000;
      (*opponent).updateHealth(bone_breaker);
      break;
    }
    
    string chosen_skill = skills[chosen_skill_index];
    printAction(chosen_skill, *opponent);
    attack(opponent);
  }
}

RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";
}
RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = abs(health);
    this->strength = abs(strength);
    this->defense = abs(defense);
    this->type = type;
    setSkills();
}

string RPG::getName() const{
  return name;
}
int RPG::getHealth() const{
  return health;
}
int RPG::getStrength() const{
  return strength;
}
int RPG::getDefense() const{
  return defense;
}

