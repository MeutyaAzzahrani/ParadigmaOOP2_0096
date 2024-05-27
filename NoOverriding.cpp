#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() final {
        cout << "Hallo saya function dari bace class";
    }
};

class deviredClass : public baseClass {
public:
    void perknalan(){
        cout << "Hallo saya Function dari derived Class";
    }
};