#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet{
    
    Pet();
    Pet(string name, int age, string owner, is_house_trained);

    void updateName(string new_name);
    void updateAge(int new_age);//updates age to new_age
    void updateOwner(string adopter);

    string getName() const;
    int getAge() const;
    string getOwner() const;
    bool getIsHouseTrained() const;

  private:
      string name;
      int age;
      string owner;
      bool is_house_trained;
};
#endif