#ifndef HIDDENSTAT_H
#define HIDDENSTAT_H

#include "source/enumeration/hiddenstat.h"
#include "source/enumeration/statstage.h"
#include <map>

class HiddenStat
{
private:
    std::multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap;
    int maxValue;
    int minValue;
public:
    HiddenStat();
    HiddenStat(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap);
    std::multimap<enumeration::HiddenStat, StatStage, int> getHiddenStatMap();
    void setHiddenStatMap(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap);
    int getMaxValue();
    int getMinValue();
};

#endif // HIDDENSTAT_H
