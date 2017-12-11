#include "move.h"

unsigned int Move::lastId = 0;

Move::Move()
{

}

Move::Move(std::string name, Type type[], Category category,
     unsigned int maxPP, unsigned int baseAccuracy,
     unsigned int basePower, bool contact){
    lastId++;
    this->id = lastId;
    this->name = name;
    this->type[0] = type[0];
    this->type[1] = type[1];
    this->category = category;
    this->maxPP = maxPP;
    this->currentPP = maxPP;
    this->baseAccuracy = baseAccuracy;
    this->currentAccuracy = baseAccuracy;
    this->basePower = basePower;
    this->currentPower = basePower;
    this->contact = contact;
}

Move::Move(std::string name, Type type[], Category category,
     unsigned int maxPP, unsigned int baseAccuracy,
     unsigned int basePower, bool contact,
     std::list<AbstractEffectOnPkm> effectsOnMe,
     std::list<AbstractEffectOnPkm> effectsOnFoe,
     std::list<AbstractEffectOnBattlefield> effectsOnField)
    : Move(name, type, category,
           maxPP, baseAccuracy,
           basePower, contact){
    this->effectsOnMe = effectsOnMe;
    this->effectsOnFoe = effectsOnFoe;
    this->effectsOnField = effectsOnField;
}
