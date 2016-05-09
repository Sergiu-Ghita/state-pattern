#include "Machine.h"

class State {
    public:
        virtual ~State();

        virtual void on(Machine * m) = 0;

        virtual bool off(Machine * m) = 0;
};