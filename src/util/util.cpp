#include "util/util.hpp"

Util::Util() {
    //Flags
    this->iflag = "";
    this->qflag = "";
    this->wflag = "";
    this->rflag = -1;
    this->sflag = -1;
    this->kflag = -1;
}

bool Util::getParamters(int argc, char **argv) {
    int index;
    int option;

    opterr = 0;

    while ((option = getopt(argc, argv, "i:q:w:r:s:k:")) != -1)
        switch (option) {
            case 'q':
                this->qflag = optarg;
                break;
            case 'i':
                this->iflag = optarg;
                break;
            case 'w':
                this->wflag = optarg;
                break;
            case 'r':
                this->rflag = atoi(optarg); //Handle error
                break;
            case 's':
                this->sflag = atoi(optarg); //Handle error
                break;
            case 'k':
                this->kflag = atoi(optarg);
                break;
            case '?':
                if (optopt == 'q' || optopt == 'i' || optopt == 'w' || optopt == 'r' || optopt == 's' || optopt == 'k')
                    fprintf(stderr, "Option -%c requires an argument.\n", optopt);
                else if (isprint(optopt))
                    fprintf(stderr, "Unknown option `-%c'.\n", optopt);
                else
                    fprintf(stderr, "Unknown option character `\\x%x'.\n", optopt);
                return false;
            default:
                abort();
        }

    for (index = optind; index < argc; index++)
        printf("Non-option argument %s\n", argv[index]);
    
    return true;
}