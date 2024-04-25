#ifndef CHAR_H
#define CHAR_H
#include "pokemon.h"
#include <vector>
#include <string>
using namespace std;
class Charmander : public Pokemon{
  public:
    Charmander();
    Charmander(string name, int hp, int att, int def, vector<string> type);
    void speak();
    void printStats();
  private:
    vector<string> type;
};
#endif
