#pragma once
#include <string>
#include "player.h"

class Enemy {
    std::string name;
    int damage;
    void attack() {
        p1.Damage(damage);
    }
    Enemy(std::string n, int d) {
        name = n;
        damage = d;
    }
};