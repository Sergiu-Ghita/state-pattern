#include <iostream>

#include "On.h"
#include "Off.h"

using namespace std;

On::On() {}

On::~On() {}

void On::go_on(Machine * m){
    cout << " Already On!" << endl;
    m->setState(new On()); // Compiler complained m is not used
}

void On::go_off(Machine * m){
    cout << "   going from ON to OFF" << endl;
    m->setState(new Off());
}
