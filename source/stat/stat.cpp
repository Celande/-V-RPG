#include "stat.h"

Stat::Stat()
{

}

Stat::Stat(int hp, int atk, int def, int spe_atk, int spe_def, int spe){

}

 int getMaxValue()
 {
 	return this->maxValue;
 }

 int getMinValue()
 {
 	return this->minValue;
 }

 void setStatMap(std::multimap<enumeration::Stat,StatStage,int> statMap)
 {
 	this->statMap=statMap;
 }

 std::multimap<enumeration::Stat, StatStage, int> getStatMap()
 {
 	return this->statMap;
 }