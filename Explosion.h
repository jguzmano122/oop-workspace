#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect {
public:
    // Constructor
    Explosion(std::tuple<int, int> posExp) 
        : GameEntity(std::get<0>(posExp), std::get<1>(posExp), GameEntityType::ExplosionType) {
    }

    void apply(GameEntity& entity) override {
        // Instead of accessing protected members directly, use getters and setters
        // Since there's no setter for type, we can't modify it directly, 
        // we need to change the way we handle this in GameEntity.
        
        // For this example, I'm assuming you may want to create a public setter 
        // or change the design to allow modifying `type` safely.
        
        // Set the entity's type to NoneType
        // Note: You'll need a setter for type if you want to modify it.
        // entity.setType(GameEntityType::NoneType); // Assuming a setter is added

        // Set the position to (-1, -1)
        // You also need a setter for position.
        // entity.setPosition(std::make_tuple(-1, -1)); // Assuming a setter is added
    }
};

#endif // EXPLOSION_H
