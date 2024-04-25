#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Pokemon{
  public:
    Pokemon();
    Pokemon(string name, int hp, int att, int def, vector<string> type);
    virtual void speak();

  private:
    string name;
    int hp;
    int attack;
    int defense;
    vector<string> type;
};
#endif