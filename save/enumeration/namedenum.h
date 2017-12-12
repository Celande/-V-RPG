#ifndef NAMEDENUM_H
#define NAMEDENUM_H

#include<iostream>
#include<string>


class NamedEnum
{
protected:
    std::string name;
public:
    NamedEnum(const std::__cxx11::string name);
    std::string getName();
    std::string toString(){return this->name;}
};

#endif // NAMEDENUM_H
