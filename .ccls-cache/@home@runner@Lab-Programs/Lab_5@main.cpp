#include <iostream>
#include <stdio.h>
#include "RPG.h"
using namespace std;

/**
 * @brief: Prints both player's names and their health.
 *Example: Wiz Health: 100  NPC Health: 100\n
 *
 * @param: p1
 * @param: p2
**/
void displayStats(RPG p1, RPG p2){
  printf("%s Health: %i  %s Health: %i\n", p1.getName().c_str(), p1.getHealth(), p2.getName().c_str(), p2.getHealth());
}

/**
 * @brief: Displays who wins based on who is alive. Use an if/else statement to check if Player 1 is alive.
 *
 * @param: p1
 * @param: p2
**/
void displayEnd(RPG p1, RPG p2){
  if (p1.isAlive() == true){
    cout << p1.getName() << " defeated " << p2.getName() << " , Good Game!" << endl;
  } else {
    cout << p2.getName() << " defeated " << p1.getName() << " , Good Game!" << endl;
  }
}

/**
 * @brief: Uses a while loop to check whether both players are alive.
 * If so, it calls displayStats((*p1), (*p2))
 * @param: p1
 * @param: p2
**/
void gameLoop(RPG * p1, RPG * p2){
  while((*p1).isAlive(), (*p2).isAlive()){
    displayStats((*p1), (*p2));
    cout << (*p1).getName() << "'s turn" << endl;
    (*p1).useSkill(p2);
    printf("===================================\n");

    displayStats((*p1), (*p2));
    cout << (*p2).getName() << "'s turn" << endl;
    (*p2).useSkill(p1);
    printf("===================================\n");
  }
}

int main(){
  RPG player1 = RPG();
  RPG player2 = RPG("Thief", 100, 10, 5, "thief");

  gameLoop(player1, player2);
  displayEnd(player1, player2);

 
  if (player1.isAlive() == true){
    cout << player1.getName() << " defeated " << player2.getName() << " , Good Game!" << endl;
  } else {
    cout << player2.getName() << " defeated " << player1.getName() << " , Good Game!" << endl;
  }
}