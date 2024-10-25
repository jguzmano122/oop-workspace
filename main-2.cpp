#include <iostream>
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"

int main() {
    // Create a Ship object
    Ship myShip(5, 5);
    std::cout << "Ship position: (" << std::get<0>(myShip.getPos()) << ", " 
              << std::get<1>(myShip.getPos()) << ")\n";

    // Move the Ship
    myShip.move(2, 3);
    std::cout << "Ship moved to position: (" << std::get<0>(myShip.getPos()) << ", " 
              << std::get<1>(myShip.getPos()) << ")\n";

    // Create a Mine object
    Mine myMine(3, 4);
    std::cout << "Mine position: (" << std::get<0>(myMine.getPos()) << ", " 
              << std::get<1>(myMine.getPos()) << ")\n";

    // Explode the mine and create an Explosion object
    Explosion explosion = myMine.explode();
    std::cout << "Mine exploded! New mine type: " << myMine.getType() << "\n";
    std::cout << "Explosion position: (" << std::get<0>(explosion.getPos()) << ", " 
              << std::get<1>(explosion.getPos()) << ")\n";

    // Apply explosion effect on the ship
    explosion.apply(myShip);
    std::cout << "Ship after explosion: Type: " << myShip.getType() 
              << ", Position: (" << std::get<0>(myShip.getPos()) << ", "
              << std::get<1>(myShip.getPos()) << ")\n";

    return 0;
}
