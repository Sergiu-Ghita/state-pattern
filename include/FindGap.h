#ifndef MY_STATE_FIND_GAP_H_
#define MY_STATE_FIND_GAP_H_

#include "State.h"

class FindGap : public State {

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         */
        FindGap(const FindGap &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        FindGap& operator=(const FindGap &);

    public:
        FindGap();
        ~FindGap();

        void go_on(ParkingMachine * m);

        void go_off(ParkingMachine * m);
        
        int getID();
        std::string getName();

    private:
        const int m_id ;
        const std::string m_name;
};
#endif //MY_STATE_FIND_GAP_H_