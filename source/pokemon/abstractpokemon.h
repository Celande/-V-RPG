#ifndef ABSTRACTPOKEMON_H
#define ABSTRACTPOKEMON_H

#include "../enumeration/type.h"
#include "../stat/stat.h"
#include "../stat/hiddenstat.h"

class AbstractPokemon
{
protected:
    int id;
    double weight;
    std::string name;
    Type types[2] = {Type::NORMAL, Type::NONE};
    Stat baseStat;
    HiddenStat hiddenStat;


public:
    AbstractPokemon();
};

#endif // ABSTRACTPOKEMON_H
