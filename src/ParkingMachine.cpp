#include <iostream>
#include "ParkingMachine.h"
#include "On.h"

ParkingMachine::ParkingMachine() :
    current_state(new On()),
    m_sbd(),
    m_vd()
     {}

ParkingMachine::~ParkingMachine() {
}

void ParkingMachine::setState(State *s){
	current_state = s;
}

State * ParkingMachine::getState(){
	return this->current_state;
}

void ParkingMachine::on(){
	current_state->go_on(this);
}
void ParkingMachine::off(){
	current_state->go_off(this);
}

void ParkingMachine::update(automotive::miniature::SensorBoardData * sbd){
	this->m_sbd = sbd;
}

void ParkingMachine::update(automotive::VehicleData * vd){
	this->m_vd = vd;
}

double ParkingMachine::getAbsPath(){
	return this->m_vd->getAbsTraveledPath();
}
double ParkingMachine::getIRFR(){
	return this->m_sbd->getValueForKey_MapOfDistances(0);
}
