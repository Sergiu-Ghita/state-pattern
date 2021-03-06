#ifndef MY_STATE_OFF_H_
#define MY_STATE_OFF_H_

#include "State.h"

class Off : public State {

    private:
        /**
         * "Forbidden" copy cOffstructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy cOffstructor.
         */
        Off(const Off &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        Off& operator=(const Off &);

    public:
        Off();
        ~Off();

        void go_off(ParkingMachine * m);
        void go_on(ParkingMachine * m);

        int getID();
        std::string getName();

    private:
        const int m_id ;
        const std::string m_name;
};
#endif //MY_STATE_OFF_H_