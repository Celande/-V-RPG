#include "hiddenstat.h"

HiddenStat::HiddenStat()
{

}

HiddenStat::HiddenStat(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap)
{
	this->hiddenStatMap = hiddenStatMap;
}


 int getMaxValue()
 {
 	return this->maxValue;
 }

 int getMinValue()
 {
 	return this->minValue;
 }

 void setHiddenStatMap(Multimap<enumeration::HiddenStat, StatStage, int> hiddenStatMap)
 {
 	this->hiddenStatMap = hiddenStatMap;
 }

 std::multimap<enumeration::HiddenStat, StatStage, int> getHiddenStatMap()
 {
 	return this->hiddenStatMap;
 }