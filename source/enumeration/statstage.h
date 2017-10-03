#ifndef STATSTAGE_H
#define STATSTAGE_H

#include"valuedenum.h"

class StatStage : public ValuedEnum{
public:
    static const StatStage STAGE_SIX;
    static const StatStage STAGE_FIVE;
    static const StatStage STAGE_FOUR;
    static const StatStage STAGE_THREE;
    static const StatStage STAGE_TWO;
    static const StatStage STAGE_ONE;
    static const StatStage STAGE_ZERO;
    static const StatStage STAGE_M_ONE;
    static const StatStage STAGE_M_TWO;
    static const StatStage STAGE_M_THREE;
    static const StatStage STAGE_M_FOUR;
    static const StatStage STAGE_M_FIVE;
    static const StatStage STAGE_M_SIX;

private:
    StatStage(int value) : ValuedEnum(value){}
    StatStage getEnum(int v){
        if(v==6)
            return STAGE_SIX;
        if(v==5)
            return STAGE_FIVE;
        if(v==4)
            return STAGE_FOUR;
        if(v==3)
            return STAGE_THREE;
        if(v==2)
            return STAGE_TWO;
        if(v==1)
            return STAGE_ONE;
        if(v==0)
            return STAGE_ZERO;
        if(v==-1)
            return STAGE_M_ONE;
        if(v==-2)
            return STAGE_M_TWO;
        if(v==-3)
            return STAGE_M_THREE;
        if(v==-4)
            return STAGE_M_FOUR;
        if(v==-5)
            return STAGE_M_FIVE;
        if(v==-6)
            return STAGE_M_SIX;
        return NULL;
    }
};

const StatStage StatStage::STAGE_SIX = StatStage(6);
const StatStage StatStage::STAGE_FIVE = StatStage(5);
const StatStage StatStage::STAGE_FOUR = StatStage(4);
const StatStage StatStage::STAGE_THREE = StatStage(3);
const StatStage StatStage::STAGE_TWO = StatStage(2);
const StatStage StatStage::STAGE_ONE = StatStage(1);
const StatStage StatStage::STAGE_ZERO = StatStage(0);
const StatStage StatStage::STAGE_M_ONE = StatStage(-1);
const StatStage StatStage::STAGE_M_TWO = StatStage(-2);
const StatStage StatStage::STAGE_M_THREE = StatStage(-3);
const StatStage StatStage::STAGE_M_FOUR = StatStage(-4);
const StatStage StatStage::STAGE_M_FIVE = StatStage(-5);
const StatStage StatStage::STAGE_M_SIX = StatStage(-6);

#endif // STATSTAGE_H
