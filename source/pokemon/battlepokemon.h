#ifndef BATTLEPOKEMON_H
#define BATTLEPOKEMON_H

#include "abstractpokemon.h"
#include "../enumeration/gender.h"
#include "move.h"
#include "../stat/ev.h"
#include "../stat/iv.h"
#include "../enumeration/nature.h"
#include "../status/abstractstatus.h"

class BattlePokemon : public AbstractPokemon
{
private:
    std::string surname;
    unsigned int level;
    Gender gender;
    Move moveSet[4];
    Stat currentStat;
    EV ev;
    IV iv;
    Nature nature;
    AbstractStatus status;

public:
    BattlePokemon();
};

#endif // BATTLEPOKEMON_H
