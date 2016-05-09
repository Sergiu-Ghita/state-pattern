#include <iostream>

#include "FindGap.h"
#include "MeasureGap.h"
#include "Off.h"

using namespace std;


FindGap::FindGap() :
m_id(2), m_name("FindGap")
{}

FindGap::~FindGap() {}

void FindGap::go_on(ParkingMachine * m){
    if(m->getState()->getID() != this->m_id){
    	throw std::string("Current state does not machine state");
    }

	double irfr = m->getIRFR();

	if(irfr < 0){
		cout << "Switching to MeasureGap" << endl;
		m->setState(new MeasureGap(m));
	} else {
		cout << "Continue FindGap" << endl;
	}
}

void FindGap::go_off(ParkingMachine * m){
    cout << "Switching to Off" << endl;
    m->setState(new Off());
}

int FindGap::getID(){
	return this->m_id;
}
std::string FindGap::getName(){
	return this->m_name;
}
