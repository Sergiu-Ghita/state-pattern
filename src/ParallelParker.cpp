#include <iostream>
#include "ParallelParker.h"
#include "On.h"
#include <automotivedata/GeneratedHeaders_AutomotiveData.h>

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
            bool driver = true;
            while (getModuleStateAndWaitForRemainingTimeInTimeslice() == odcore::data::dmcp::ModuleStateMessage::RUNNING) {

                // get driver flags and interpret flag for parking:
                // if flag is to stop m_park_machine->stop()
                // if flag is to start m_park_machine->start()

                if(driver) {
                    SensorBoardData sbd = getKeyValueDataStore().get(automotive::miniature::SensorBoardData::ID()).getData<SensorBoardData>();
                    VehicleData vd = getKeyValueDataStore().get(automotive::VehicleData::ID()).getData<VehicleData>();
                    //VehicleControl vc = getKeyValueDataStore().get(automotive::VehicleControl::ID()).getData<VehicleControl>();
                    m_park_machine->update(&sbd);
                    m_park_machine->update(&vd);
                    m_park_machine->on();
                    //driver = false;
                } else {
                    m_park_machine->off();
                    driver = true;
                }
            }
                     
            return odcore::data::dmcp::ModuleExitCodeMessage::OKAY;    
            }

        }   
    }   
    
