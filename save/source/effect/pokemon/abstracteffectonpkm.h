#ifndef ABSTRACTEFFECTONPKM_H
#define ABSTRACTEFFECTONPKM_H

#include "../abstracteffect.h"

class AbstractEffectOnPkm : public AbstractEffect{
public:
    AbstractEffectOnPkm(int chance, std::string description, int nbTurn) : AbstractEffect(chance, description, nbTurn){}
    AbstractEffectOnPkm(int chance, std::string description) : AbstractEffect(chance, description){}
// UPDATE THE CLASS DIAGRAM
};

#endif // ABSTRACTEFFECTONPKM_H
