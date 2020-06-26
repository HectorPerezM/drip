#include "word/wordData.hpp"

WordData::WordData() {
    this->id = -1;
    this->freq = -1;
}

WordData::WordData(int _id, int _freq) {
    this->id = _id;
    this->freq = _freq;
}

int WordData::getId() { return this->id; }
int WordData::getFreq() { return this->freq; }