#include "hiddenstat.h"

HiddenStat::HiddenStat(){}

HiddenStat::HiddenStat(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap)
{
    this->hiddenStatMap = hiddenStatMap;
}


int HiddenStat::getMaxValue()
{
    return this->maxValue;
}

int HiddenStat::getMinValue()
{
    return this->minValue;
}

void HiddenStat::setHiddenStatMap(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap)
{
    this->hiddenStatMap = hiddenStatMap;
}

std::multimap<enumeration::HiddenStat, StatStage, int> HiddenStat::getHiddenStatMap()
{
    return this->hiddenStatMap;
}
