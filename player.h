#include <iostream>
#include <string> 
#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

    // 1) Class declaration
class Player {

        // 1.1) "private" data members
    protected:
        string name;
        int health; 
        int damage;

    public:

    // 2) Constructors that set data members to given values
    // 2.1) method #1
        // Player (string Name, int Health, int Damage){
        //     name = Name;
        //     health = Health;
        //     damage = Damage;

        // }
        // 2.1) method #2
        // Player (string NameP, int HealthP, int DamageP) : name(NameP), health(HealthP), damage(DamageP) {}

    Player (string NameP, int HealthP, int DamageP) : name(NameP), health(HealthP), damage(DamageP) {}
    
    virtual void takeDamage (int damage) {

        health = health - damage;

    }

virtual void attack (Player * opponent, int damage){
        
    opponent -> takeDamage (damage);

    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
    }

    // 4) Getters and setters 

    void setName (string NameP){

        name = NameP;

    }

    void setHealth (int HealthP){

        health = HealthP;

    }

    void setDamage (int DamageP){

        damage = DamageP;

    }
     string getName () {

            return name;
        }

    int getHealth (){

        return health;
    }


    int getDamage () {

        return damage;
    }


};

#endif