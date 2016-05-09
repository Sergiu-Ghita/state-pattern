#include <sstream>

#include "Off.h"

using namespace std;

Off::Off() {}

Off::~Off() {}

void Off::off(Machine * m){
    cout << " Already Off!" << endl;
    m->setState(new Off()); // Compiler complained m is not used
}

bool Off::on(Machine * m){
    cout << "   going from Off to ON";
    m->setState(new ON());
}
