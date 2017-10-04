#include "abstracteffect.h"

AbstractEffect::AbstractEffect(int chance, std::string description, int nbTurn)
{
    this->chance = chance;
    this->description = description;
    this->nbTurn = nbTurn;
}

AbstractEffect::AbstractEffect(int chance, std::string description) : AbstractEffect(chance, description, -1){}

int AbstractEffect::getChance(){
    return this->chance;
}

std::string AbstractEffect::getDescription(){
    return this->description;
}

int AbstractEffect::getNbTurn(){
    return this->nbTurn;
}

void AbstractEffect::setNbTurn(int n){
    this->nbTurn = n;
}
