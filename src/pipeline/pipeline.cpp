#include "pipeline/pipeline.hpp"

/* Private Methods*/
bool Pipeline::loadData() {
    cout << "   [loadData]" << endl;

    /* Load Word File */
    if(!this->reader.readWordsFile(&this->words, this->wordFilePath)) {
        cout << "Failed to load data from Word file." << endl;
        return false;
    }
    this->words.display(26);

    return true;
}

/* Public Methods */
Pipeline::Pipeline(string iflag, string wflag, string qflag) {
    this->indexFilePath = iflag;
    this->wordFilePath = wflag;
    this->queryFilePath = qflag;
}

Pipeline::~Pipeline() {
}

bool Pipeline::start() {
    cout << "[start]" << endl;

    //Load word, queries and index files
    if(!this->loadData())
        return false;

    //Ranks
    
    return true;
}