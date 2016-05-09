#include <iostream>

#include "On.h"
#include "Off.h"
#include "FindGap.h"

using namespace std;

On::On() : m_id(1), m_name("On") {}

On::~On() {}

void On::go_on(ParkingMachine * m){
    
    if(m->getState()->getID() == this->m_id){
    	cout << " FROM ON TO FINDGAP!" << endl;	
    	m->setState(new FindGap());
    	//m->setState(new Off());
    } else {
    	cout << " Turning On!" << endl;	
    	m->setState(new On()); // Compiler complained m is not used	
    }
}

void On::go_off(ParkingMachine * m){
    cout << "   going from ON to OFF" << endl;
    m->setState(new Off());
}

int On::getID(){
	return this->m_id;
}
std::string On::getName(){
	return this->m_name;
}