#include "nature.h"

using namespace std;

Nature::Nature(const ::std::string name, Stat* stat) : NamedEnum(name){
    this->stat = *stat;
}

/*Percent stats added according to base stat : HP     ATK      DEF      SPE_ATK  SPE_DEF  SPE*/
const Nature Nature::HARDY      = Nature("Hardy",       new Stat(0,     0,       0,       0,       0,       0));
const Nature Nature::LONELY     = Nature("Lonely",      new Stat(0,     10 ,     -10 ,    0,       0,       0));
const Nature Nature::BRAVE      = Nature("Brave",       new Stat(0,     10 ,     0,       0,       0,       -10 ));
const Nature Nature::ADAMANT    = Nature("Adamant",     new Stat(0,     10 ,     0,       -10 ,    0,       0));
const Nature Nature::NAUGHTY    = Nature("Naughty",     new Stat(0,     10 ,     0,       0,       -10 ,    0));
const Nature Nature::BOLD       = Nature("Bold",        new Stat(0,     -10 ,    10 ,     0,       0,       0));
const Nature Nature::DOCILE     = Nature("Docile",      new Stat(0,     0,       0,       0,       0,       0));
const Nature Nature::RELAX      = Nature("Relax",       new Stat(0,     0,       10 ,     0,       0,       -10 ));
const Nature Nature::IMPISH     = Nature("Impish",      new Stat(0,     0,       10 ,     -10 ,    0,       0));
const Nature Nature::LAX        = Nature("Lax",         new Stat(0,     0,       10 ,     0,       -10 ,    0));
const Nature Nature::TIMID      = Nature("Timid",       new Stat(0,     -10 ,    0,       0,       0,       10 ));
const Nature Nature::HASTY      = Nature("Hasty",       new Stat(0,     0,       -10 ,    0,       0,       10 ));
const Nature Nature::SERIOUS    = Nature("Serious",     new Stat(0,     0,       0,       0,       0,       0));
const Nature Nature::JOLLY      = Nature("Jolly",       new Stat(0,     0,       0,       -10 ,    0,       10 ));
const Nature Nature::NAIVE      = Nature("Naive",       new Stat(0,     0,       0,       0,       -10 ,    10 ));
const Nature Nature::MODEST     = Nature("Modest",      new Stat(0,     -10 ,    0,       10 ,     0,       0));
const Nature Nature::MILD       = Nature("Mild",        new Stat(0,     0,       -10 ,    10 ,     0,       0));
const Nature Nature::QUIET      = Nature("Quiet",       new Stat(0,     0,       0,       10 ,     0,       -10 ));
const Nature Nature::BASHFUL    = Nature("Bashful",     new Stat(0,     0,       0,       0,       0,       0));
const Nature Nature::RASH       = Nature("Rash",        new Stat(0,     0,       0,       10 ,     -10 ,    0));
const Nature Nature::CALM       = Nature("Calm",        new Stat(0,     -10 ,    0,       0,       10 ,     0));
const Nature Nature::GENTLE     = Nature("Gentle",      new Stat(0,     0,       -10 ,    0,       10 ,     0));
const Nature Nature::SASSY      = Nature("Sassy",       new Stat(0,     0,       0,       0,       10 ,     -10 ));
const Nature Nature::CAREFUL    = Nature("Careful",     new Stat(0,     0,       0,       -10 ,    10 ,     0));
const Nature Nature::QUIRKY     = Nature("Quirky",      new Stat(0,     0,       0,       0,       0,       0));
