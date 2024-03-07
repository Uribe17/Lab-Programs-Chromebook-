#include <iostream>
#include <stdio.h>
#include "RPG.h"
using namespace std;

/**
 * @brief Sets up the turn interfaces for the RPG
 *
 * @param RPG opponent, RPG *opponent
**/
//void player1Turn(RPG player1, RPG player2){
//  cout << player1.getName() << "'s health: " << player1.getHealth() << "  "<< player2.getName() << "'s health: " << player2.getHealth() << endl;
//  cout<< player1.getName() << "'s turn" << endl;
//  cout << "Skill 0: " << "slash" << endl;
//  cout << "Skill 1: " << "parry" << endl;
//  cout << "Choose a skill to use, enter 0 or 1: " << endl;
//  string choice = "";
//  cin >> choice;
//  player1.attack(&player2);
//  if (choice == "0"){
//    player1.printAction("slash", player2);
//  } else {
//    player1.printAction("parry", player2);
//  }
//  player1.attack(&player2);
//  cout << "------------------------" << endl;
//}
//void player2Turn(RPG player2, RPG player1){
//  cout << player1.getName() << "'s health: " << player1.getHealth() //<< "  " << player2.getName() << "'s health: " << player2.getHealth() //<< endl;
//  cout<< player2.getName() << "'s turn" << endl;
//  cout << "Skill 0: " << "pilfer" << endl;
//  cout << "Skill 1: " << "jab" << endl;
//  cout << "Choose a skill to use, enter 0 or 1: " << endl;
//  string choice = "";
//  cin >> choice;
//  player2.attack(&player1);
//  if (choice == "0"){
//    player2.printAction("slash", player1);
//  } else {
//    player2.printAction("parry", player1);
//  }
//  player2.attack(&player1);
//  cout << "------------------------" << endl;
//}
/**
 * @brief uses strength to attack another RPG
 *
 * @param RPG opponent
**/
//void RPG::attack(RPG *opponent){
//  int damage = strength - opponent->getDefense();
//  int new_health = opponent->getHealth() - damage;
//  opponent->updateHealth(new_health);
//}
/**
 * @brief uses the skills of player1/player2
 *
 * @param RPG
**/
//void RPG::useSkill(RPG *opponent){
//}


int main(){
  RPG player1 = RPG();
  RPG player2 = RPG("Thief", 100, 10, 5, "thief");
  
  cout << player1.getHealth() << endl;
  int new_health = player1.getHealth() - 10;
  player1.updateHealth(new_health);
  cout << player1.getHealth() << endl;

  cout << player2.getHealth() << endl;
  int new_health2 = player2.getHealth() - 10;
  player2.updateHealth(new_health2);
  cout << player2.getHealth() << endl;

  cout << player1.isAlive() << endl;
  cout << player2.isAlive() << endl;
//  while(player1.isAlive() && player2.isAlive()){
//    player1Turn(player1, player2);
//    player2Turn(player2, player1);
//  }
//  if (player1.isAlive() == false){
//    cout << player2.getName() << " defeated " << player1.getName() //<< endl;
//  } else {
//    cout << player1.getName() << " defeated " << player2.getName() << endl;
//  }
}