#pragma once
#include "Character.h"

class PlayableChar: public Gamecharacter::Character {
    protected:
    int strength;
    int intelligence;
    int endurance;
    int vigor;

    public:

    virtual void setStats() = 0;
    virtual void setAttributes() = 0;

};



