//
// Created by Laurie Luo on 10/15/22.
//
#include <cstdio>
#include "header.h"
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
    printf("LegendreSymbol (%lld/%lld) = %d \n", a, p, LegendreSymbolWithGauss(a, p));
}
void BubbleSort(long a[], int f, int n) {
    //Sort from f to n, f is a[f], n is the amount of elements
    int i, j, hold, flag;
    for(i = 0; i < n-f-1; i++) {
        flag = 0;
        for(j = f; j < n; j++) {
            if(a[j] > a[j+1]) {
                hold = a[j];
                a[j] = a[j+1];
                a[j+1] = hold;
                flag = 1;
            }
        }
        if(flag == 0)
            break;
    }
}
void QuadraticResidueModP(long p) {
    long i = 1, j = 0;
    long sr[200];
    int lsr = 0;
    while(((p+1)/2 != i) && p != 2) {
        sr[j++] = i*i%p;
        printf("%ld^2 === %ld^2 === %ld\n", i, p-i, sr[j-1]);
        i++;
    }
    BubbleSort(sr, 0, j);
    printf("Quadratic residue: ");
    for(i = 0; i < j; i++)
        printf("%ld ", sr[i]);
    putchar('\n');
    printf("Not quadratic residue: ");
    for(i = 2; i < p; i++) {
        bool find = false;
        int k = 0;
        while(k < j) {
            if(i == sr[k]) {
                find = true;
                break;
            }
            k++;
        }
        if(find)
            continue;
        else
            printf("%ld ", i);
    }
    putchar('\n');
}