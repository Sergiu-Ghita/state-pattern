#include <sstream>

#include "On.h"

using namespace std;

On::On() {}

On::~On() {}

void On::on(ParkingMachine * m){
    cout << " Already On!" << endl;
    m->setState(new On()); // Compiler complained m is not used
}

bool On::off(ParkingMachine * m){
    cout << "   going from ON to OFF";
    m->setState(new Off());
}
