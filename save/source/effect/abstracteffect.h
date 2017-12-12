#ifndef ABSTRACTEFFECT_H
#define ABSTRACTEFFECT_H

#include<iostream>
#include<string>

class AbstractEffect
{
protected:
    int chance; // percent
    std::string description;
    int nbTurn; // really useful ? // if == -1 : eternal
public:
    AbstractEffect(int chance, std::string description, int nbTurn);
    AbstractEffect(int chance, std::string description);

    int getChance();
    std::string getDescription();
    int getNbTurn();

    void setNbTurn(int n);
};

#endif // ABSTRACTEFFECT_H
