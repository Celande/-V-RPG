#ifndef ABTRACTEFFECTONBATTLEFIELD_H
#define ABTRACTEFFECTONBATTLEFIELD_H

#include "../abstracteffect.h"

class AbstractEffectOnBattlefield : public AbstractEffect{
protected:
    BattleField field;
public:
    AbstractEffectOnBattlefield(int chance, std::string description, int nbTurn, BattleField field) : AbstractEffect(chance, description, nbTurn){this->field = field;}
    AbstractEffectOnBattlefield(int chance, std::string description, BattleField field) : AbstractEffect(chance, description){this->field = field;}
};

#endif // ABTRACTEFFECTONBATTLEFIELD_H
