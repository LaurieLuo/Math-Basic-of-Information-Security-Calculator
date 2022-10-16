//
// Created by Laurie Luo on 10/16/22.
//
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "header.h"
void logic(int argc, char *argv[]) {
    // basic algorithms
    if (strcmp(argv[1], "fm") == 0 and argc == 5)
        FastMod(atoll(argv[2]), atoll(argv[3]), atoll(argv[4]));
    if (strcmp(argv[1], "mod") == 0 and argc == 4)
        Mod(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "bz") == 0 and argc == 4)
        BezoutsIdentity(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "inv") == 0 and argc == 4)
        InverseOfMod(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "gcd") == 0 and argc == 4)
        GCD(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "lcm") == 0 and argc == 4)
        LCM(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "mrs") == 0 and argc == 5)
        ModRespeatSquare(atoll(argv[2]), atoll(argv[3]), atoll(argv[4]));
    // quadratic residue related
    if (strcmp(argv[1], "le") == 0 and argc == 4)
        LegendreSymbol(atoll(argv[2]), atoll(argv[3]));
    if (strcmp(argv[1], "qr") == 0 and argc == 3)
        QuadraticResidueModP(atoll(argv[2]));
}