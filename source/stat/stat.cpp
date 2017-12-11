#include "stat.h"

Stat::Stat()
{

}

Stat::Stat(int atk, int def, int spe_atk, int spe_def, int spe){
    //this->hp = 0;
}

Stat::Stat(int hp, int atk, int def, int spe_atk, int spe_def, int spe)
    : Stat(atk, def, spe_atk, spe_def, spe) {
    //this->hp = hp;
}
