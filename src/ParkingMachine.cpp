#include "ParkingMachine.h"


using namespace odcore::base;

ParkingMachine::ParkingMachine() :
    current_state() {}

ParkingMachine::~ParkingMachine() {
}

void ParkingMachine::setCurrent(State *s){
	current_state = s;
}
void ParkingMachine::on(){
	current_state->on(this);
}
void ParkingMachine::off(){
	current_state->off(this);
}
