#ifndef TYPE_H
#define TYPE_H

#include"symboledenum.h"

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

const Category Category::NORMAL = Category("Normal", NULL);
const Category Category::FIGHT = Category("Fight", NULL);
const Category Category::FLYING = Category("Flying", NULL);
const Category Category::POISON = Category("Poison", NULL);
const Category Category::GROUND = Category("Ground", NULL);
const Category Category::ROCK = Category("Rock", NULL);
const Category Category::BUG = Category("Bug", NULL);
const Category Category::GHOST = Category("Ghost", NULL);
const Category Category::STEEL = Category("Steel", NULL);
const Category Category::FIRE = Category("Fire", NULL);
const Category Category::WATER = Category("Water", NULL);
const Category Category::GRASS = Category("Grass", NULL);
const Category Category::ELECTR = Category("Electric", NULL);
const Category Category::PSYCHIC = Category("Psychic", NULL);
const Category Category::ICE = Category("Ice", NULL);
const Category Category::DRAGON = Category("Dragon", NULL);
const Category Category::DARK = Category("Dark", NULL);
const Category Category::FAIRY = Category("Fairy", NULL);

#endif // TYPE_H
