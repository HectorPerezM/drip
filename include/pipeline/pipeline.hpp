#ifndef PIPELINE_H
#define PIPELINE_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pipeline {
   private:
    /* Files */
    string wordFilePath;
    string indexFilePath;
    string queryFilePath;

    /* Private Methods */
    bool loadData();

   public:
    Pipeline();
    ~Pipeline();

    /* Public Methods */
    bool start();
};

#endif