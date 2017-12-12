#include "priority.h"

Priority::Priority(int value) : ValuedEnum(value){}

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

ValuedEnum Priority::getEnum(int v){
    switch (v){
    case 5:
        return FIVE;
    case 4:
        return FOUR;
    case 3:
        return THREE;
    case 2:
        return TWO;
    case 1:
        return ONE;
    case 0:
        return ZERO;
    case -1:
        return M_ONE;
    case -2:
        return M_TWO;
    case -3:
        return M_THREE;
    case -4:
        return M_FOUR;
    case -5:
        return M_FIVE;
    case -6:
        return M_SIX;
    case -7:
        return M_SEVEN;
    }

    return VALUE_NULL;
}
