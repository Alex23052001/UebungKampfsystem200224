#pragma once
#include <cstdlib>
#include "raylib.h"
#include "iostream"
#include "config.h"
#include "Character.h"
#include "NonPlayableCharacter.h"
#include "Orc.h"
#include "Warrior.h"

int main() {
    Warrior Frodo(9);
    Orc Groschnak(8);
    Warrior Olaf(10);


    Frodo.setAttributes();
    Frodo.setStats();
    Groschnak.setStats();


    while(Frodo.isAlive() && Groschnak.isAlive()) {
      Groschnak.setHealth(Groschnak.getHealth() - (Frodo.attack() + Olaf.attack()));
      Frodo.setHealth(Frodo.getHealth() - Groschnak.attack());
    }

    return EXIT_SUCCESS;
}
