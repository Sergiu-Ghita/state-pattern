#ifndef MY_STATE_ON_H_
#define MY_STATE_ON_H_

#include "State.h"

class On : public State {

    private:
        /**
         * "Forbidden" copy constructor. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the copy constructor.
         */
        On(const On &);

        /**
         * "Forbidden" assignment operator. Goal: The compiler should warn
         * already at compile time for unwanted bugs caused by any misuse
         * of the assignment operator.
         */
        On& operator=(const On &);

    public:
        On();
        ~On();

        void go_on(Machine * m);

        void go_off(Machine * m);
};
#endif //MY_STATE_ON_H_