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
};

const Gender Gender::MALE = Gender("Male", NULL);
const Gender Gender::FEMALE = Gender("Female", NULL);
const Gender Gender::NONE = Gender("None", NULL);

#endif // GENDER_H
