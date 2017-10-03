#include "valuedenum.h"

ValuedEnum::ValuedEnum(int value)
{
    this->value = value;
}

int ValuedEnum::getValue(){
    return this->value;
}

bool ValuedEnum::operator< (const ValuedEnum& v){
    if(typeid(this).name() == typeid(v).name())
        return this->value < v.value;
    return false;
}

bool ValuedEnum::operator> (const ValuedEnum& v){
    if(typeid(this).name() == typeid(v).name())
        return this->value > v.value;
    return false;
}

bool ValuedEnum::operator== (const ValuedEnum& v){
    if(typeid(this).name() == typeid(v).name())
        return this->value == v.value;
    return false;
}

ValuedEnum ValuedEnum::operator+ (const ValuedEnum& v){
    if(typeid(this).name() == typeid(v).name()){
        int n = this->value + v.value;
        return getEnum(n);
    }
    return NULL;
}

ValuedEnum ValuedEnum::operator- (const ValuedEnum& v){
    if(typeid(this).name() == typeid(v).name()){
        int n = this->value - v.value;
        return getEnum(n);
    }
    return NULL;
}
