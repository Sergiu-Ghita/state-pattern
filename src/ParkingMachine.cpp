#include <iostream>
#include "ParkingMachine.h"
#include "On.h"

ParkingMachine::ParkingMachine() :
    current_state(new On()) {}

ParkingMachine::~ParkingMachine() {
}

void ParkingMachine::setState(State *s){
	current_state = s;
}
void ParkingMachine::on(){
	current_state->go_on(this);
}
void ParkingMachine::off(){
	current_state->go_off(this);
}
