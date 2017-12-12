#ifndef PRIORITY_H
#define PRIORITY_H

#include "valuedenum.h"

class Priority : public ValuedEnum{
public:
    static const Priority FIVE;
    static const Priority FOUR;
    static const Priority THREE;
    static const Priority TWO;
    static const Priority ONE;
    static const Priority ZERO;
    static const Priority M_ONE;
    static const Priority M_TWO;
    static const Priority M_THREE;
    static const Priority M_FOUR;
    static const Priority M_FIVE;
    static const Priority M_SIX;
    static const Priority M_SEVEN;

private:
    Priority(int value);
public:
    virtual ValuedEnum getEnum(int v) override;
};

#endif // PRIORITY_H
