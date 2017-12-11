#include "source/pokemon/move.h"

std::list<AbstractEffectOnPkm> createEffectsOnPkm(){
    std::list<AbstractEffectOnPkm> effectsOnPkm;

    return effectsOnPkm;
}

std::list<AbstractEffectOnBattlefield> createEffectsOnField(){
    std::list<AbstractEffectOnBattlefield> effectsOnField;

    return effectsOnField;
}

Move createMove(){
    std::string name;
    Type type[2] = {Type::NORMAL, Type::NONE};
    Category category = Category::STATUS;
    unsigned int maxPP = 0;
    unsigned int baseAccuracy = 0;
    unsigned int basePower = 0;
    bool contact = false;

    bool effect = false;

    if(effect){
        std::list<AbstractEffectOnPkm> effectsOnMe = createEffectsOnPkm();
        std::list<AbstractEffectOnPkm> effectsOnFoe = createEffectsOnPkm();
        std::list<AbstractEffectOnBattlefield> effectsOnField = createEffectsOnField();

        return Move(name, type, category,
                    maxPP, baseAccuracy,
                    basePower, contact,
                    effectsOnMe,
                    effectsOnFoe,
                    effectsOnField);
    }

    return Move(name, type, category,
                maxPP, baseAccuracy,
                basePower, contact);
}

void addMove(){
    Move move = createMove();
}
