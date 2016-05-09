#ifndef MY_MACHINE_H_
#define MY_MACHINE_H_

class State;
class Machine {
    public:
        ~Machine();

        virtual void on() = 0;
        virtual void off() = 0;

    public: 
        virtual void setState(State *s) = 0;
        virtual State * getState() = 0;
};

#include "State.h"

#endif // MY_MACHINE_H_