#include "Warrior.h"

void Warrior::setStats(){
    this->name = "Warrior";
    this->health += this->endurance*10;
    this->lifeReg += this->endurance;

    this->mana = this->intelligence;
    this->manaReg = this->intelligence;

    this->stamina = this->vigor;

    this->magicDmg = this->intelligence;
    this->physDmg = this->strength;
    this->armor = this->endurance;
}
void Warrior::setAttributes(){
    this->strength =  (this->level)*3;
    this->intelligence =  this->level;
    this->endurance = (this->level)*2;
    this->vigor =  this->level;
}
int Warrior::attack(){
    std::cout<<"Warrior swings his sword"<<std::endl;
    return physDmg;
}
bool Warrior::isAlive(){
    if(this->health <= 0){
        std::cout<<"Warrior is dead."<<std::endl;
        return false;
    }
    return true;
}


