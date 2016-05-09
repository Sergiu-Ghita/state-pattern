#include <iostream>
#include "ParallelParker.h"
#include "On.h"

namespace automotive {
    namespace miniature {

        using namespace std;
        using namespace odcore::base;
        using namespace odcore::data;
        using namespace automotive;
        using namespace automotive::miniature;

        ParallelParker::ParallelParker(const int32_t &argc, char **argv) :
                TimeTriggeredConferenceClientModule(argc, argv, "ParallelParker"),
                m_park_machine() {
        }

        ParallelParker::~ParallelParker() {}

        void ParallelParker::setUp() {
            m_park_machine = new ParkingMachine();
        }

        void ParallelParker::tearDown() {
        }

        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode ParallelParker::body() {
            int counter = 0;
            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

                // get driver flags and interpret flag for parking:
                // if flag is to stop m_park_machine->stop()
                // if flag is to start m_park_machine->start()

                if(counter % 2 == 0){
                    m_park_machine->on();    
                } else {
                    m_park_machine->off();    
                }
                counter++;
            }
                     
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;    
            }

        }   
    }   
    
