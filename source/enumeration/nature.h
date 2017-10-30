#ifndef NATURE_H
#define NATURE_H

#include"namedenum.h"
#include "../stat/stat.h"

class Nature : public NamedEnum{

    Nature(const ::std::string name, Stat* stat) : NamedEnum(name){
        this->stat = *stat;
    }

public:
    static const Nature HARDY;
    static const Nature LONELY;
    static const Nature BRAVE;
    static const Nature ADAMANT;
    static const Nature NAUGHTY;
    static const Nature BOLD;
    static const Nature DOCILE;
    static const Nature RELAX;
    static const Nature IMPISH;
    static const Nature LAX;
    static const Nature TIMID;
    static const Nature HASTY;
    static const Nature SERIOUS;
    static const Nature JOLLY;
    static const Nature NAIVE;
    static const Nature MODEST;
    static const Nature MILD;
    static const Nature QUIET;
    static const Nature BASHFUL;
    static const Nature RASH;
    static const Nature CALM;
    static const Nature GENTLE;
    static const Nature SASSY;
    static const Nature CAREFUL;
    static const Nature QUIRKY;

private:
    Stat stat;

};

#endif // NATURE_H
