#ifndef TYPE_H
#define TYPE_H

#include"symboledenum.h"

using namespace std;

class Type : public SymboledEnum{
public:
    Type();
    Type(const ::std::string name, Image symbol);
    Type(const ::std::string name);
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

    static const Type NONE;
};

#endif // TYPE_H
