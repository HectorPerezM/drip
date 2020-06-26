#ifndef READER_H
#define READER_H

#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <map>

#include "word/word.hpp"

using namespace std;

class Reader
{
private:
    set<int> indexDocIds;

    void splitLine(vector<string> *data, string line, string delimiter);

public:
    Reader();

    bool readWordsFile(Word *words, string wordFilePath);
};

#endif