#ifndef STAT_H
#define STAT_H

#include"namedenum.h"

namespace enumeration {
    class Stat : public NamedEnum{
    public:
        static const Stat HP;
        static const Stat ATK;
        static const Stat DEF;
        static const Stat SPE_ATK;
        static const Stat SPE_DEF;
        static const Stat SPE;

    private:
        Stat(std::string name) : NamedEnum(name){}
    };

    const Stat Stat::HP = Stat("Health point");
    const Stat Stat::ATK = Stat("Attack");
    const Stat Stat::DEF = Stat("Defense");
    const Stat Stat::SPE_ATK = Stat("Special attack");
    const Stat Stat::SPE_DEF = Stat("Special defense");
    const Stat Stat::SPE = Stat("Speed");
}

#endif // STAT_H
