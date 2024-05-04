#ifndef POKEMON_H
#define POKEMON_H

#include <string>
#include <vector>
using namespace std;

class Pokemon{
    public:
        Pokemon();
        Pokemon(string name, int hp, int att, int def, vector<string> type);

        virtual void speak();
        virtual void printStats();

    protected:
        string name;
        int hp;
        int attack;
        int defense;
        vector<string> type;

};
#endif