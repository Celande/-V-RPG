#ifndef ABSTRACTSTATUS_H
#define ABSTRACTSTATUS_H

#include <iostream>
#include <string>
#include "source/enumeration/image.h"

class AbstractStatus
{
public:
    AbstractStatus();
    void passTurn();
protected:
	std::string name;
	Image symbol;
    //effectOnStat statEffect
};

#endif // ABSTRACTSTATUS_H
