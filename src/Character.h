#pragma once
#include "iostream"

namespace Gamecharacter {

    class Character {
    protected:
        std::string name = "";
        int health=0;
        int lifeReg=0;

        int mana=0;
        int manaReg=0;

        int level=0;
        int stamina=0;

        int magicDmg=0;
        int physDmg=0;
        int armor=0;
    public:
        std::string getName();
        int getHealth();
        int getLifeReg();

        int getMana();
        int getManaReg();

        int getLevel();
        int getStamina();

        int getMagicDmg();
        int getPhysDmg();
        int getArmor();

        void setHealth(int);
        void setLifeReg(int);

        void setMana(int);
        void setManaReg(int);

        void setLevel(int);
        void setStamina(int);

        void setMagicDmg(int);
        void setPhysDmg(int);
        void setArmor(int);

        virtual bool isAlive() = 0;
        virtual int attack() = 0;
    };


}

