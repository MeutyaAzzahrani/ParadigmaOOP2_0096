#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya function dari base class";
    }
};

class deviredClass : public baseClass {
public:
    void perkenalan(){
        cout << "Hallo saya Function dari derived Class";
    }
};

int main() {
    deviredClass a;
    a.perkenalan();

    return 0;
};