#ifndef MY_STATE_H_
#define MY_STATE_H_
#include <string>

class ParkingMachine;
class State {
    public:
        virtual ~State();

        virtual void go_on(ParkingMachine * m) = 0;

        virtual void go_off(ParkingMachine * m) = 0;

        virtual int getID() = 0;

        virtual std::string getName() = 0;

};
#include "ParkingMachine.h"
#endif // MY_STATE_H_