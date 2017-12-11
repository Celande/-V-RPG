#include "symboledenum.h"

using namespace std;

SymboledEnum::SymboledEnum(){}

SymboledEnum::SymboledEnum(const string name, Image symbol) : NamedEnum(name)
{
    this->symbol = symbol;
}

SymboledEnum::SymboledEnum(const string name) : NamedEnum(name)
{
    //this->symbol = NULL;
}

Image SymboledEnum::getSymbol(){
    return this->symbol;
}
