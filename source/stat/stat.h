#ifndef STAT_H
#define STAT_H

class Stat
{ 
protected:
	int maxValue;
	int minValue;
	std::multimap<enumeration::Stat, StatStage, int> statMap;
public:
    Stat();
    Stat(int hp, int atk, int def, int spe_atk, int spe_def, int spe);
    //Stat(int hp, int atk, int def, int spe_atk, int spe_def, int spe);
    std::multimap<enumeration::Stat, StatStage, int> getStatMap();
    void setStatMap(std::multimap<enumeration::Stat,StatStage,int> statMap);
    int getMaxValue();
    int getMinValue();
};
#endif // STAT_H
