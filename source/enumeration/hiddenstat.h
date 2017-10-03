#ifndef HIDDENSTAT_H
#define HIDDENSTAT_H

#include"namedenum.h"

namespace enumeration {
    class HiddenStat : public NamedEnum{
    public:
        static const HiddenStat EVASION;
        static const HiddenStat ACCURACY;

    private:
        HiddenStat(std::string name) : NamedEnum(name){}
    };

    const HiddenStat HiddenStat::EVASION = Stat("Evasion");
    const HiddenStat HiddenStat::ACCURACY = Stat("Accuracy");
}

#endif // HIDDENSTAT_H
