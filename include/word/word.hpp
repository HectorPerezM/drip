#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

#include "word/wordData.hpp"

using namespace std;

class Word {
   private:
        map<string, WordData> data;

    public:
        Word();

        bool insert(string key, int id, int freq);
        void display(int max);
        bool checkKeyExist(string key);
        int getId(string term);
};

#endif