#pragma once
#include "Character.h"
#include "PlayableChar.h"
#include "Character.h"

class Warrior: public PlayableChar {

public:

int attack() override;
bool isAlive() override;

void setStats() override;
void setAttributes() override;


Warrior(int inLvl){
    this->level = inLvl;
};
};



