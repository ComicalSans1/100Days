#include <iostream>
#include <string>
using namespace std;

class Human {
    public:
    void lie() {
        cout << "i am human" << endl;
    }
};

class Idiot: public Human {
    public:
    void lie() {
        cout << "kqwdfiojqwdqw" << endl;
    }
};

class Pretentious: public Human {
    public:
    void lie() {
        cout << "i have never made fun of poor people" << endl;
    }
};

int main(void) {
    Human featherlessBiped;
    featherlessBiped.lie();

    Idiot chicken;
    chicken.lie();

    Pretentious you;
    you.lie();
}