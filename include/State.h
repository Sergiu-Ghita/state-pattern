#ifndef MY_STATE_H_
#define MY_STATE_H_
class Machine;
class State {
    public:
        virtual ~State();

        virtual void go_on(Machine * m) = 0;

        virtual void go_off(Machine * m) = 0;

};
#include "Machine.h"
#endif // MY_STATE_H_