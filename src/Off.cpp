#include <iostream>

#include "Off.h"
#include "On.h"

using namespace std;

Off::Off() {}

Off::~Off() {}

void Off::go_off(Machine * m){
    cout << " Already Off!" << endl;
    m->setState(new Off()); // Compiler complained m is not used
}

void Off::go_on(Machine * m){
    cout << "   going from Off to ON" << endl;
    On * my_On = new On();
    m->setState(my_On);
}
