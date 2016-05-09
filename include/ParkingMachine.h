#ifndef MY_MACHINE_PARKING_H_
#define MY_MACHINE_PARKING_H_

#include "Machine.h"
#include "State.h"

using namespace std;

class ParkingMachine : Machine {
    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         */
        ParkingMachine(const ParkingMachine &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        ParkingMachine& operator=(const ParkingMachine &);

    public:
        ParkingMachine();
        ~ParkingMachine();
        void on();
        void off();

    private:
        void setState(State *s);
        State * current_state;
};

#endif // MY_MACHINE_PARKING_H_