#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "header.h"

int main(int argc, char *argv[]) {
    if(argc < 3) {
        usage();
        exit(-1);
    }
    else
        logic(argc, argv);
    return 0;
}