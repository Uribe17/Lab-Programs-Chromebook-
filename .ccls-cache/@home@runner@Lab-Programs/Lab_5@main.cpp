#include <iostream>
#include "RPG.h"
using namespace std;

/**
 * @brief uses strength to attack another RPG
 *
 * @param RPG opponent
**/
void RPG::attack(RPG opponent){
    int damage = strength - opponent.getDefense();
}
void RPG::attack(RPG *opponent){
  int damage = strength - opponent->getDefense();
}
/**
 * @brief Sets up the turn interfaces for the RPG
 *
 * @param RPG opponent, RPG *opponent
**/
void player1Turn(RPG *player1, RPG *player2){
  cout << "------------------------" << endl;
  cout << player1->getName() << "'s turn" << endl;
  cout << player2->getHealth() << endl;
  cout << skills[0] << endl;
}
void player2Turn(RPG *player1, RPG *player2){
  cout << "------------------------" << endl;
  cout << player2->getName() << "'s turn" << endl;
}

int main(){
  RPG player1 = RPG();
  RPG player2 = RPG("Warrior", 100, 10, 5, "warrior");

  
  //player1.printAction("fire", player2);
  //player2.updateHealth(player2.getHealth() - player1.getStrength());
  cout << player2.getHealth() << endl;
  while(player1.isAlive() && player2.isAlive()){
    player1Turn(&player1, &player2);
    player2Turn(&player1, &player2);
  }
}