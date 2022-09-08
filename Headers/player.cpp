#include <iostream>
#include "player.h"
using namespace std;

int main(void) {
    Player n1(100, 4);
    n1.Damage(5);
    cout << n1.CurrentHP << endl;
    n1.Damage(103);
    cout << n1.CurrentHP << endl;
    n1.Damage(100);
    cout << n1.CurrentHP << endl;

    cout << endl;

    n1.Heal(20);
    cout << n1.CurrentHP << endl;
    n1.Heal(150);
    cout << n1.CurrentHP << endl;

    cout << endl;

    Player n2(1000, 10);
    n2.Damage(300);
    cout << n2.CurrentHP << endl;
    n2.Heal(50);
    cout << n2.CurrentHP << endl;
}