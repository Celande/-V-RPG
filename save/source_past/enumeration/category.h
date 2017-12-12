#ifndef CATEGORY_H
#define CATEGORY_H

#include"symboledenum.h"

class Category : public SymboledEnum{
public:
    static const Category PHYSICAL;
    static const Category SPECIAL;

private:
    Category(std::name, Image symbol) : SymboledEnum(name, symbol){}
};

const Category Category::PHYSICAL = Category("Physical", NULL);
const Category Category::SPECIAL = Category("Special", NULL);

#endif // CATEGORY_H
