//
// Created by Laurie Luo on 10/15/22.
//
#include <cstdio>
#include <iostream>
#include "header.h"

void FastMod(long long base, long long index, long long m) {
    long long a = base, b = index;
    while(index) {
        if(index >= 2) {
            base = base * base % m;
            index -= 2;
        }
        else if(index == 1) {
            base %= m;
            index--;
        }
    }
    std::cout << a <<"^" << b << " (mod " << m <<") === " << base << " (mod " << m << ")" << '\n';
}
void Mod(long long a, long long m) {
    std::cout << a << " % " << m << " = " <<  a % m << '\n';
}
void InverseOfMod(long long a, long long p) {
    int j = 0;
    long long Rj[200], Rjp1[200], Qj[200], Rjp2[200], Sj[200];
    Rj[j] = a, Rjp1[j] = p, Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 1;
    j++;
    Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j], Sj[j] = 0;
    while(Rjp2[j++] != 0) {
        Rj[j] = Rjp1[j-1], Rjp1[j] = Rjp2[j-1], Qj[j] = Rj[j]/Rjp1[j], Rjp2[j] = Rj[j]%Rjp1[j],
        Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1];
    }
    Sj[j] = Sj[j-2]-Qj[j-2]*Sj[j-1];
    printf("The inverse of %lld(mod %lld): %lld*%lld === 1(mod %lld)\n", a, p, a, Sj[j], p);
}
long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a%b);
}
long long lcm(long long a, long long b) {
    return a/gcd(a, b)*b;
}
void GCD(long long a, long long b) {
    printf("GCD(%lld, %lld) = %lld\n", a, b, gcd(a, b));
}
void LCM(long long a, long long b) {
    printf("LCM(%lld, %lld) = %lld\n", a, b, lcm(a, b));
}
void Prime(long long n) {
    bool prime = true;
    long long i;
    for(i = 2ll; i*i <= n; i++) {
        if(prime%i == 0) {
            prime = false;
            break;
        }
    }
    printf(prime ? "Prime!\n" : "Not Prime!\n");
}
long long ModRespeatSquare(long long Base, long long Power, long long Mod){
    int a = 1;
    long long b = Base;
    long long pp = Power;
    std::cout << Power << "=";
    int i = 0;
    long long p = Power;
    while (p >= 1) {
        int n = p % 2;
        p /= 2;
        if (p != 0) {
            std::cout << n << "*2^" << i << " + ";
            i++;
        }
        else {
            std::cout << n << " * 2^" << i << std::endl << std::endl;
            i++;
        }

    }
    int j = 0;
    while (Power >= 1) {
        int n = Power % 2;
        Power /= 2;
        std::cout << "n" << j << "=" << n << std::endl;
        if (n) {
            a = a * Base % Mod;
        }
        Base = Base * Base % Mod;
        std::cout << "    a" << j << "=" << " a" << j - 1 << " * b" << j << " = " << a <<"(mod " << Mod<<")" << std::endl;
        if (Power == 0) {
            std::cout << std::endl;
            std::cout << "    " << b << "^" << pp << " mod " << Mod << " = " << a << std::endl;
            std::cout << "    >>>>>>  over!  <<<<<<" << std::endl;
        }
        else {
            std::cout << "    b" << j + 1 << " = " << "b" << j << "^2 =" << Base << "(mod " << Mod << ")" << std::endl;
        }
        j++;
    }
    return a;
}