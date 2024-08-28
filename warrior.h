#include <iostream>
#include <string> 
#include "player.h"
#ifndef WARRIOR_H
#define WARRIOR_H

using namespace std;

    // 1) Class declaration 
class Warrior : public Player {

    // 1.1) private' data members
    private:
        string weapon; 
    
    public:
        // 2) Constructors
        Warrior (string Name, int Health, int Damage, string Weapon) : Player (Name, Health, Damage), weapon(Weapon) {}

        //3) Functions *** to be difined
        void swingWeapon (Player * opponent) {

        }

         string getWeapon () {

            return weapon;
        }




};

#endif