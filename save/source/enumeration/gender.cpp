#include "gender.h"

Gender::Gender(std::string name, Image symbol) : SymboledEnum(name, symbol) {}
Gender::Gender(std::string name) : SymboledEnum(name) {}

const Gender Gender::MALE = Gender("Male");
const Gender Gender::FEMALE = Gender("Female");
const Gender Gender::NONE = Gender("None");
