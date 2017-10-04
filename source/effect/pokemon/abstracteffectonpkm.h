#ifndef ABSTRACTEFFECTONPKM_H
#define ABSTRACTEFFECTONPKM_H

#include "../abstracteffect.h"

class AbstractEffectOnPkm : public AbstractEffect{
protected:
    BattlePokemon pkm;
public:
    AbstractEffectOnPkm(int chance, std::string description, int nbTurn, BattlePokemon pkm) : AbstractEffect(chance, description, nbTurn){this->pkm = pkm;}
    AbstractEffectOnPkm(int chance, std::string description, BattlePokemon pkm) : AbstractEffect(chance, description){this->pkm = pkm;}
// UPDATE THE CLASS DIAGRAM
};

#endif // ABSTRACTEFFECTONPKM_H
