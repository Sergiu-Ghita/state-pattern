#include "State.h"

using namespace std;

class ParkingMachine {
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
        virtual ~ParkingMachine();

    private:
        void setCurrent(State *s);
        void on();
        void off();
        State * current_state;
};