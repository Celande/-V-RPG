#ifndef MOVE_H
#define MOVE_H

#include "source/enumeration/type.h"
#include "source/enumeration/category.h"
#include "source/effect/pokemon/abstracteffectonpkm.h"
#include "source/effect/battlefield/abstracteffectonbattlefield.h"

#include <list>

class Move
{
private:
    static unsigned int lastId;
    unsigned int id; // ct
    std::string name;
    Type type[2];
    Category category = Category::STATUS;
    unsigned int maxPP;
    unsigned int currentPP;
    unsigned int baseAccuracy;
    unsigned int currentAccuracy;
    unsigned int basePower;
    unsigned int currentPower;
    bool contact;
    std::list<AbstractEffectOnPkm> effectsOnMe;
    std::list<AbstractEffectOnPkm> effectsOnFoe;
    std::list<AbstractEffectOnBattlefield> effectsOnField;
public:
    Move();

    Move(std::string name, Type type[], Category category,
         unsigned int maxPP, unsigned int baseAccuracy);

    Move(std::string name, Type type[], Category category,
         unsigned int maxPP, unsigned int baseAccuracy,
         unsigned int basePower, bool contact);

    Move(std::string name, Type type[], Category category,
         unsigned int maxPP, unsigned int baseAccuracy,
         unsigned int basePower, bool contact,
         std::list<AbstractEffectOnPkm> effectsOnMe,
         std::list<AbstractEffectOnPkm> effectsOnFoe,
         std::list<AbstractEffectOnBattlefield> effectsOnField);
};

#endif // MOVE_H
