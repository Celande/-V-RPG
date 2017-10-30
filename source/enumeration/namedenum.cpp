#include "namedenum.h"

using namespace std;

NamedEnum::NamedEnum(const ::std::string name)
{
    this->name = name;
}

std::string NamedEnum::getName(){
    return this->name;
}
