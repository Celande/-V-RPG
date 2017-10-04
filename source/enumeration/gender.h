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
    Gender(std::string name, Image symbol) : SymboledEnum(name, symbol) {}
    Gender(std::string name) : SymboledEnum(name) {}
};

const Gender Gender::MALE = Gender("Male");
const Gender Gender::FEMALE = Gender("Female");
const Gender Gender::NONE = Gender("None");

#endif // GENDER_H
