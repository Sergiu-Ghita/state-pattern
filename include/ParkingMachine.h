#ifndef MY_MACHINE_PARKING_H_
#define MY_MACHINE_PARKING_H_

#include "Machine.h"
#include "State.h"
#include <automotivedata/GeneratedHeaders_AutomotiveData.h>

using namespace std;
using namespace odcore::base;
using namespace odcore::data;
using namespace automotive;
using namespace automotive::miniature;


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

        void update(automotive::miniature::SensorBoardData * sbd);
        void update(automotive::VehicleData * vd);

        double getAbsPath();
        double getIRFR();
        void setState(State *s);
        State * getState();
    private:
        State * current_state;
        automotive::miniature::SensorBoardData * m_sbd;
        automotive::VehicleData * m_vd;
};

#endif // MY_MACHINE_PARKING_H_