#ifndef SIDE_H
#define SIDE_H

#include "abstracteffectonbattlefield.h"

//using namespace battlefield;

namespace effect{
class Side : public AbstractEffectOnBattlefield{
public:
    Side(int chance, std::string description, int nbTurn) : AbstractEffect(chance, description, nbTurn){}
    Side(int chance, std::string description) : AbstractEffect(chance, description){}
};
}

#endif // SIDE_H
