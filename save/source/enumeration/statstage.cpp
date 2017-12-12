#include "statstage.h"


const StatStage StatStage::SIX = StatStage(6);
const StatStage StatStage::FIVE = StatStage(5);
const StatStage StatStage::FOUR = StatStage(4);
const StatStage StatStage::THREE = StatStage(3);
const StatStage StatStage::TWO = StatStage(2);
const StatStage StatStage::ONE = StatStage(1);
const StatStage StatStage::ZERO = StatStage(0);
const StatStage StatStage::M_ONE = StatStage(-1);
const StatStage StatStage::M_TWO = StatStage(-2);
const StatStage StatStage::M_THREE = StatStage(-3);
const StatStage StatStage::M_FOUR = StatStage(-4);
const StatStage StatStage::M_FIVE = StatStage(-5);
const StatStage StatStage::M_SIX = StatStage(-6);

ValuedEnum StatStage::getEnum(int v){
    switch (v){
    case 6:
        return SIX;
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
    }

    return VALUE_NULL;
}
