#include "reader/reader.hpp"

/* Private methods */
void Reader::splitLine(vector<string> *data, string line, string delimiter) {
    size_t pos = 0;
    string token;

    while ((pos = line.find(delimiter)) != string::npos) {
        token = line.substr(0, pos);
        data->push_back(token);
        line.erase(0, pos + delimiter.length());
    }
    
    data->push_back(line);
}

/* Public methods */

Reader::Reader() {

}

bool Reader::readWordsFile(Word *w, string wordFilePath) {
    cout << "       [readWordsFile] " << endl;
    string line;
    ifstream file(wordFilePath);

    if (file.good()) {
        //int i = 0;
        while (getline(file, line)) {
            string delimiter = ",";
            vector<string> tokens;
            this->splitLine(&tokens, line, delimiter);

            if(!w->insert(tokens[0], stoi(tokens[1]), stoi(tokens[2]))) {
                cout << "       readWordsFile failed to insert data." << endl;
            }
        }
    } else {
        cout << "       Something failed while reading: " << wordFilePath << endl;
        return false;
    }
    return true;
}
