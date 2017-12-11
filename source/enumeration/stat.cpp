#include "stat.h"

using namespace enumeration;

const Stat Stat::HP = Stat("Health point");
const Stat Stat::ATK = Stat("Attack");
const Stat Stat::DEF = Stat("Defense");
const Stat Stat::SPE_ATK = Stat("Special attack");
const Stat Stat::SPE_DEF = Stat("Special defense");
const Stat Stat::SPE = Stat("Speed");

Stat::Stat(){}
Stat::Stat(std::string name) : NamedEnum(name){}
