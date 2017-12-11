#ifndef STATSTAGE_H
#define STATSTAGE_H

#include"valuedenum.h"

class StatStage : public ValuedEnum{
public:
    static const StatStage SIX;
    static const StatStage FIVE;
    static const StatStage FOUR;
    static const StatStage THREE;
    static const StatStage TWO;
    static const StatStage ONE;
    static const StatStage ZERO;
    static const StatStage M_ONE;
    static const StatStage M_TWO;
    static const StatStage M_THREE;
    static const StatStage M_FOUR;
    static const StatStage M_FIVE;
    static const StatStage M_SIX;

private:
    StatStage(int value) : ValuedEnum(value){}
public:
    virtual ValuedEnum getEnum(int v) override;
};

#endif // STATSTAGE_H
