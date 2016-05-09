#include "State.h"

using namespace std;

class Machine {
    public:
        virtual ~State();
        
        virtual void on() = 0;
        virtual void off() = 0;

    private: 
        virtual void setCurrent(State *s) = 0;
};