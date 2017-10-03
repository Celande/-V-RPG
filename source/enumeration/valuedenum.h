#ifndef VALUEDENUM_H
#define VALUEDENUM_H

#include<iostream>
#include<string>
#include<typeinfo>

class ValuedEnum
{
protected:
    int value;

    virtual ValuedEnum getEnum(int v){return NULL;}
public:
    ValuedEnum(int value);
    int getValue();

    bool operator< (const ValuedEnum& v);
    bool operator> (const ValuedEnum& v);
    bool operator== (const ValuedEnum& v);

    ValuedEnum operator+ (const ValuedEnum& v);
    ValuedEnum operator- (const ValuedEnum& v);
};

#endif // VALUEDENUM_H
