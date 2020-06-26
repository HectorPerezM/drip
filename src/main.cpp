#include <iostream>

#include "pipeline/pipeline.hpp"
#include "util/util.hpp"

using namespace std;

/*
  Drip

  Options:
    
*/
int main(int argc, char **argv) {
    system("clear");

    cout << "Drip is running ..." << endl;
    cout << endl;
    
    Util u;
    if(!u.getParamters(argc, argv))
        return EXIT_FAILURE;

    Pipeline p(u.iflag, u.wflag, u.qflag);
    if(!p.start())
        return EXIT_FAILURE;

    cout << endl;
    cout << "finished ..." << endl;
    return EXIT_SUCCESS;
}