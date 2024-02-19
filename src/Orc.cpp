#include "Orc.h"

void Orc::setStats() {
    this->name = "Orc";
    this->magicDmg += this->level*1;
    this->physDmg += this->level*3;
    this->armor += this->level*2;
    this->health += this->level*2*10;
    this->stamina += this->level*1;
    this->mana += this->level;
}
int Orc::attack() {
    std::cout<<"Orc swings his Axe"<<std::endl;
    return physDmg;
};
bool Orc::isAlive() {
    if(this->health <= 0){
        std::cout<<"Orc is dead."<<std::endl;
        return false;
    }
    return true;
}