#ifndef ENUMERATION_STAT_H
#define ENUMERATION_STAT_H

#include"namedenum.h"

// can't create enum with name+value+statstage because of const

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
        Stat();
        Stat(std::string name);
    };
}

#endif // ENUMERATION_STAT_H
