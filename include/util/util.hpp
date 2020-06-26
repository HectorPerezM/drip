#ifndef UTIL_H
#define UTIL_H

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string>

using namespace std;

class Util
{
public:
    string iflag, qflag, wflag;
    int rflag, sflag, kflag;
    
    Util();

    bool getParamters(int argc, char **argv);
};

#endif