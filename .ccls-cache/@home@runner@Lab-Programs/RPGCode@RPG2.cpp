#include <iostream>
#include <string>
#include <cmath>
#include <cctype>
#include <fstream>
#include <sstream>
#include "RPG2.h"
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

/**
 * @brief sets the skills based on the monster's role
**/
void monster::setMonSkills(){
    if (type == "Undead"){
        skills[0] = "Poison";
        skills[1] = "Chomp"; 
    } else if (type == "Slime"){
        skills[0] = "Acid";
        skills[1] = "Water Strike";
    } else if (type == "Beast"){
        skills[0] = "Maul";
        skills[1] = "Strike";
    } else if (type == "Spitfire"){ 
        skills[0] = "Poison Goop";
        skills[1] = "Bite";
    } else { //elemental
      skills[0] = "Fireball";
      skills[1] = "Lightning Strike";
    }
}
template<typename NPC>
void RPG::printAction(string skill, NPC opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}
/*
 *@brief Updates health into new_health 
 *
 *@param new_health
*/
// template<typename NPC>
void RPG::updateHealth(int new_health){
    health = new_health;
}

/**
 * @Brief updates the name of the player
**/
string RPG::setName(){
  cout << "Enter your name traveler..."<< endl;
  string new_name;
  cin >> new_name;
  return name = new_name;
}

/**
 * @Brief: Sets the players class
**/
void RPG::getType(){
  cout << "What is your class?" << endl;
  cout << "OPTIONS: Mage, Thief, Archer, Warrior" << endl;
  string new_type;
  cin >> new_type;
  type = new_type;
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
template<typename NPC>
void RPG::attack(NPC * opponent){
  int opp_health = (*opponent).getHealth();
  int opp_def = (*opponent).getDefense();
  int new_health = opp_health - (strength - opp_def);
  opponent->updateHealth(new_health);
}

/**
 * @brief uses the skills of player1/player2
 *
 * @param RPG
**/
template<typename NPC>
void RPG::useSkill(NPC * opponent){
  for(int i = 0; i < SKILL_SIZE; i++){
    printf("Skill %i: %s\n", i, skills[i].c_str()); 
  }
  int chosen_skill_index;
  printf("Choose a skill to use: Enter 0 or 1\n");
  cin >> chosen_skill_index;

  if(chosen_skill_index == 0 || chosen_skill_index == 1){
    string chosen_skill = skills[chosen_skill_index];
    printAction(chosen_skill, *opponent);
    attack(opponent);
  }else{
    cout << "Invalid Input: Too Bad Too Sad!" << endl;
    cout << "Next time check what number you input! :)" << endl;
    int bone_breaker = (*opponent).getHealth() - 100000;
    (*opponent).updateHealth(bone_breaker);
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
monster::monster() :RPG("Skeleton", 50, 10, 5, "Undead"){
  setMonSkills();
}

monster::monster(string name, int health, int strength, int defense, string type){
  this->name = name;
  this->health = abs(health);
  this->strength = abs(strength);
  this->defense = abs(defense);
  this->type = type;
  setMonSkills();
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

void monster::monsterAction(string skill, monster opponent){
  printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}

void monster::monsterSkill(monster *opponent){
  for(int i = 0; i < SKILL_SIZE; i++){
    printf("Skill %i: %s\n", i, skills[i].c_str()); 
  }
  int chosen_skill_index = rand() % 2 + 0;
  printf("Choose a skill to use: Enter 0 or 1\n");


    string chosen_skill = skills[chosen_skill_index];
    monsterAction(chosen_skill, *opponent);
    attack(opponent);
}