#pragma once
#include <string>
#include "player.h"

class Enemy {
    public:
    std::string name;
    int damage;
    void attack(Player p1) {
        p1.Damage(damage);
    }
    Enemy(std::string n, int d) {
        name = n;
        damage = d;
    }
};