#include <iostream>

#include "FindGap.h"
#include "MeasureGap.h"
#include "Off.h"

using namespace std;

MeasureGap::MeasureGap(ParkingMachine * m) : 
m_id(3), m_name("MeasureGap"),
initial_distance(), 
final_distance() {
	initial_distance = m->getAbsPath();
}

MeasureGap::~MeasureGap() {}

void MeasureGap::go_on(ParkingMachine * m){

	// Maybe use machine in constructor instead and set initial distance there?

	if(m->getState()->getID() != this->m_id){
    	throw std::string("Current state does not machine state");
    }

    double irfr = m->getIRFR();
    double required_distance = 500;

	if(irfr > 0){
		final_distance = m->getAbsPath();

		cout << "Found gap end. Gap size is: " << final_distance - initial_distance << endl;
		if(final_distance - initial_distance > required_distance){
			cout << "Switching to GoParalel" << endl;
			m->setState(new FindGap());
		} else {
			cout << "Switching to FindGap" << endl;
			m->setState(new FindGap());
		}
	} else {
		cout << "Continuing MeasureGap" << endl;
	}
}

void MeasureGap::go_off(ParkingMachine * m){
    cout << "Switching to Off" << endl;
    m->setState(new Off());
}

int MeasureGap::getID(){
	return this->m_id;
}
std::string MeasureGap::getName(){
	return this->m_name;
}