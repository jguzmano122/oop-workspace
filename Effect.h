#ifndef EFFECT_H
#define EFFECT_H

#include <iostream>
#include "GameEntity.h"
#include <tuple>

    // defining Class Effect

class Effect {

public:

    virtual void apply(GameEntity& entity) = 0;  // the '= 0' means it is a Pure Virtual function


};


#endif // header guard end