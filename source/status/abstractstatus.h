#ifndef ABSTRACTSTATUS_H
#define ABSTRACTSTATUS_H


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