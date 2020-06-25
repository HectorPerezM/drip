#include "pipeline/pipeline.hpp"

/* Private Methods*/
bool Pipeline::loadData() {
    cout << "   [loadData]" << endl;

    return true;
}

/* Public Methods */
Pipeline::Pipeline() {}

Pipeline::~Pipeline() {
}

bool Pipeline::start() {
    cout << endl;
    cout << "Start Pipeline" << endl;
    cout << endl;

    if(!this->loadData())
        return false;


    
    cout << endl;
    cout << "Pipeline finished sucessfully." << endl;
    return true;
}