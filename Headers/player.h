#pragma once

class Player {
    public:
    int MaxHP;
    int CurrentHP;
    int Shield;
    void Damage(int damage) {
        CurrentHP -= (damage - Shield);
        if(CurrentHP < 0) {
            CurrentHP = 0;
        }
    }
    void Heal(int hp) {
        CurrentHP += hp;
        if(CurrentHP > MaxHP){
            CurrentHP = MaxHP;
        }
    }
    Player(int MHP, int SH) {
        MaxHP = MHP;
        Shield = SH;
        CurrentHP = MaxHP;
    }
};