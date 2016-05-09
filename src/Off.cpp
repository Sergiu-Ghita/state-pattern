#include <iostream>

#include "Off.h"
#include "On.h"

using namespace std;

Off::Off() : m_id(0), m_name("Off") {}

Off::~Off() {}

void Off::go_off(ParkingMachine * m){
    if(m->getState()->getID() == this->m_id){
    	cout << " Already Off!" << endl;
    	m->setState(new On());	
    } else {
    	cout << " Turning Off!" << endl;	
    	m->setState(new Off()); // Compiler complained m is not used	
    }
}

void Off::go_on(ParkingMachine * m){
    cout << "   going from Off to ON" << endl;
    On * my_On = new On();
    m->setState(my_On);
}

int Off::getID(){
	return this->m_id;
}
std::string Off::getName(){
	return this->m_name;
}
