#ifndef GENDER_H
#define GENDER_H

#include"symboledenum.h"

class Gender : public SymboledEnum
{
public:
    static const Gender MALE;
    static const Gender FEMALE;
    static const Gender NONE;

private:
    Gender(std::string name, Image symbol);
    Gender(std::string name);
};

#endif // GENDER_H
