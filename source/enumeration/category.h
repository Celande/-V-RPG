#ifndef CATEGORY_H
#define CATEGORY_H

#include"symboledenum.h"

class Category : public SymboledEnum{
public:
    static const Category PHYSICAL;
    static const Category SPECIAL;
    static const Category STATUS;

private:
    Category(std::string name, Image symbol);
    Category(std::string name);
};

#endif // CATEGORY_H
