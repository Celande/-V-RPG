#include "hiddenstat.h"

<<<<<<< HEAD
HiddenStat::HiddenStat(){}
=======
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
>>>>>>> b5f9819a7fc9e3bc5c4f81cc2ce07e45b1a1932e
