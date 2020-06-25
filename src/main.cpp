#include <iostream>

#include "pipeline/pipeline.hpp"

using namespace std;

/*
  Drip

  Options:
    
*/
int main() {
    system("clear");

    cout << "Drip is running ..." << endl;
    cout << endl;

    Pipeline p;
    if(!p.start())
        return EXIT_FAILURE;

    cout << endl;
    cout << "finished ..." << endl;
    return EXIT_SUCCESS;
}