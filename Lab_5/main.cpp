#include <iostream>
#include "RPG.h"
using namespace std;

/**
 * @brief Sets up the turn interfaces for the RPG
 *
 * @param RPG opponent, RPG *opponent
**/
void player1Turn(RPG *player1, RPG *player2){
  cout << player1->getName() << "'s turn" << endl;
  cout << player2->getHealth() << endl;
  cout << "Skill 0: " << "slash" << endl;
  cout << "Skill 1: " << "parry" << endl;
  cout << "Choose a skill to use, enter 0 or 1: " << endl;
  string choice = "";
  cin >> choice;
  player1->attack(player2);
  if (choice == "0"){
    player1->printAction("slash", *player2);
  } else {
    player1->printAction("parry", *player2);
  }
  player1->attack(*player2);
  cout << "------------------------" << endl;
}
void player2Turn(RPG *player1, RPG *player2){
  cout << player2->getName() << "'s turn" << endl;
  cout << player1->getHealth() << endl;
  cout << "Skill 0: " << "slash" << endl;
  cout << "Skill 1: " << "parry" << endl;
  cout << "Choose a skill to use, enter 0 or 1: " << endl;
  string choice = "";
  cin >> choice;
  player2->attack(player1);
  if (choice == "0"){
    player2->printAction("slash", *player1);
  } else {
    player2->printAction("parry", *player1);
  }
  player1->attack(*player2);
  cout << "------------------------" << endl;
}
int main(){
  RPG player1 = RPG();
  RPG *player2 = new RPG("Warrior", 100, 10, 5, "warrior");

  while(player1.isAlive() && player2->isAlive()){
    player1Turn(&player1, player2);
    player2Turn(&player1, player2);
  }
}