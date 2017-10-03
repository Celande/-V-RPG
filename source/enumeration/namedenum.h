#ifndef NAMEDENUM_H
#define NAMEDENUM_H

#include<iostream>
#include<string>


class NamedEnum
{
protected:
    std::string name;
public:
    NamedEnum(std::string name);
    std::string getName();
};

#endif // NAMEDENUM_H
