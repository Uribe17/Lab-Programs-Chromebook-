#ifndef RPG_H
#define RPG_H
#include <string>
using namespace std;

const int SKILL_SIZE = 2;

class RPG{
    public:
        //Constructors
        RPG();
        RPG(string name, int health, int strength, int defense, string type);
        string setName();
        void getType();
        void setSkills();
        void printAction(string, RPG);
        // Mutator
        void updateHealth(int);
        void addName();

        //These use pointers, and are not used.
        void attack(RPG *opponent);
        void useSkill(RPG *opponent);
  
      

        bool isAlive() const;
        // Accessors
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;

    private:
        string name;
        int health;
        int strength;
        int defense;
        string type; //Warrior, Mage, Thief, Archer
        string skills[SKILL_SIZE];
};

class monster : private RPG{
    public:
        //Constructors
        monster();
        monster(string name, int health, int strength, int defense, string type):
RPG(name, health, strength, defense, type) {}
        void setMonSkills();
        void monsterSkill(monster *opponent);
        void monsterAction(string, monster);

    private:
        string name;
        int health;
        int strength;
        int defense;
        string type; //Warrior, Mage, Thief, Archer
        string skills[SKILL_SIZE];

};
#endif