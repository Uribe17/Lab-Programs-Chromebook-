#ifndef CHARMANDER_H
#define CHARMANDER_H
 
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Charmander : public Pokemon{
    public:
        Charmander();
        Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s);

        //These override
        void speak();
        void printStats();

    private:
        vector<string> skills;
};
#endif