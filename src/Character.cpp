#include "Character.h"
std::string Gamecharacter::Character::getName(){
    return this->name;
}
int Gamecharacter::Character::getHealth(){
    return this->health;
}
int Gamecharacter::Character::getLifeReg(){
    return this->lifeReg;
}
int Gamecharacter::Character::getMana(){
    return this->mana;
}
int Gamecharacter::Character::getManaReg(){
    return this->manaReg;
}

int Gamecharacter::Character::getLevel(){
    return this->level;
}
int Gamecharacter::Character::getStamina(){
    return this->stamina;
}

int Gamecharacter::Character::getMagicDmg(){
    return this->magicDmg;
}
int Gamecharacter::Character::getPhysDmg(){
    return this->physDmg;
}
int Gamecharacter::Character::getArmor(){
    return this->armor;
}
void Gamecharacter::Character::setHealth(int inHealth){
    health = inHealth;
}
void Gamecharacter::Character::setLifeReg(int inLifeReg){
    lifeReg = inLifeReg;
}
void Gamecharacter::Character::setMana(int inMana){
    mana = inMana;
}
void Gamecharacter::Character::setManaReg(int inManaReg){
    manaReg = inManaReg;
}
void Gamecharacter::Character::setLevel(int inLevel){
    level = inLevel;
}
void Gamecharacter::Character::setStamina(int inStamina){
    stamina = inStamina;
}
void Gamecharacter::Character::setMagicDmg(int inMagicDmg){
    magicDmg = inMagicDmg;
}
void Gamecharacter::Character::setPhysDmg(int inPhysDmg){
    physDmg = inPhysDmg;
}
void Gamecharacter::Character::setArmor(int inSetArmor){
    armor = inSetArmor;
}

