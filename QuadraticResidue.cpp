//
// Created by Laurie Luo on 10/15/22.
//
#include "ModOperations.cpp"
int LegendreSymbolWithGauss(long long a, long long p) {
    //Using the way of Gauss.
    long long m = 0;
    if(!(a%p)) return 0;
    else if(gcd(a, p) == 1) {
        for(long long i = 1; i <= (p-1)/2; i++)
            if((double)(a*i % p) > (double)(p/2)) m++;
        return m%2 ? -1 : 1;
    }
    else return -114514;
}
void LegendreSymbol(long long a, long long p) {
    printf("LegendreSymbol (%lld/%lld) = %d\n", a, p, LegendreSymbolWithGauss(a, p));
}
