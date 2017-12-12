#include "category.h"

Category::Category(std::string name, Image symbol) : SymboledEnum(name, symbol){}
Category::Category(std::string name) : SymboledEnum(name){}

const Category Category::PHYSICAL = Category("Physical");
const Category Category::SPECIAL = Category("Special");
const Category Category::STATUS = Category("Status");
