#ifndef SIDE_H
#define SIDE_H

#include "abstracteffectonbattlefield.h"

//using namespace battlefield;

namespace effect{
    class Side : public AbstractEffectOnBattlefield{
    protected:
        battlefield::Side side;
    public:
        Side(int chance, std::string description, int nbTurn, battlefield::Side side) : AbstractEffect(chance, description, nbTurn){this->side = side;}
        Side(int chance, std::string description, battlefield::Side side) : AbstractEffect(chance, description){this->battlefield = battlefield;}
    };
}

#endif // SIDE_H
