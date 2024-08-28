#include <iostream>
#include <string> 
#include "player.h"
#ifndef WIZARD_H
#define WIZARD_H


using namespace std;

    // 1) Class declaration 
class Wizard : public Player {

    // 1.1) 'private' data members
    private:
        int mana; 
    
    public:
        // 2) Constructors
      
        Wizard (string Name, int Health, int Damage, int Mana) : Player (Name, Health, Damage), mana(Mana) {}

        //Wizard () : Player (), mana(Mana) {}

        // 3) Functions *** to be difined
        void castSpell (Player * opponent) {

            int damageWiz = mana;
            opponent->takeDamage(damageWiz);

            cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage.\n";

        }

        int getMana () {

            return mana;
        }
        
        






};

// int main(){

// Wizard w1 ("Yotas", 10, 0, 6);

//         string n = w1.getName();
//         cout << n << endl;


//     return 0;
// }


#endif