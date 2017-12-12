#include "symboledenum.h"

using namespace std;

SymboledEnum::SymboledEnum(std::string name, Image symbol) : NamedEnum(name)
{
    this->symbol = symbol;
}

SymboledEnum::SymboledEnum(std::string name) : NamedEnum(name)
{
    //this->symbol = NULL;
}

Image SymboledEnum::getSymbol(){
    return this->symbol;
}
