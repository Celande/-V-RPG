#ifndef ENUMERATION_HIDDENSTAT_H
#define ENUMERATION_HIDDENSTAT_H

#include "namedenum.h"

namespace enumeration {
    class HiddenStat : public NamedEnum{
    public:
        static const HiddenStat EVASION;
        static const HiddenStat ACCURACY;

    private:
        HiddenStat();
        HiddenStat(const std::string name);
    };
}

#endif // ENUMERATION_HIDDENSTAT_H
