#include <iostream>
#include <string>
using namespace std;

class Idiot {
    public:
    int iq = 0;
    string name;
    void genocide(string ethnicity) {
        cout << name << " has killed every " << ethnicity << " within 100 sq.km of his current location. Is this what you really want? monster" << endl;
    }
};

class UpdatedIdiot {
    private:
    int iq = 0;
    public:
    string name;
    string leastFavouriteEthnicity;
    int range;
    void genocide() {
        cout << name << " has killed every " << leastFavouriteEthnicity << " within " << range << " km of his location. i have nothing to say because you wont change" << endl;
    }
    void setIQ(int brainjuice) {
        iq = brainjuice;
    }
    void getIQ() {
        cout << iq << endl;
    }
    UpdatedIdiot(string n, string l, int r) {
        name = n;
        leastFavouriteEthnicity = l;
        range = r;
    }
};

class AnotherUpdatedIdiot: public Idiot {
    public:
    void say() {
        cout << "hi" << endl;
    }
};

class AnotherAnotherUpdatedIdiot: public AnotherUpdatedIdiot {
    public:
    void say1() {
        cout << "bye" << endl;
    }
};

class YetAnotherIdiot: public Idiot, public UpdatedIdiot {
    public:
    void wow() {
        cout << "wow" << endl;
    }
};

int main(void){
    Idiot nap;
    nap.name = "Napoleon Bonaparte";
    Idiot greg;
    greg.name = "gerg";

    cout << nap.name << " is stupid i think" << "\n";
    cout << greg.name << " has good intentions but is very stupid" << endl;
    nap.genocide("french person"); //yes
    greg.genocide("gamer"); //noo gerg why would you do this

    cout << endl;

    UpdatedIdiot josh("josh", "trout", 20); 
    UpdatedIdiot bob("bob", "demigod", 1000);
    josh.genocide(); //this will not greatly affect the trout population
    bob.genocide(); //this will greatly affect the Percy Jackson population(1)
    cout << endl;
    josh.setIQ(500);
    josh.getIQ();
    bob.setIQ(-55); //something something River Lethe
    bob.getIQ();
 
    cout << endl;

    AnotherUpdatedIdiot hi;
    hi.name = "hi";
    hi.say();
    hi.genocide("hi");

    cout << endl;

    AnotherAnotherUpdatedIdiot bye;
    bye.name = "bye";
    bye.genocide("bye");
    bye.say();
    bye.say1();

    cout << endl;
}