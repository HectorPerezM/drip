#include "word/word.hpp"

/* Private methods */

/* Public methods */
Word::Word() = default;


void Word::display(int max) {
    cout << "       data: " << endl;

    int i = 0;
    for(auto it=this->data.begin(); it != this->data.end(); ++it) {
        cout << "           key: " << it->first << ", <" << it->second.getId() << ", "<< it->second.getFreq() << ">" << endl;
        ++i;

        if(i == max)
            it = this->data.end();
    }
}

bool Word::insert(string key, int id, int freq) {
    if (key.empty()) {
        cout << "Key can't be empty." << endl;
        return false;
    }

    if(id < 0) {
        cout << "Word Id is lower than 0." << endl;
        return false;
    }

    if(freq < 0) {
        cout << "Word Frequency is lower than 0." << endl;
        return false;
    }

    //Check insert correctly
    WordData tmp(id, freq);
    const auto [_, success] = this->data.insert({key, tmp});
    if(!success) {
        cout << "   Couldn't insert freq." << endl;
        return false;
    }

    return true;
}

bool Word::checkKeyExist(string key) {
    return this->data.count(key) == 1;
}

int Word::getId(string term) {

    auto it = this->data.find(term);
    if(it != this->data.end()) {
        return it->second.getId();
    }

    return -1;
}
