#ifndef BATTLEFIELD_H
#define BATTLEFIELD_H

#include "side.h"
#include "weather.h"
#include "terrain.h"

using namespace battlefield;

class Battlefield
{
private:
    Side playerOneSide;
    Side playerTwoSide;
    unsigned int nbTurn;
    Weather weather;
    Terrain terrain;
    bool distorsion;
    static Battlefield instance;

public:
    Battlefield();
};

#endif // BATTLEFIELD_H
