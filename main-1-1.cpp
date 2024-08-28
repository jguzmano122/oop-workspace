#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"


using namespace std;
int main() {

//Wizard(name, health, damage, mana)
Wizard wizard("Gandalf", 100, 20, 50);

    // string n = wizard.getName();
    // int h = wizard.getHealth();
    // int d = wizard.getDamage();
    // int m = wizard.getMana();
    
    // cout << n << " " << h << " "  << d << " " << m << endl;

// //Warrior(name, health, damage, weapon)
Warrior warrior("Aragorn", 120, 25, "Sword");

    // string a = warrior.getName();
    // int b = warrior.getHealth();
    // int c = warrior.getDamage();
    // string e = warrior.getWeapon();

    // cout << a << " " << b << " "  << c << " " << e << endl;

cout << "Let the battle begin!" << endl;
while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
wizard.castSpell(&warrior);
if (warrior.getHealth() > 0) {
warrior.swingWeapon(&wizard);
}
}
if (wizard.getHealth() > 0) {
cout << wizard.getName() << " wins!" << endl;
} else {
cout << warrior.getName() << " wins!" << endl;
}
return 0;
}
    