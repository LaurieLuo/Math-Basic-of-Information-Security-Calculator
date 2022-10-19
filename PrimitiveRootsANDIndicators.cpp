//
// Created by Laurie Luo on 10/19/22.
//
#include <cstdio>
#include "header.h"
long long EulerFx(long long a) {
    long long num = 0;
    for(int i = 1; i < a; i++) {
        if(gcd(i, a) == 1)
            num++;
    }
    return num;
}
void printEulerFx(long long a) {
    printf("Euler of %lld: %lld\n", a, EulerFx(a));
}
void OrdmAndRoot(long long m) {
    printf("\ta\tordm(a)\n");
    printf("\t1\t1\n");
    for(long long i = 2; i <= m; i++) {
        if(gcd(i, m) != 1)
            continue;
        long long ord = i;
        int pow = 1;
        while(ord != 1) {
            ord *= i;
            pow++;
            ord %= m;
        }
        printf("\t%lld\t%d\n", i, pow);
    }
}