#ifndef CATEGORY_H
#define CATEGORY_H

#include"symboledenum.h"

class Category : public SymboledEnum{
public:
    static const Category PHYSICAL;
    static const Category SPECIAL;
    static const Category STATUS;

private:
    Category(std::string name, Image symbol) : SymboledEnum(name, symbol){}
};

const Category Category::PHYSICAL = Category("Physical", NULL);
const Category Category::SPECIAL = Category("Special", NULL);
const Category Category::STATUS = Category("Status", NULL);

#endif // CATEGORY_H
