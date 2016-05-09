#include <iostream>
#include "ParallelParker.h"

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
        }

        void ParallelParker::tearDown() {
        }

        odcore::data::dmcp::ModuleExitCodeMessage::ModuleExitCode ParallelParker::body() {
            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

                // get driver flags and interpret flag for parking:
                // if flag is to stop m_park_machine->stop()
                // if flag is to start m_park_machine->start()

                m_park_machine->on();
                m_park_machine->off();
            }
                     
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;    
            }

        }   
    }   
    
