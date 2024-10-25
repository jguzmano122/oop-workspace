// ** GameEntity Base Class

#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <utility>  // for using 'pair' as example
#include <tuple>    // for using 'typle'

 // enum definition
enum GameEntityType {

     ExplosionType, MineType, NoneType, ShipType
};

class GameEntity{
    protected:

        std::tuple <int, int> position; // representing the position of the entity
        GameEntityType type; // (representing the type of the entity)


    public:

        // Constructor
    GameEntity (int x, int y, GameEntityType entityType) : position (std::make_tuple (x, y)), type (entityType) {}
        
        // Returns the position of the entity.
    std::tuple<int, int> getPos() {
        return position;
    }

    GameEntityType getType() {
        return type;
    }

//** extra 

// Setter for type
    void setType(GameEntityType entityType) {
        type = entityType;
    }

    // Setter for position
    void setPosition(std::tuple<int, int> newPosition) {
        position = newPosition;
    }


};

#endif 

