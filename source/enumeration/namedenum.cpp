#include "namedenum.h"

using namespace std;

NamedEnum::NamedEnum(std::string name)
{
    this->name = name;
}

std::string NamedEnum::getName(){
    return this->name;
}
