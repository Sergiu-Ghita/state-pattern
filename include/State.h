#include "ParkingMachine.h"

class State {
    public:
        virtual ~State();

        virtual void on(ParkingMachine * m) = 0;

        virtual bool off(ParkingMachine * m) = 0;
};