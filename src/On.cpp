#include <sstream>

#include "On.h"

using namespace std;

On::On() {}

On::~On() {}

void On::on(Machine * m){
    cout << " Already On!" << endl;
    m->setState(new On()); // Compiler complained m is not used
}

bool On::off(Machine * m){
    cout << "   going from ON to OFF";
    m->setState(new Off());
}
