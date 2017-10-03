#include "symboledenum.h"

using namespace std;

SymboledEnum::SymboledEnum(std::string name, Image symbol) : NamedEnum(name)
{
    //this->name = name;
    this->symbol = symbol;
}

Image SymboledEnum::getSymbol(){
    return this->symbol;
}
