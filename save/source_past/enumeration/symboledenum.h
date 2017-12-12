#ifndef SYMBOLEDENUM_H
#define SYMBOLEDENUM_H

#include"image.h"
#include"namedenum.h"

class SymboledEnum : public NamedEnum
{
    // CREATE A CACHE WITH : A HASHMAP ?
protected:
    Image symbol;
public:
    SymboledEnum(std::string name);
    SymboledEnum(std::string name, Image symbol);
    Image getSymbol();
};

#endif // SYMBOLEDENUM_H
