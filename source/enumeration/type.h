#ifndef TYPE_H
#define TYPE_H

#include"symboledenum.h"

using namespace std;

class Type : public SymboledEnum{
public:
    static const Type NORMAL;
    static const Type FIGHT;
    static const Type FLYING;
    static const Type POISON;
    static const Type GROUND;
    static const Type ROCK;
    static const Type BUG;
    static const Type GHOST;
    static const Type STEEL;
    static const Type FIRE;
    static const Type WATER;
    static const Type GRASS;
    static const Type ELECTR;
    static const Type PSYCHIC;
    static const Type ICE;
    static const Type DRAGON;
    static const Type DARK;
    static const Type FAIRY;

private:
    Type(std::string name, Image symbol) : SymboledEnum(name, symbol){}
};

const Type Type::NORMAL = Type("Normal", NULL);
const Type Type::FIGHT = Type("Fight", NULL);
const Type Type::FLYING = Type("Flying", NULL);
const Type Type::POISON = Type("Poison", NULL);
const Type Type::GROUND = Type("Ground", NULL);
const Type Type::ROCK = Type("Rock", NULL);
const Type Type::BUG = Type("Bug", NULL);
const Type Type::GHOST = Type("Ghost", NULL);
const Type Type::STEEL = Type("Steel", NULL);
const Type Type::FIRE = Type("Fire", NULL);
const Type Type::WATER = Type("Water", NULL);
const Type Type::GRASS = Type("Grass", NULL);
const Type Type::ELECTR = Type("Electric", NULL);
const Type Type::PSYCHIC = Type("Psychic", NULL);
const Type Type::ICE = Type("Ice", NULL);
const Type Type::DRAGON = Type("Dragon", NULL);
const Type Type::DARK = Type("Dark", NULL);
const Type Type::FAIRY = Type("Fairy", NULL);

#endif // TYPE_H
