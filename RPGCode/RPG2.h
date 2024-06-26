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
        template<typename NPC>
        void printAction(string, NPC);
        // Mutator
        //template<typename NPC>
        

        void addName();

        //These use pointers, and are not used.
        template<typename NPC>
        void attack(NPC *opponent);

        template<typename NPC>
        void useSkill(NPC *opponent);
  
      

        bool isAlive() const;
        // Accessors
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;

    private:
        void updateHealth(int);
        string name;
        int health;
        int strength;
        int defense;
        string type; //Warrior, Mage, Thief, Archer
        string skills[SKILL_SIZE];
        //void updateHealth(int);
};

class monster : private RPG{
    public:
        //Constructors
        monster();
        monster(string name, int health, int strength, int defense, string type);
        void setMonSkills();
        void monsterSkill(monster *opponent);
        void monsterAction(string, monster);

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
#endif