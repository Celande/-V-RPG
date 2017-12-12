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
    Priority(int value) : ValuedEnum(value){}
    Priority getEnum(int v){
        if(n == 5)
            return FIVE;
        if(n==4)
            return FOUR;
        if(n==3)
            return THREE;
        if(n==2)
            return TWO;
        if(n==1)
            return ONE;
        if(n==0)
            return ZERO;
        if(n==-1)
            return M_ONE;
        if(n==-2)
            return M_TWO;
        if(n==-3)
            return M_THREE;
        if(n==-4)
            return M_FOUR;
        if(n==-5)
            return M_FIVE;
        if(n==-6)
            return M_SIX;
        if(n==-7)
            return M_SEVEN;

        return NULL;
    }
};

const Priority Priority::FIVE = Priority(5);
const Priority Priority::FOUR = Priority(4);
const Priority Priority::THREE = Priority(3);
const Priority Priority::TWO = Priority(2);
const Priority Priority::ONE = Priority(1);
const Priority Priority::ZERO = Priority(0);
const Priority Priority::M_ONE = Priority(-1);
const Priority Priority::M_TWO = Priority(-2);
const Priority Priority::M_THREE = Priority(-3);
const Priority Priority::M_FOUR = Priority(-4);
const Priority Priority::M_FIVE = Priority(-5);
const Priority Priority::M_SIX = Priority(-6);
const Priority Priority::M_SEVEN = Priority(-7);

#endif // PRIORITY_H
