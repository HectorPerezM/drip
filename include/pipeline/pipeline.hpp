#ifndef PIPELINE_H
#define PIPELINE_H

#include <iostream>
#include <vector>
#include <string>

#include "reader/reader.hpp"
#include "word/word.hpp"

using namespace std;

class Pipeline {
   private:
    /* Files */
    string wordFilePath, indexFilePath, queryFilePath;

    Reader reader;
    Word words;

    /* Private Methods */
    bool loadData();

   public:
    Pipeline(string iflag, string wflag, string qflag);
    ~Pipeline();

    /* Public Methods */
    bool start();
};

#endif