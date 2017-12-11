#ifndef ABTRACTEFFECTONBATTLEFIELD_H
#define ABTRACTEFFECTONBATTLEFIELD_H

#include "../abstracteffect.h"

class AbstractEffectOnBattlefield : public AbstractEffect{
public:
    AbstractEffectOnBattlefield(int chance, std::string description, int nbTurn) : AbstractEffect(chance, description, nbTurn){}
    AbstractEffectOnBattlefield(int chance, std::string description) : AbstractEffect(chance, description){}
};

#endif // ABTRACTEFFECTONBATTLEFIELD_H
