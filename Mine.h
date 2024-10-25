#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity {
public:
    // Constructor
    Mine(int x, int y) 
        : GameEntity(x, y, GameEntityType::MineType) {
    }

    // Explode function
    Explosion explode() {
        Explosion explosion(position); // Create an Explosion at the mine's position
        type = GameEntityType::NoneType; // Change the mine type to NoneType
        position = std::make_tuple(-1, -1); // Optionally reset position
        return explosion; // Return the explosion object
    }
};

#endif // MINE_H
