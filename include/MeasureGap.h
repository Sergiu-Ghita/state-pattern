#ifndef MY_STATE_MEASURE_GAP_H_
#define MY_STATE_MEASURE_GAP_H_

#include "State.h"

class MeasureGap : public State {

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         */
        MeasureGap(const MeasureGap &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        MeasureGap& operator=(const MeasureGap &);

    public:
        MeasureGap();
        MeasureGap(ParkingMachine * m);
        ~MeasureGap();

        void go_on(ParkingMachine * m);

        void go_off(ParkingMachine * m);
        int getID();
        std::string getName();

    private:
        const int m_id ;
        const std::string m_name;
        double initial_distance;
        double final_distance;
};
#endif //MY_STATE_MEASURE_GAP_H_