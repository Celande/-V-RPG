#ifndef STAT_HIDDENSTAT_H
#define STAT_HIDDENSTAT_H

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
    HiddenStat(std::multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap);
    std::multimap<enumeration::HiddenStat, StatStage, int> getHiddenStatMap();
    void setHiddenStatMap(std::multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap);
    int getMaxValue();
    int getMinValue();
};

#endif // STAT_HIDDENSTAT_H
