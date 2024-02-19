#pragma once
#include "NonPlayableCharacter.h"

class Orc: public NonPlayableCharacter{

public:
    void setStats() override;
    bool isAlive() override;
    int attack() override;

    Orc(int inLvL) {
        this->level = inLvL;

    }
};



