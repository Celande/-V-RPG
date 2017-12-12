#ifndef STAT_H
#define STAT_H

#include "source/enumeration/stat.h"
#include "source/enumeration/statstage.h"

#include <map>

// namespace doesn't work on Qt

class Stat
{
private:
    std::multimap<enumeration::Stat, StatStage, int> statMap;
protected:
    int maxValue;
    int minValue;
public:
    Stat();
    Stat(int hp, int atk, int def, int spe_atk, int spe_def, int spe);
    Stat(int atk, int def, int spe_atk, int spe_def, int spe);
    std::multimap<enumeration::Stat, StatStage, int> getStatMap();
    void setStatMap(std::multimap<enumeration::Stat,StatStage,int> statMap);
    int getMaxValue();
    int getMinValue();
};
#endif // STAT_H
