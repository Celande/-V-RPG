#include "source/enumeration/hiddenstat.h"

namespace enumeration {
HiddenStat::HiddenStat() {}
HiddenStat::HiddenStat(const std::string name) : NamedEnum(name){}

const HiddenStat HiddenStat::EVASION = HiddenStat("Evasion");
const HiddenStat HiddenStat::ACCURACY = HiddenStat("Accuracy");
}
