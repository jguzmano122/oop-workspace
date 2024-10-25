#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity {
public:
    // Constructor
    Ship(int x, int y) 
        : GameEntity(x, y, GameEntityType::ShipType) {
    }

    // Move function
    void move(int dx, int dy) {
        int currentX = std::get<0>(position);
        int currentY = std::get<1>(position);
        position = std::make_tuple(currentX + dx, currentY + dy);
    }
};

#endif // SHIP_H
